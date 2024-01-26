
#define BUTTON_PIN 27


int button_state = 0;

void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  pinMode(BUTTON_PIN, INPUT);
  //attachInterrupt(digitalPinToInterrupt(BUTTON_PIN),encenderLed,RISING);
  
  
}

void loop() {
  //Serial.println("Sigo");
  int button_state = digitalRead(BUTTON_PIN);
  delay(500);
  Serial.println(button_state);
  
  if(button_state == 1){
    
    Serial2.println(1234);
    //Serial.print("0");
  }
  
}
