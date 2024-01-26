
#define LED_PIN 23 //LED


void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  pinMode(LED_PIN, OUTPUT);


}

void loop() {
//boolean led_state = digitalRead(LED_PIN);
 //bool var = 0;

  while(Serial2.available()){
   //bool var=Serial.write(Serial2.read());
    if(Serial2.parseInt()==1234){
      digitalWrite(LED_PIN,HIGH);
      Serial.println("Encendido");
    }
    /*if(Serial2.parseInt()==5678){
      digitalWrite(LED_PIN,LOW);
    }*/
  }
  digitalWrite(LED_PIN,LOW);
}
      /
