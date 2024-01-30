#define LP 23
#define LEP 22
char com =0;

void setup() {
  pinMode(LP,OUTPUT);
  pinMode(LEP,OUTPUT);

  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);


}

void loop() {
  //digitalWrite(LP,LOW); // inicien apagado
 // digitalWrite(LEP,LOW);
  while( Serial2.available()){
    if(Serial2.parseInt()==123){
      digitalWrite(23,HIGH);
      Serial.println("Encendido LP"); 

    }
    if(Serial2.parseInt()==456){
      digitalWrite(LEP,HIGH);
      Serial.println("Encendido LEP"); 
      
    }
    


  }
  digitalWrite(LP,LOW);
  digitalWrite(LEP,LOW);
 
  
  

}
