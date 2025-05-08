// C++ code
//Variaveis

 long num;
 String text = "texto aleatorio";

void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis

void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_11         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  

  
  Serial.println("Digite o seu numero");
  while (! Serial.available() );
  num = Serial.parseFloat();
  
   
  
  if (num < 0 ) {
    
    text = "Seu numero eh negativo";

  }
  else if (num > 0 ){
    
    text = "Seu numero eh positivo";
}
  
  else {
    
    text = "seu numero eh 0";
    
 }
 Serial.println();
  Serial.println();
  Serial.println("-------------------------------------------------------------"); 
  Serial.println("Relatorio");
  Serial.println("-------------------------------------------------------------");
  Serial.println();
  Serial.println();
  Serial.println(text);
  Serial.println();  
  Serial.println();
  Serial.println();  
  Serial.println("-------------------------------------------------------------"); 
  Serial.println(); 
  Serial.println("-------------------------------------------------------------"); 
  
  
  
  
  
  Serial.println("Digite uma letra + <Enter> para continuar");
  while (! Serial.available() );
  
  Serial.println();
  Serial.println();
  
  Serial.read(); 
  } 

