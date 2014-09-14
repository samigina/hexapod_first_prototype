// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo r11,r12,r13,r21,r22,r23,r31,r32,r33,r41,r42,r43,r51,r52,r53;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  r11.attach(48);  // attaches the servo on each pin to the servo object 
  r12.attach(49);
  r13.attach(50);
  r21.attach(51);
  r22.attach(52);
  r23.attach(53);
  r31.attach(13);
  r32.attach(12);
  r33.attach(11);
  r41.attach(10);
  r42.attach(9);
  r43.attach(8);
  r51.attach(1);
  r52.attach(2);
  r53.attach(3);
} 
 
 
void loop() 
{ 
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    r12.write(pos); 
    r22.write(pos);
    r32.write(pos);
    r42.write(pos);
    r52.write(pos);// tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  
  
 
   delay(10000); 
  /*  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    r12.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } */
} 
