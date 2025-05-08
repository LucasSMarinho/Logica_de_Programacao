// C++ code
//Variaveis

 int ledVermelho       = 6;
 int ledVerde          = 5;
 float preco           = 0;
 float porcent         = 0;
 float precodcompra    = 0;



void setup()
{
 Serial.begin (9600);
  pinMode (ledVermelho, OUTPUT);
  pinMode (ledVerde, OUTPUT);
}
//inicialização das variáveis


void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_10         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|"); 
  
   
  
  Serial.println("digite o preco de compra desse produto");
  while (! Serial.available () );
  precodcompra = Serial.parseFloat();  
   
  Serial.println("digite o percentual para venda desse produto");
  Serial.println("considere que: 1.1 = 10% 1.2 = 20% 2 = 100%  ");
  while (! Serial.available () );
  porcent = Serial.parseFloat() ;
    
    
    
     preco = precodcompra * porcent;
    
    if (porcent < 1.5 ) {
  
    digitalWrite (ledVermelho, HIGH);
    
  Serial.println();
  Serial.println();
  Serial.println("-------------------------------------------------------------"); 
  Serial.println("Relatorio");
  Serial.println("-------------------------------------------------------------");
  Serial.println("o preco de venda do produto eh: R$" + String(preco) );
  Serial.println();
  Serial.println("Esse produto esta sendo vendido com uma margem de lucro baixa");
  Serial.println();  
  Serial.println();
  Serial.println();  
  Serial.println("-------------------------------------------------------------"); 
  Serial.println(); 
  Serial.println("-------------------------------------------------------------");
  }
    
  else {
    
    digitalWrite (ledVerde, HIGH);
      
  Serial.println();
  Serial.println();
  Serial.println("-------------------------------------------------------------"); 
  Serial.println("Relatorio");
  Serial.println("-------------------------------------------------------------");
  Serial.println("o preco de venda do produto eh: R$" + String(preco) );
  Serial.println();
  Serial.println("Este produto esta com uma margem de lucro boa");
  Serial.println();  
  Serial.println();
  Serial.println();  
  Serial.println("-------------------------------------------------------------"); 
  Serial.println(); 
  Serial.println("-------------------------------------------------------------");    
  }
  
  Serial.println("Digite uma letra + <Enter> para continuar");
  while (! Serial.available() );
    
  digitalWrite (ledVerde, LOW);
  digitalWrite (ledVermelho, LOW);
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  
  
  
  
  Serial.read(); 
  } 

