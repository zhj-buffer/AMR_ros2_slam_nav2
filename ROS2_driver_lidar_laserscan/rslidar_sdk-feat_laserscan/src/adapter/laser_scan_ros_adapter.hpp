/*********************************************************************************************************************
Copyright (c) 2020 RoboSense
All rights reserved

By downloading, copying, installing or using the software you agree to this license. If you do not agree to this
license, do not download, install, copy or use the software.

License Agreement
For RoboSense LiDAR SDK Library
(3-clause BSD License)

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following
disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the names of the RoboSense, nor Suteng Innovation Technology, nor the names of other contributors may be used
to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*********************************************************************************************************************/

#pragma once

#ifdef ROS_FOUND
#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/point_cloud2_iterator.h>
#include "adapter/adapter_base.hpp"
#include "msg/ros_msg_translator.h"

namespace robosense
{
namespace lidar
{
class LaserScanRosAdapter : virtual public AdapterBase
{
public:
  LaserScanRosAdapter() = default;
  ~LaserScanRosAdapter() = default;
  void init(const YAML::Node& config);
  void sendPointCloud(const LidarPointCloudMsg& msg);

private:
  void setRing(std::string& lidar_type, int ring);

  std::shared_ptr<ros::NodeHandle> nh_;
  ros::Publisher pub_;
  uint16_t height_;
  uint16_t ring_;
  int range_min_;
  int range_max_;
};

#define GET_RING(height, ring, zring)  ((0<=(ring)&&(ring)<(height))?(ring):(zring))

inline void LaserScanRosAdapter::setRing(std::string& lidar_type, int ring)
{
  --ring; // ring starts from 0

  if (lidar_type == "RS16")
  {
    height_ = 16;
    ring_ = GET_RING (height_, ring, 7);
    range_min_ = 0.4;
    range_max_ = 150.0;
  }
  else if (lidar_type == "RS32")
  {
    height_ = 32;
    ring_ = GET_RING (height_, ring, 9);
    range_min_ = 0.4;
    range_max_ = 200.0;
  }
  else if (lidar_type == "RSHELIOS")
  {
    height_ = 32;
    ring_ = GET_RING (height_, ring, 9);
    range_min_ = 0.2;
    range_max_ = 150.0;
  }
  else if (lidar_type == "RSBP")
  {
    height_ = 32;
    ring_ = GET_RING (height_, ring, 31);
    range_min_ = 0.1;
    range_max_ = 30.0;
  }
  else if (lidar_type == "RS80")
  {
    height_ = 80;
    ring_ = GET_RING (height_, ring, 74);
    range_min_ = 1.0;
    range_max_ = 230.0;
  }
  else if (lidar_type == "RS128")
  {
    height_ = 128;
    ring_ = GET_RING (height_, ring, 118);
    range_min_ = 1.0;
    range_max_ = 250.0;
  }
  else
  {
    std::cout << "wrong lidar type is given!" << std::endl;
    exit(-1);
  }

  std::cout << "set ring: " << ring_ << std::endl;
}

inline void LaserScanRosAdapter::init(const YAML::Node& config)
{
  nh_ = std::unique_ptr<ros::NodeHandle>(new ros::NodeHandle());

  bool send_laser_scan_ros;
  yamlRead<bool>(config, "send_laser_scan_ros", send_laser_scan_ros, false);

  if (send_laser_scan_ros)
  {
    std::string ros_send_topic;
    yamlRead<std::string>(config["ros"], "ros_send_laser_scan_topic", ros_send_topic, 
        "rslidar_laserscan");

    pub_ = nh_->advertise<sensor_msgs::LaserScan>(ros_send_topic, 10);
  }

  std::string lidar_type;
  YAML::Node driver_config = yamlSubNodeAbort(config, "driver");
  yamlReadAbort<std::string>(driver_config, "lidar_type", lidar_type);

  int ring;
  yamlRead<int>(config["ros"], "laser_scan_ring", ring, -1);
  setRing(lidar_type, ring);
}

inline void LaserScanRosAdapter::sendPointCloud(const LidarPointCloudMsg& lidar_msg)
{
  sensor_msgs::PointCloud2 msg = toRosMsg(lidar_msg);

  ROS_INFO_ONCE("RobosenseLaserScan. point cloud width %u, height %u, extracting ring %u", 
      msg.width, msg.height, ring_);

  // field offsets
  int offset_x = -1;
  int offset_y = -1;
  int offset_z = -1;
  int offset_i = -1;

  for (size_t i = 0; i < msg.fields.size(); i++)
  {
    if (msg.fields[i].datatype == sensor_msgs::PointField::FLOAT32)
    {
      if (msg.fields[i].name == "x")
      {
        offset_x = msg.fields[i].offset;
      }
      else if (msg.fields[i].name == "y")
      {
        offset_y = msg.fields[i].offset;
      }
      else if (msg.fields[i].name == "z")
      {
        offset_z = msg.fields[i].offset;
      }
      else if (msg.fields[i].name == "intensity")
      {
        offset_i = msg.fields[i].offset;
      }
    }
  }

  // ROS_INFO_ONCE ("offset x:%u, y:%u, z:%u, intensity:%u",
  // offset_x, offset_y, offset_z, offset_i);

  // laser scan msg
  if ((offset_x == 0) && (offset_y >= 0) && (offset_z >= 0) && (offset_i >= 0))
  {
    const float RESOLUTION = 0.0034906584;  // 2.0 * M_PI / 1800 (10Hz)
    const size_t SIZE = 2.0 * M_PI / RESOLUTION;

    sensor_msgs::LaserScanPtr scan(new sensor_msgs::LaserScan());
    scan->header = msg.header;
    scan->angle_increment = RESOLUTION;

    scan->angle_min = -M_PI;
    scan->angle_max = M_PI;

    scan->range_min = range_min_;
    scan->range_max = range_max_;

    scan->time_increment = 0.0;
    scan->ranges.resize(SIZE, INFINITY);
    scan->intensities.resize(SIZE);

    size_t i = 0;
    for (sensor_msgs::PointCloud2ConstIterator<float> it(msg, "x"); 
        it != it.end(); ++i, ++it)
    {
      if ((i % height_) == ring_)
      {
        static const size_t X = 0;
        static const size_t Y = offset_y / 4;
        static const size_t I = offset_i / 4;

        const float x = it[X];          // x
        const float y = it[Y];          // y
        const float intensity = it[I];  // intensity

        const int bin = (atan2f(y, x) + static_cast<float>(M_PI)) / RESOLUTION;
        if ((bin >= 0) && (bin < static_cast<int>(SIZE)))
        {
          scan->ranges[bin] = sqrtf(x * x + y * y);
          scan->intensities[bin] = intensity;
        }
      }
    }
//
    pub_.publish(scan);
  }
}

}  // namespace lidar
}  // namespace robosense
#endif  // ROS_FOUND

#ifdef ROS2_FOUND
#include <rclcpp/rclcpp.hpp>
#include "adapter/adapter_base.hpp"
#include "msg/ros_msg_translator.h"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include <tf2_sensor_msgs/tf2_sensor_msgs.h>

//#include <pcl_conversions/pcl_conversions.h>
//#include <sensor_msgs/msg/point_cloud2.hpp>
//#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

namespace robosense
{
namespace lidar
{
class LaserScanRosAdapter : virtual public AdapterBase
{
public:
  LaserScanRosAdapter() = default;
  ~LaserScanRosAdapter() = default;
  void init(const YAML::Node& config);
  void sendPointCloud(const LidarPointCloudMsg& msg);

private:
  std::shared_ptr<rclcpp::Node> node_ptr_;
  rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr laser_scan_pub_;
  void setRing(std::string& lidar_type, int ring);

  uint16_t height_;
  uint16_t ring_;
  int range_min_;
  int range_max_;
};

#define GET_RING(height, ring, zring)  ((0<=(ring)&&(ring)<(height))?(ring):(zring))

inline void LaserScanRosAdapter::setRing(std::string& lidar_type, int ring)
{
  --ring; // ring starts from 0

  if (lidar_type == "RS16")
  {
    height_ = 16;
    ring_ = GET_RING (height_, ring, 7);
    range_min_ = 0.4;
    range_max_ = 150.0;
  }
  else if (lidar_type == "RS32")
  {
    height_ = 32;
    ring_ = GET_RING (height_, ring, 9);
    range_min_ = 0.4;
    range_max_ = 200.0;
  }
  else if (lidar_type == "RSHELIOS")
  {
    height_ = 32;
    ring_ = GET_RING (height_, ring, 9);
    range_min_ = 0.2;
    range_max_ = 150.0;
  }
  else if (lidar_type == "RSBP")
  {
    height_ = 32;
    ring_ = GET_RING (height_, ring, 31);
    range_min_ = 0.1;
    range_max_ = 30.0;
  }
  else if (lidar_type == "RS80")
  {
    height_ = 80;
    ring_ = GET_RING (height_, ring, 74);
    range_min_ = 1.0;
    range_max_ = 230.0;
  }
  else if (lidar_type == "RS128")
  {
    height_ = 128;
    ring_ = GET_RING (height_, ring, 118);
    range_min_ = 1.0;
    range_max_ = 250.0;
  }
  else
  {
    std::cout << "wrong lidar type is given!" << std::endl;
    exit(-1);
  }

//  std::cout << "set ring: " << ring_ << std::endl;
}

inline void LaserScanRosAdapter::init(const YAML::Node& config)
{
  bool send_laser_scan_ros;
  node_ptr_.reset(new rclcpp::Node("rslidar_laserscan_adapter"));
  yamlRead<bool>(config, "send_laser_scan_ros", send_laser_scan_ros, false);
  if (send_laser_scan_ros) {
  	std::string ros_send_topic;
  	yamlRead<std::string>(config["ros"], "send_laser_scan_ros", ros_send_topic, "scan");
    laser_scan_pub_ = node_ptr_->create_publisher<sensor_msgs::msg::LaserScan>(ros_send_topic, 1);
  }

  std::string lidar_type;
  YAML::Node driver_config = yamlSubNodeAbort(config, "driver");
  yamlReadAbort<std::string>(driver_config, "lidar_type", lidar_type);

  int ring;
  yamlRead<int>(config["ros"], "laser_scan_ring", ring, -1);
  setRing(lidar_type, ring);

}

inline void LaserScanRosAdapter::sendPointCloud(const LidarPointCloudMsg& lidar_msg)
{

  sensor_msgs::msg::PointCloud2 msg = toRosMsg(lidar_msg);

//printf("RobosenseLaserScan. point cloud width %u, height %u, extracting ring %u",  msg.width, msg.height, ring_);

  // field offsets
  int offset_x = -1;
  int offset_y = -1;
  int offset_z = -1;
  int offset_i = -1;

  for (size_t i = 0; i < msg.fields.size(); i++)
  {
    if (msg.fields[i].datatype == sensor_msgs::msg::PointField::FLOAT32)
    {
      if (msg.fields[i].name == "x")
      {
        offset_x = msg.fields[i].offset;
      }
      else if (msg.fields[i].name == "y")
      {
        offset_y = msg.fields[i].offset;
      }
      else if (msg.fields[i].name == "z")
      {
        offset_z = msg.fields[i].offset;
      }
      else if (msg.fields[i].name == "intensity")
      {
        offset_i = msg.fields[i].offset;
      }
    }
  }

  // offset_x, offset_y, offset_z, offset_i);

  // laser scan msg
  if ((offset_x == 0) && (offset_y >= 0) && (offset_z >= 0) && (offset_i >= 0))
  {
    const float RESOLUTION = 0.0034906584;  // 2.0 * M_PI / 1800 (10Hz)
    const size_t SIZE = 2.0 * M_PI / RESOLUTION;

    sensor_msgs::msg::LaserScan::SharedPtr scan(new sensor_msgs::msg::LaserScan());
    scan->header = msg.header;
    scan->angle_increment = RESOLUTION;

    scan->angle_min = -M_PI;
    scan->angle_max = M_PI;

    scan->range_min = range_min_;
    scan->range_max = range_max_;

    scan->time_increment = 0.0;
    scan->ranges.resize(SIZE, INFINITY);
    scan->intensities.resize(SIZE);

    size_t i = 0;
    for (sensor_msgs::PointCloud2ConstIterator<float> it(msg, "x"); it != it.end(); ++i, ++it)
    {
      if ((i % height_) == ring_)
      {
        static const size_t X = 0;
        static const size_t Y = offset_y / 4;
        static const size_t I = offset_i / 4;

        const float x = it[X];          // x
        const float y = it[Y];          // y
        const float intensity = it[I];  // intensity

        const int bin = (atan2f(y, x) + static_cast<float>(M_PI)) / RESOLUTION;
        if ((bin >= 0) && (bin < static_cast<int>(SIZE)))
        {
          scan->ranges[bin] = sqrtf(x * x + y * y);
          scan->intensities[bin] = intensity;
        }
      }
    }

  	laser_scan_pub_->publish(*scan);
  }


}

}  // namespace lidar
}  // namespace robosense
#endif  // ROS2_FOUND
