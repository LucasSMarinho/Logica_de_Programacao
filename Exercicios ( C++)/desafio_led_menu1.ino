// C++ code
//
int ledVermelho = 3;
int ledAmarelo = 4;
int ledVerde = 5;
int menu;
int ledDesejado;

void setup()
{
 Serial.begin(9600);
 pinMode (ledVermelho, OUTPUT);
 pinMode (ledAmarelo, OUTPUT);
 pinMode (ledVerde, OUTPUT); 
  
  do{
    
   if (menu == 0){ 
     
   Serial.println("-------------------------------------------------------"); 
   Serial.println("Porfavor, digite qual LED voce deseja ligar ou desligar");
   Serial.println("conforme a lista a seguir:"); 
   Serial.println("-------------------------------------------------------");
   Serial.println("1 - Ligar Led Verde ");
   Serial.println("2 - Desligar Led Verde "); 
   Serial.println("3 - Ligar Led Amarelo ");
   Serial.println("4 - Desligar Led Amarelo ");
   Serial.println("5 - Ligar Led Vermelho ");
   Serial.println("6 - Desligar Led Vermelho ");
   Serial.println("7 - Ligar todos os Leds ");
   Serial.println("8 - Desligar todos os Leds ");
   Serial.println("0 - Sair "); 
   Serial.println("-------------------------------------------------------");
   menu++;  
   }   
   while (! Serial.available());
   ledDesejado = Serial.parseInt();
   
    switch (ledDesejado) {
      
     case 1: 
     digitalWrite (ledVerde, HIGH);
     break; 
      
      
     case 2: 
     digitalWrite (ledVerde, LOW);
     break; 
      
      
     case 3: 
     digitalWrite (ledAmarelo, HIGH);
     break;  
     
      
     case 4: 
     digitalWrite (ledAmarelo, LOW);
     break;  
      
     case 5: 
     digitalWrite (ledVermelho, HIGH);
     break;
      
     case 6:      
     digitalWrite (ledVermelho, LOW); 
     break;
      
     case 7:      
     digitalWrite (ledVerde, HIGH); 
     digitalWrite (ledAmarelo, HIGH); 
     digitalWrite (ledVermelho, HIGH); 
     break; 
      
     case 8:      
     digitalWrite (ledVerde, LOW); 
     digitalWrite (ledAmarelo, LOW); 
     digitalWrite (ledVermelho, LOW); 
     break; 
      
     case 0:      
     Serial.println("Obrigado por testar o nosso programa");
     Serial.println("Reinicie para recomecar");
     digitalWrite (ledVerde, LOW); 
     digitalWrite (ledAmarelo, LOW); 
     digitalWrite (ledVermelho, LOW);  
      
     break; 
      
     default:
      
     Serial.println("Voce nao escolheu um numero compativel com a lista."); 
      
}
    
    
} while ( ledDesejado != 0 );

  
  
}//fim do setup
void loop()
{ 
}