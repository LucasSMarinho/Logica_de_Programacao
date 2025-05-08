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
String nome = "nome";
String sobrenome  = "sobrenome";
String cargo = "cargo";
float salario = 0;

void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_08         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  
 
  Serial.println("Digite o seu nome");
  while (! Serial.available() );
  nome = Serial.readString ();
  
  Serial.println("Digite seu sobrenome");
  while (! Serial.available() );
  sobrenome = Serial.readString(); 
  
  Serial.println("Digite o cargo de " + nome + " " + sobrenome);
  while (! Serial.available() );
  cargo = Serial.readString(); 
  
  Serial.println("Digite seu salario");
  while (! Serial.available() );
  salario = Serial.parseFloat();
   
  
  if (salario < 1000 ) {
    salario = salario + ( salario * 0.1 ); 
    digitalWrite (ledAzul, HIGH); }
  else {
     digitalWrite (ledVerde, HIGH);       
  }
    
  Serial.println();
  Serial.println();
  Serial.println("-----------------------------------------"); 
  Serial.println("Relatorio");
  Serial.println("-----------------------------------------");
  
  Serial.println ("Seu nome:" + nome + " " + sobrenome);
  Serial.println();
  Serial.println ("Seu cargo eh: " + cargo);
  Serial.println();
  Serial.println ("novo salario: " + String(salario) );
  Serial.println();
  Serial.println("-----------------------------------------");
  
  Serial.println("-----------------------------------------");
  
  Serial.println("Digite uma letra + <Enter> para continuar");
  while (! Serial.available() );
    
   digitalWrite (ledVerde, LOW);
   digitalWrite (ledAzul, LOW);
  Serial.println();
  Serial.println();
  
  Serial.read(); 
  } 

