int capteur =52; //pin of the obstacle capteur
int detection;  //varibale to but the valeur of the capteur i 
//moteur left 
  int in3=12;
  int in4=13;
  int enB=8;
//ùoteur right

int in1 =10;
int in2 =11;
int enA = 9;

void setup() {
  pinMode(capteur, INPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600); //initialisation of the monitor serial 
}
void loop() {
  detection = digitalRead( 52);
  Serial.println(detection);
  if(detection == 0 ){  // there is an obstacle
    cap_obs(); 
  }
  else{
    forward();
  }
}
void cap_obs(){
  stop_f();
    delay(200);
    right();
    delay(1100);
    forward();
    delay(150);
}
void forward() {
  analogWrite(enA, 100);
  analogWrite(enB, 150);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void stop_f() {
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void right() {
  analogWrite(enA, 0);
  analogWrite(enB, 120);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

}
