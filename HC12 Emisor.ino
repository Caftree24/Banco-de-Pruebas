#define BUTTON_PIN 18
#define RXD2 16	//(RX2)
#define TXD2 17	//(TX2)
#define HC12 Serial2  //Hardware serial 2 on the ESP32


//int button_state = 0;

void setup() {
  HC12.begin(9600, SERIAL_8N1, RXD2, TXD2);
  pinMode(BUTTON_PIN, INPUT);


}

void loop() {
  int button_state = digitalRead(BUTTON_PIN);

  if(button_state == 1){
    HC12.println(1234);
  }

}
