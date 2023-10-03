# **    DC_MOTOR Control using LM35 Sensor Project Made by Mohamed Osama  **

## Hardware used :
 1. PIC18F4620
 2. 2 LM35 Sensors
 3. 2 DC-Motors
 4. 20x4 LCD
 5. L298 Driver
 
 ## Software used :
 ### MCAL LAYER :
 1. GPIO Driver
 2. Interrupt DRIVER
 3. ADC DRIVER
   

### HAL LAYER :
1. DC-Motor Driver
2. LCD Driver


 ## Features :
1. Use The ADC module using Interrupt Feature
2. if TempSensor1 degree > 20 DC-MOTOR1 move right else it stops
3. if TempSensor2 degree > 25 DC-MOTOR2 move left else it stops
4. the 2 Temprature sensors readings are Shown on the LCD
