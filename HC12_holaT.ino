//CODIGO PARA MANDAR HOLA
int i;

// Transmisor
void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  i = 0;
}

void loop() {
  Serial2.print("HOLA"); // Envia por serial 
  Serial2.print("\n");
  //Serial.println(i);
  i++;
  delay(200);
}
