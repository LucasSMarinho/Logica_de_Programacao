// C++ code
//
int ledAmarelo1 = 3;
int ledAmarelo2 = 4;
int ledAmarelo3 = 5;
int ledVerde = 7;
int contadorFor = 0;


void setup()
{
 Serial.begin(9600);
 pinMode (ledAmarelo1, OUTPUT);
 pinMode (ledAmarelo2, OUTPUT);
 pinMode (ledAmarelo3, OUTPUT);
 pinMode (ledVerde, OUTPUT); 
  
  for(int contagem = 0; contagem == 0; contagem++) {
   for (int contadorFor = 0; contadorFor <= 100; contadorFor += 5){
  
     
    Serial.println (contadorFor);
    digitalWrite(ledAmarelo1, HIGH);
    delay(90); 
    digitalWrite(ledAmarelo1, LOW);
    delay(90); 
    digitalWrite(ledAmarelo2, HIGH);
    delay(90); 
    digitalWrite(ledAmarelo2, LOW);
    delay(90); 
    digitalWrite(ledAmarelo3, HIGH);
    delay(90); 
    digitalWrite(ledAmarelo3, LOW);  
   }
   
  
  digitalWrite(ledVerde, HIGH);  
    
   
  Serial.println("voce quer outra contagem? se sim porfavor digite alguma letra + <enter>");
  while (! Serial.available());
  contadorFor = 0;
  contagem = -1;   
  digitalWrite(ledVerde, LOW);
    
}
}
void loop()
{
 
}