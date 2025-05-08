// C++ code
//
void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis


float peso   	 = 0;
float Altura     = 0;
float IMC        = 0;
String nome = "nome";
String sobrenome = "sobrenome";

void loop()
{

  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_04         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();


  

Serial.println("Digite seu nome");
while (! Serial.available() );
nome = Serial.readString();
  
Serial.println("Digite seu sobrenome");
while (! Serial.available() );
sobrenome = Serial.readString();  
  
Serial.println("Digite seu peso");
while (! Serial.available() );
peso = Serial.parseFloat();

Serial.println("Digite sua altura");
while (! Serial.available() );
Altura = Serial.parseFloat();
  
  IMC = (peso) / ( Altura * Altura );


  Serial.println ("O seu nome eh: " + nome + " " + sobrenome );
  Serial.println ("O seu IMC eh: " + String(IMC) );
  
  Serial.println();
  Serial.println();
  
  delay (20000); 
}