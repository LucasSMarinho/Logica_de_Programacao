// C++ code
//
void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis
float idade   		   = 0;
int AnodeNascimento    = 0;
int AnoAtual           = 0;
float Semanas          = 0;

void loop()
{
  //cabeçalho
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_02         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();
  
  
  
  //entrada
  Serial.println("Digite a seu ano de nascimento");
  while(! Serial.available() ); //espera o usuário digitar
  AnodeNascimento = Serial.parseInt();  //resposta do usuário

  Serial.println("Digite o ano atual");
  while(! Serial.available() ); //espera o usuário digitar
  AnoAtual = Serial.parseInt();  //resposta do usuário
  
  //processamento
  idade = AnoAtual - AnodeNascimento;
  Semanas = idade * 52.14285714285714;

  Serial.println( " Idade em Anos: " + String(idade, 2) );
  Serial.println( " Idade em Semanas: " + String(Semanas, 6) );
  
  Serial.println();
  Serial.println();
  
  

  delay (10000);
}
