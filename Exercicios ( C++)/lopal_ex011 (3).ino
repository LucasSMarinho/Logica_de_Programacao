// C++ code
//
void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis
int idade   = 0;
int Meses   = 0;
long Dias    = 0;
long Horas   = 0;
long Minutos = 0;

void loop()
{
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_01        |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  
  

  Serial.println("Digite a sua idade");
  while(! Serial.available() ); //espera o usuário digitar
  idade = Serial.parseInt();  //resposta do usuário
  
  Meses   = (idade) * 12;
  Dias    = (idade) * 365;
  Horas   = (Dias)  * 24;
  Minutos = (Horas) * 60;
    
    Serial.println( " Idade em Anos: " + String(idade) );
    Serial.println( " Idade em Meses: " + String(Meses) );
    Serial.println( " Idade em Dias: " + String(Dias) );
    Serial.println( " Idade em Horas: " + String(Horas) );
    Serial.println( " Idade em Minutos " + String(Minutos) );
  
    Serial.println();
    Serial.println();
}