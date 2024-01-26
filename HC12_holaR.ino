String command="";
// Receptor
void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  Serial.print("TE ODIO");
}

void loop() {
  //  Se pone a la escucha
  while(Serial2.available()) {
    //Serial.println("HWIIIIII");
    //command = Serial2.read();
    //Serial.println(command);
    //command="";
    Serial.write(Serial2.read()); // Imprime lo que le llego
    //Serial.println("Hola");
  }
  delay(200);
  //Serial.println(" NO");
}
