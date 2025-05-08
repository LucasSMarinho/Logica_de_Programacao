// C++ code
//Faça um programa que receba um número de usuário e exiba este número, apenas
//se for par. Caso contrário informe apenas “DIGITE APENAS NÚMEROS PARES”.
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
  Serial.println("|       LOPAL - Ex_17         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  

  
  Serial.println("Digite o um numero par");
  while (! Serial.available() );
  numero = Serial.parseFloat();
  
   
  
  if (numero % 2 == 0 ) {
    
    text = ("Seu numero eh:" + String(numero));
}else {
    
    text = "DIGITE APENAS NUMEROS PARES";
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