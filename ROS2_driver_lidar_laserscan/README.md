# ROS2_driver_lidar_laserscan

# ROS2_driver_lidar
ROS2 (foxy) driver package for Lidar on Jetson


# Install dependencies
```
sudo apt-get update
sudo apt-get install -y libyaml-cpp-dev
sudo apt-get install -y libpcap-dev
```
# PCL-1.9.1 required, need to compile from source

# compile
``` 
mkdir -p dev_ws/src && cd dev_ws/src
git clone https://github.com/zhj-buffer/ROS2_driver_lidar_laserscan.git
cd ..
colcon build

source install/setup.bash
```

# launch
```
ros2 launch rslidar_sdk start.py
```
