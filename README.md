## AtomicPi

AtomicPi是一款低成本的Linux开发板，SoC是国产的全志V3s，追求极致的小巧设计，仅为银行卡的一半大小。AtomicPi面向机器人控制、图像采集传输等应用场景设计，麻雀虽小五脏俱全，它板载了MPU9250（内置6-DOF 加速度计、陀螺仪以及3-DOF磁力计）、SPL06-001高精度气压计（5cm），预留10bit CSI摄像头接口（支持OV2640,OV5640,OV7725等Camera），可以运行PX4固件，实现一个高性能飞控。预留Ethernet拓展接口，可搭配AtomicPi mate拓展板进行100M以太网接口拓展。

| 项目       | 参数                                                         |
| ---------- | ------------------------------------------------------------ |
| **CPU**    | 全志V3S， ARM Cortex-A7, 最高1.2GHz                          |
| 存储       | 板载 2*半槽TF卡座，可TF启动。                                |
| **内存**   | 集成64MB DDR2                                                |
| 显示       | 支持常见的ST7789驱动的TFT液晶屏幕,支持320x240等分辨率 ，预留I2C TP触摸面板接口。板载2寸TFT LCD，分辨率320x240 |
| 板载传感器 | IMU: MPU9250 - 气压计：SPL06-001                             |
| 通信接口   | - SDIO x2，可搭配SDIO WiFi+BT 模块 - I2Cx1 - UART x2 - 100M Ethernet 拓展口x1（EPHY） - OTG USB x1 - 10bit CSI x1 |
| 其它接口   | - PWM x2 - LRADC x1  - Mic x1                                |
| 电气特性   | - TYPE-C 5V供电；输出 3.3V 和 3.0V（AVCC），可选择输入RTC电压 - 1GHz linux空载运行电流 90-100mA， 满载运行电流 ~180mA - 存储温度 -40~125℃，运行温度 -20-70℃ |

The AtomicPi:<br>

•	SoC Allwinner V3s:<br>

	- ARM Cortex-A7 @ 1.2GHz<br>
	- 64 Megabyte of RAM<br>
	  •	Wifi and Bluetooth (RTL8723BS)  <br>
	  •	1 USB Host Port / 1 Type-C USB-TTL <br>
	  •	DVP interface<br>
	  •	24 FPC pinheader for an OV2640 and an OV5640 parallel camera（10bit）<br>
	  •	2' ST7789V displays<br>
	  •	onboard microphone<br>
	
	  •	onboard IMU: MPU9250<br>
	
	  •	onboard Barometer: SPL06-001<br>•	2*SD card slot<br>

- Pic1

![image-20220713093955150](https://raw.githubusercontent.com/ZhiyangZhou24/img-repo/master/img/picgoimage-20220713093955150.png)

- Pic2

  ![image-20220713094255730](https://raw.githubusercontent.com/ZhiyangZhou24/img-repo/master/img/picgoimage-20220713094255730.png)

- Pic3

  ![image-20220713094233794](https://raw.githubusercontent.com/ZhiyangZhou24/img-repo/master/img/picgoimage-20220713094233794.png)
