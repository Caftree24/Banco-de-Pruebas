#define B0 27
#define B1 34
#define B2 35
#define B3 32
void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  pinMode(B0,INPUT);
  pinMode(B1,INPUT);
  pinMode(B2,INPUT);
  pinMode(B3,INPUT);


}

void loop() {
  int button_state = digitalRead(B0);
  int button_state2 = digitalRead(B1);
  int buttoN = digitalRead(B2);
  int buttoN2= digitalRead(B3);
  delay(500);
  Serial.println(button_state);
  //Serial.println(button_state2);

  if(button_state == 1){
    Serial.println("B0 presionado");
    Serial.println('1');
    Serial2.println(122);
  }
  //while(button_state==0){ //esperan a que los botones se liberen antes de continuar.
  if(button_state2==1){
      Serial.println("B1 presionado");
      Serial.println('2');
      Serial2.println(344);

  }
  //}
  //while(digitalRead(B1)==0){
  if(buttoN == 1){
    Serial.println("B2 presionado");
    Serial.println('3');
    Serial2.println(566);
  }
  //while(button_state==0){ //esperan a que los botones se liberen antes de continuar.
  if(buttoN2==1){
      Serial.println("B3 presionado");
      Serial.println('4');
      Serial2.println(788);

  }
    
  //}

}
