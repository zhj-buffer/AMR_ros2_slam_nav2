# ROS2-driver-for-Realsense
This is the ROS2 driver package for Realsense working on Jetson

# install the librealsense2 (2.50.0-0~realsense0.6162)
https://github.com/IntelRealSense/librealsense/blob/master/doc/distribution_linux.md 

```
sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE || sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE
sudo add-apt-repository "deb https://librealsense.intel.com/Debian/apt-repo $(lsb_release -cs) main" -u
sudo apt install librealsense2-dev
```

```
git clone https://github.com/zhj-buffer/ROS2-driver-for-Realsense.git
cd ROS2-driver-for-Realsense
```

# build
```
colcon build --symlink-install
```

# Run
```
ros2 launch realsense2_camera rs_launch.py
ros2 launch realsense2_camera rs_launch.py enable_pointcloud:=true device_type:=d435
ros2 launch realsense2_camera rs_launch.py config_file:="'$COLCON_PREFIX_PATH/realsense2_camera/share/realsense2_camera/config/d435i.yaml'"
```
 ![Screenshot from 2021-10-15 17-29-58](https://user-images.githubusercontent.com/27679222/144006670-68feb738-496c-44a6-87d2-2d9805934180.png)
