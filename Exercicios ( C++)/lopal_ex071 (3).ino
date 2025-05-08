// C++ code
//
void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis
String nome = "nome";
String sobrenome  = "sobrenome";
String cargo = "cargo";
float salario = 0;
float tenpcent = 0;

void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_07         |");
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
   
  tenpcent = (salario * 10) / 100;
  
    
  salario = salario + tenpcent;
  
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
  
  Serial.println();
  Serial.println();
  
  Serial.read(); 
  
}