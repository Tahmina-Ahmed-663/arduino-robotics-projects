# Arduino Robotics Projects

Two Arduino-based robotics projects completed through collaborative
group work during the **NextGen Automation & Embedded Systems: Elevate
Your Skills for Industrial Revolution 4.0** workshop.

The two-day workshop was conducted by the **IEEE East West University
Student Branch** and supported by **Robo Tech Valley**. The
participation certificate was issued on February 27, 2025.

## 1. Obstacle-Avoiding Robot

An Arduino-based mobile robot that uses an HC-SR04 ultrasonic sensor to
measure the distance ahead. The program controls the DC motors according
to the measured distance: the robot moves forward when the path is clear
and performs a reverse-and-turn response when an obstacle is detected
within the 10 cm threshold.

**Key components:** Arduino-compatible board, HC-SR04 ultrasonic sensor,
motor driver, and DC motors.

**Technical focus:** Ultrasonic distance measurement, obstacle
detection, motor direction control, and PWM-based speed control.

[View project files](obstacle-avoiding-robot/)

## 2. Voice-Controlled Robot Car

An Arduino-based robot car control system that responds to incoming
serial text commands for movement and LED operation. The program
processes commands such as `go`, `back`, `left`, `right`, and `stop`, as
well as `light`, and controls the motor outputs and LED accordingly.

**Key components:** Arduino-compatible board, motor driver, DC motors,
and LED.

**Technical focus:** Serial communication, command processing, and motor
control.

[View project files](voice-controlled-robot-car/)

## Technologies

-   Arduino C/C++
-   Embedded systems
-   HC-SR04 ultrasonic sensing
-   Serial communication
-   DC motor control
-   PWM
