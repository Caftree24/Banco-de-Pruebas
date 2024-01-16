#define RXD2 16
#define TXD2 17
#define HC12 Serial2
int pin_c =5;
//bool signal =false;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_c,OUTPUT);
  digitalWrite(pin_c,LOW);
  Serial.begin(115200);
  HC12.begin(9600, SERIAL_8N1,RXD2, TXD2);

}

void loop() {
  while (HC12.available()){
    Serial.write(HC12.read());
    Serial.printf("Hay datos");
    //signal = true;
  }
  while(Serial.available()){
    HC12.write(Serial.read());
  }

}
