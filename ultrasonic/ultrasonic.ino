#include <Ultrasonic.h>
Ultrasonic ultrasonic(50, 48);
int distance;
int delayTime = 5000; // 10 seconds delay
int sensorOffTime = 15000; // 30 seconds sensor off time
//moteur left
int in3 = 12;
int in4 = 13;
int enB = 8;
//ùoteur right

int in1 = 10;
int in2 = 11;
int enA = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  distance = ultrasonic.read();
  Serial.print("Distance: ");
  Serial.println(distance);
  digitalWrite(2, HIGH);
  if ( distance < 40 ){
  stop_f();
  }else {
    forward();
  }
}
void forward() {
  analogWrite(enA, 90);
  analogWrite(enB, 142);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  Serial.println("f");
}
void stop_f() {
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

}
