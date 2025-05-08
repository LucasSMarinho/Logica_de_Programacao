// C++ code
//Variaveis

 int ledAzul = 6;
 int ledVerde = 5;

void setup()
{
 Serial.begin (9600);
  pinMode (ledAzul, OUTPUT);
  pinMode (ledVerde, OUTPUT);
}
//inicialização das variáveis
float salario = 0;

void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_09         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  

  
  Serial.println("Digite seu salario");
  while (! Serial.available() );
  salario = Serial.parseFloat();
  
   
  
  if (salario < 500 ) {
    salario = salario + ( salario * 0.3 ); 
    digitalWrite (ledAzul, HIGH); 
    
    
  Serial.println();
  Serial.println();
  Serial.println("-----------------------------------------"); 
  Serial.println("Relatorio");
  Serial.println("-----------------------------------------");
  Serial.println();
  Serial.println();
  Serial.println("Seu salario eh " + String(salario));
  Serial.println();  
  Serial.println();
  Serial.println();  
  Serial.println("-----------------------------------------"); 
  Serial.println(); 
  Serial.println("-----------------------------------------");
  }
  else {
    
  Serial.println();
  Serial.println();
  Serial.println("-----------------------------------------"); 
  Serial.println("Relatorio");
  Serial.println("-----------------------------------------");
  Serial.println();
  Serial.println();
  Serial.println("Seu salario eh " + String(salario));
  Serial.println();  
  Serial.println();
  Serial.println();  
  Serial.println("-----------------------------------------"); 
  Serial.println("Infelizmente vc nao tem acesso ao aumento"); 
  Serial.println("-----------------------------------------");
    
    
    
    
     digitalWrite (ledVerde, HIGH);       
  }
    

  
  
  
  
  
  Serial.println("Digite uma letra + <Enter> para continuar");
  while (! Serial.available() );
    
   digitalWrite (ledVerde, LOW);
   digitalWrite (ledAzul, LOW);
  Serial.println();
  Serial.println();
  
  Serial.read(); 
  } 

