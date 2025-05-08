// C++ code
//
void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis
long numero    = 0;
  


void loop()
{
  
 Serial.println("|-----------------------------|");
 Serial.println("|                             |");
 Serial.println("|       LOPAL - Ex_03         |");
 Serial.println("|                             |");  
 Serial.println("|-----------------------------|");
 Serial.println();
 Serial.println();

  
Serial.println("Digite o numero desejado");
while (! Serial.available() );
numero = Serial.parseInt();

numero = numero * 2;

  
  Serial.println ("O dobro do seu numero eh: " + String(numero) );
  Serial.println();
  Serial.println();
  
  delay (20000)
}