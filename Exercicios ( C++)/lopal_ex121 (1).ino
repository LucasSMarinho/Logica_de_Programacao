// C++ code
//Variaveis

 long numero;
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
  Serial.println("|       LOPAL - Ex_12         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  

  
  Serial.println("Digite o seu numero");
  while (! Serial.available() );
  numero = Serial.parseFloat();
  
   
  
  if (numero % 2 == 0 ) {
    
    text = "Seu numero eh par";
}else {
    
    text = "Seu numero eh impar";
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

