#define B0 27
#define B1 34
void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  pinMode(B0,INPUT);
  pinMode(B1,INPUT);


}

void loop() {
  int button_state = digitalRead(B0);
  int button_state2 = digitalRead(B1);
  delay(500);
  Serial.println(button_state);
  //Serial.println(button_state2);

  if(button_state == 1){
    Serial.println("B0 presionado");
    Serial.println('1');
    Serial2.println(123);
  }
  //while(button_state==0){ //esperan a que los botones se liberen antes de continuar.
    if(button_state2==1){
      Serial.println("B1 presionado");
      Serial.println('2');
      Serial2.println(456);

    }
  //}
  //while(digitalRead(B1)==0){
    
  //}

}
