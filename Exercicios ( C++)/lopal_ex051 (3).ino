// C++ code
//
void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis
long medidacm = 0;
float medidametros = 0;

void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_05         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  
  
Serial.println("Digite a medida");
while (! Serial.available() );
medidacm = Serial.parseFloat ();
  

  medidametros = medidacm * 2.54;


  Serial.println ("O a sua medida em metros eh: " + String(medidametros) );
  Serial.println();
  Serial.println();
  
  delay (10000)
}