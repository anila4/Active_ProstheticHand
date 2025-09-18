/* 
The Following code is meant to be used in the Arduino IDE. This code has been simplified using the Servo library,
though individual controls of servo motors is still possible. Consider this file a template. Feel free to modify this 
code as you see fit, making the arm do whatever you'd like it to do with its fingers. You can even implement more servos 
to allow greater wrist mobility. 
 
 Just have fun with it, hope my comments are adequate when it comes to explaining what's going on.
*/


#include <Servo.h>

//Threshold for servo motor control with muscle sensor. 
//You can set a threshold according to the maximum and minimum values of the muscle sensor.
#define THRESHOLD 250

//Pin number where the sensor is connected. (Analog 0)
// The sensor should be attached to a muscle group, or else it will either sense nothing or the highest possible value
#define EMG_PIN 0

//Pin number where the servo motor is connected. (Digital PWM 3,5,6,9)
#define SERVO_PIN_1 3
#define SERVO_PIN_2 5
#define SERVO_PIN_3 6
#define SERVO_PIN_4 9

//Define Servo motor
Servo SERVO_1;
Servo SERVO_2;
Servo SERVO_3;
Servo SERVO_4;

/*
I was short a Servo motor at the time, and decided to bound both the pinkie and ring finger together, as not only are they
easier to pair with my current wiring configuration, but also biological human hands (the meaty kind) also have their 
pinkie and ring finger nerves and muscles intertwined, hence why you can't move either finger independently. Feel free to add a
proper pinkie/ring finger control servo if you have some. If you're still a servo short, I advise linking the index and middle too.
*/


/*-------------------------------- void setup ------------------------------------------------*/

void setup(){
  
  // This Serial.begin statement is purely to observe the EMG measurements on the serial monitor/plotter on the Arduino IDE
  // BAUDRATE set to 115200, remember it to set monitor serial properly. 
  // Used this Baud Rate and "NL&CR" option to visualize the values correctly.
  Serial.begin(115200);
  
  //Set servo motor to digital pins, each servo corresponding to a single finger or a pair of them
  SERVO_1.attach(SERVO_PIN_1);
  SERVO_2.attach(SERVO_PIN_2);
  SERVO_3.attach(SERVO_PIN_3);
  SERVO_4.attach(SERVO_PIN_4);

}

/*--------------------------------  void loop  ------------------------------------------------*/

void loop(){

  //The "value" variable reads the value from the analog pin to which the sensor is connected.
  int value = analogRead(EMG_PIN);

  //If the sensor value is GREATER than the THRESHOLD, the servo motor will turn to 170 degrees.
  if(value > THRESHOLD){
    SERVO_1.write(170);
    SERVO_2.write(170);
    SERVO_3.write(170);
    SERVO_4.write(170);
  }

  //If the sensor is LESS than the THRESHOLD, the servo motor will turn to 10 degrees.
  else{
    SERVO_1.write(10);
    SERVO_2.write(10);
    SERVO_3.write(10);
    SERVO_4.write(10);
  }

  //You can use serial monitor to set THRESHOLD properly, comparing the values shown when you open and close your hand.
  // The stronger you flex your muscles, the higher the value
  Serial.println(value);
}
