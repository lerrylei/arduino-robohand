#include <Servo.h>
//define servo motors 
Servo pinkie, ring, middle, index, thumb;

//define flex sensors on glove (F1 = flex sensor 1)
const int pinkieFlex = A0; //bent - 710, flat - 900 (values vary depending on your own flex sensors))
const int ringFlex = A1; //bent - 920, flat - 965
const int middleFlex = A2; //bent - 966, flat - 993
const int indexFlex = A3; //bent - 808, flat - 870
const int thumbFlex = A4; //bent - 490, flat - 525


void setup(){
  //attach servo motors to digital pins
  pinkie.attach(13);
  ring.attach(12);
  middle.attach(11);
  index.attach(9);
  thumb.attach(10);

  //starting position for all fingers
  pinkie.write(180);
  ring.write(180);
  middle.write(180);
  index.write(180);
  thumb.write(180);
 
  //debug
  Serial.begin(9600);
}

void loop(){
  //testFlex(); //use testFlex to debug Flex sensor values
  //assign fingercontrol function for each finger 
  fingerControl(pinkie, pinkieFlex, 30, 180, 710, 900);
  fingerControl(ring, ringFlex, 0, 180, 935, 965);
  fingerControl(middle, middleFlex, 0, 180, 976, 985);
  fingerControl(index, indexFlex, 30, 180, 850, 920);
  fingerControl(thumb, thumbFlex, 0, 180, 487, 500);
}

void fingerControl(Servo servo, int flex, int s_bent, int s_flat, int f_bent, int f_flat) {
  //use parameters to customize for each servo/flex sensor
    //servo - name of servo (ex. pinkie), flex - name of flex sensor (ex. pinkieFlex)
    //s_bent - servo motor value when finger bent, s_flat - servo motor value when finger flat
    //f_bent - flex sensor value when finger bent, f_flat - flex sensor value when finger flat
  //define flex sesnor and servo position
  int servo_pos;
  int flex_pos;
  flex_pos = analogRead(flex); //read flex sensor value
  //Serial.println(flex_pos); //debug line 
  servo_pos = map(flex_pos, f_bent, f_flat, s_bent, s_flat); //map flex sensor values to servo motors
  servo.write(servo_pos); //write mapped servo value to servo
  delay(100); //delay for efficiency
}

void testFlex(){
  //use serial monitor to calcultate flex sensor bounds - reacts in live time to glove
  int val0 = analogRead(A0);
  Serial.println("");
  Serial.print(" A0: ");
  Serial.print(val0);
  
  int val1 = analogRead(A1);
  Serial.print(" A1: ");
  Serial.print(val1);
  
  int val2 = analogRead(A2);
  Serial.print(" A2: ");
  Serial.print(val2);
  
  int val3 = analogRead(A3);
  Serial.print(" A3: ");
  Serial.print(val3);
  
  int val4 = analogRead(A4);
  Serial.print(" A4: ");
  Serial.print(val4);

  delay(500); //delay for efficiency 
}