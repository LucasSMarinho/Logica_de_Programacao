// C++ code
/* 

Faça um programa que receba um código de origem de um produto e informe sua procedência conforme a lista abaixo:
    
    CÓDIGO DE ORIGEM			PROCEDÊNCIA 
    	1							Sul
        2							Norte
        3							Leste
        4							Oeste
        5 ou 6 						Nordeste
        7, 8 ou 9 					Sudeste
        10 até 20 					Centro-Oeste
        acima de 20 				Código ainda sem definição

*/


 int codigo = 0;
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
  Serial.println("|       LOPAL - Ex_18         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  

  
  Serial.println("Digite o codigo de origem do produto");
  while (! Serial.available() );
  codigo = Serial.parseFloat();
  
   
  
  if (codigo == 1) {
    
    text = "O produto eh do Sul"; }
      
      
  else if (codigo == 2){
    
    text = "O produto eh do Norte"; }
  
  else if (codigo == 3){
    
    text = "O produto eh do Leste"; }
  
  else if (codigo == 4){
    
    text = "O produto eh do Oeste"; }
  
  else if (codigo == 5 || codigo == 6) {
    
    text = "O produto eh do Nordeste"; }
  
  else if (codigo == 7 || codigo == 8 || codigo == 9) {
    
    text = "O produto eh do Sudeste"; }
  
  else if (codigo >=10 && codigo <= 20) {
      
    text = "O produto eh do Centro-Oeste"; }
  
  else {
    
    text = "CODIGO AINDA SEM IDENTIFICACAO"; }
  
  
  

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