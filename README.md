# Motion-Sensored-Alarm-System-in-Arduino

[<img src="https://img.youtube.com/vi/Y4U3BavYtbw/maxresdefault.jpg" width="50%">](https://www.youtube.com/shorts/Y4U3BavYtbw)

This project was for an engineering design class at the University of Houston Clear lake. There were also two other people working on this project along side myself. 


All parts were bought on Amazon. You can buy a start kit with a arduino mega board and it should come with all the supplies you need.

__Supplies needed__

- ELEGOO Mega R3 or Arduino Mega 2560 REV3
- Passive Buzzer
- LCD1602 Module
- 4x4 Matrix Array Membrane Switch Keypad
- Ultra Sonic Sensor
- Female-to-Male Dupont Wires
- Breadboard
- Breadboard Jumper Wires
- USB Wire (To connect arduino board to PC)

Motion sensored alarm system using an ELEGOO Mega board and arduino IDE.

What does the motion sensor do?

  Prototype I was designed using an ELEGOO Mega board, LCD, Ultrasonic Sensor, 
buzzer, and a 4x4 matrix keypad. Fig. 1.1 shows the internal wiring used for prototype I. Most of 
the digital and communication pins are in use, leaving little room for other components to be 
added.
  Prototype I presented the user with two choices; ‘A - Set Alarm’ and ‘B - Reset 
Password’. If A was selected, the system would immediately count down from ten to allow the 
user to clear the area of motion. Once the system was armed, a red LED would light up to 
indicate its armed status. If motion was detected while in this state, a buzzer would activate and 
would not be disabled until the user entered the correct password. If B was selected, the system 
would prompt the user to enter the current password. Once that was successfully completed, the 
system would then prompt the user to enter a new password. Upon completion of this, the system 
would display the original screen with the choice to arm the alarm or change the password. The 
green LED was kept on for any time the alarm system was in a state of disarm. For power to the 
system, a 9 V battery was used, but decreased the efficiency of the system. An AC to DC 
converter was then used in order to power the system. A wooden box was designed to allow 
easier use of the system’s features. 


  Multiple tests were performed. For prototype I, the ultrasonic sensor
was tested at distances incremented by 24 cm. Prototype I was able to detect at a minimum 
distance of 2 cm and a maximum distance of 2.4 m. Table 2.1 demonstrates the data using unit 
testing.

Test Distance Expected Output Pass/Fail

- 1 2 cm Activated Activated PASS

- 2 24 cm Activated Activated PASS

- 3 48 cm Activated Activated PASS

- 4 72 cm Activated Activated PASS

- 5 96 cm Activated Activated PASS

- 6 120 cm Activated Activated PASS

- 7 144 cm Activated Activated PASS

- 8 168 cm Activated Activated PASS

- 9 192 cm Activated Activated PASS

- 10 216 cm Activated Activated PASS

- 11 240 cm Activated Activated PASS

- 12 264 cm Activated Not Activated FAIL


A = Arm Alarm

B = Change Password. 

After arming the alarm, it will give you a countdown of 10 seconds. Once motion is detected after the alarm countdown finishes, you will need to enter in the password which is "1234" and "*" after, as default. 

Green LED = Not Armed

Red LED = Armed
