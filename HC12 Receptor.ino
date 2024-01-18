
#define LED_PIN 14
#define RXD2 16	//(RX2)
#define TXD2 17	//(TX2)
#define HC12 Serial2  //Hardware serial 2 on the ESP32

// ENCENDER UN LED RECIBIENDO UNA SEÑAL DE PUSH DESDE EL BOTON ATRAVEZ DE LAS HC12

void setup() {
  HC12.begin(9600, SERIAL_8N1, RXD2, TXD2);
  pinMode(LED_PIN, OUTPUT);


}

void loop() {
 boolean led_state = digitalRead(LED_PIN);

  if(HC12.available()>1){
    int input = HC12.parseInt();
    if(led_state == 1 && input ==1234){
      digitalWrite(LED_PIN,HIGH);

    }
    else if(led_state == 0 && input ==1234){
      digitalWrite(LED_PIN,LOW);
    }
  }
}
