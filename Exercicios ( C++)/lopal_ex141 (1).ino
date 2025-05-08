// C++ code
//Variaveis

 long numero ;
 long numero2;
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
  Serial.println("|       LOPAL - Ex_14         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  

  
  Serial.println("Digite o primeiro numero");
  while (! Serial.available() );
  numero = Serial.parseFloat();
  
  Serial.println("Digite o segundo numero");
  while (! Serial.available() );
  numero2 = Serial.parseFloat();
  
   
  
  if (numero > numero2 ) {
    
    text = ("O maior numero estre os dois eh:" + String(numero));
}else {
    
    text = ("O maior numero estre os dois eh:" + String(numero2));
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

