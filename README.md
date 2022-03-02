

# ros2_slam_nav2
AMR on Jetson 

```
sudo apt install libgazebo9-dev
sudo apt install liblua5.3-dev libangles-dev

```

```
git clone https://github.com/ompl/ompl.git
cd ompl
mkdir build 
cd build 
cmake ..
make -j16
sudo make install 
sudo ldconfig
```

```
src/vision_opencv/cv_bridge/CMakeLists.txt
#install(TARGETS ${PROJECT_NAME}
#        RUNTIME DESTINATION bin
#        ARCHIVE DESTINATION lib
#        LIBRARY DESTINATION lib
#)
```
# build the AMR project
```
colcon build
```

# export the ENV
```
source  ./install/setup.bash
```

# launch the robot

```
ros2 launch amr_bring all.launch.py
```
![40F_map](https://user-images.githubusercontent.com/27679222/156326564-d1ab850e-9176-4f82-98bf-b30a924a4a9f.jpg)


![amr](https://user-images.githubusercontent.com/27679222/156326068-f38b1550-f9df-4bf2-a0a9-d893a616b85d.png)


https://user-images.githubusercontent.com/27679222/156332766-e67e1201-42a4-4d3f-a563-adaa5572028c.mp4

