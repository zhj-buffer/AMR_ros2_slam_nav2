# ROS2_rada_driver
Uart Rada driver for ROS2 Foxy/Galactic on Jetson (JP4.6)

# Get the repo
```
mkdir -p src/dev_ws  && git clone https://github.com/zhj-buffer/ROS2_rada_driver.git
cd ..
```
# Build from source
```
colcon build
source install/setup.bash
```

# launch the rada node
```
ros2 run   ros2_rada_driver_pub  rada_pub 

nvidia@nvidia-desktop:~/workspace/alan/test$ ros2 run   ros2_rada_driver_pub  rada_pub 
[INFO] [1638363813.736611966] [RadaPublisher]:  Raw: ff 07 65 00 00 07 c0 ee ee 0e  n: 10 

[INFO] [1638363813.737728792] [RadaPublisher]: CRC: 000e 
[INFO] [1638363813.737887872] [RadaPublisher]: Rada CRC right!
[INFO] [1638363813.883525403] [RadaPublisher]:  Raw: ff 07 65 00 00 00 5d ee ee a4  n: 10 

[INFO] [1638363813.883872269] [RadaPublisher]: CRC: 00a4 
[INFO] [1638363813.884132667] [RadaPublisher]: Rada CRC right!
[INFO] [1638363814.029533098] [RadaPublisher]:  Raw: ff 07 65 00 00 00 5d ee ee a4  n: 10 

[INFO] [1638363814.029958944] [RadaPublisher]: CRC: 00a4 
[INFO] [1638363814.030161578] [RadaPublisher]: Rada CRC right!
[INFO] [1638363814.176427942] [RadaPublisher]:  Raw: ff 07 65 00 00 00 5d ee ee a4  n: 10 

```

# Get the msg interface
```
nvidia@nvidia-desktop:~/workspace/alan/test$ ros2 interface show ros2_rada_msg/msg/Rada  
uint32 r1  
uint32 r2  
uint32 r3  
uint32 r4  
uint32 crc 
```

# Echo the Rada data from rada1 and rada2
```
ros2 topic echo /rada1
nvidia@nvidia-desktop:~/workspace/alan/test$ ros2 topic echo /rada1
r1: 1892 
r2: 0
r3: 93
r4: 61166
crc: 163
--- 
r1: 1897
r2: 0
r3: 93
r4: 61166
crc: 168
---
r1: 1893 
r2: 0
r3: 133
r4: 61166
crc: 204
```

```
ros2 topic echo /rada1
nvidia@nvidia-desktop:~/workspace/alan/test$ ros2 topic echo /rada2
r1: 1892 
r2: 0
r3: 93
r4: 61166
crc: 163
--- 
r1: 1897
r2: 0
r3: 93
r4: 61166
crc: 168
---
r1: 1893 
r2: 0
r3: 133
r4: 61166
crc: 204
```
