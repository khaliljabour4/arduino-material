int pin_photoresistance =A1;
int distance_photoresistace ;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_photoresistance, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance_photoresistace = analogRead(pin_photoresistance);
  Serial.print("capteur photoresistance :");
  Serial.println(distance_photoresistace);
  if(distance_photoresistace>800){ 
    Serial.print(" 1 ");
  }
  else{
    Serial.print(" 2 ");
  }
}
