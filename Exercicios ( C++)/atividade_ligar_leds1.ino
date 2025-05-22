// C++ code
//
int ledAmarelo1 = 3;
int ledAmarelo2 = 4;
int ledAmarelo3 = 5;
int ledVerde = 7;


void setup()
{
 Serial.begin(9600);
 pinMode (ledAmarelo1, OUTPUT);
 pinMode (ledAmarelo2, OUTPUT);
 pinMode (ledAmarelo3, OUTPUT);
 pinMode (ledVerde, OUTPUT); 
  
  for(int contagem = 0; contagem < 10; contagem++) {
   
    digitalWrite(ledAmarelo1, HIGH);
    delay(70); 
    digitalWrite(ledAmarelo1, LOW);
    delay(70); 
    digitalWrite(ledAmarelo2, HIGH);
    delay(70); 
    digitalWrite(ledAmarelo2, LOW);
    delay(70); 
    digitalWrite(ledAmarelo3, HIGH);
    delay(70); 
    digitalWrite(ledAmarelo3, LOW);  
   }
   
  
  digitalWrite(ledVerde, HIGH);  
  
    
}

void loop()
{
 
}