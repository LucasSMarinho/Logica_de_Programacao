// C++ code
//variaaveis



//funções
void carregamento(int qtdPontos = 5, int tempo = 100)
{
  for(int i = 1; i <= qtdPontos; i++)
  {  
    Serial.print(".");
    delay(tempo); 
  } 
}




void desenhaCabecalho()
{
  Serial.println(); 
  Serial.println("-------------------------------------------");
  Serial.println("**Jogo de Dados**");
  Serial.println("-------------------------------------------");
  Serial.println(); 
}
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0)); 
}

void loop()
{
 
  
  
  desenhaCabecalho();
  delay(1000);

  int palpite = 0;
  Serial.println("---- Digite seu palpite ----");
  while( ! Serial.available());
  palpite = Serial.parseInt();
  Serial.println();
  Serial.println("----------------------------");

  int numAleatorio = random(1, 7);

  Serial.println();

carregamento();

Serial.println();
Serial.println("o numero rolado no dado foi: " + String(numAleatorio));
Serial.println("o seu palpite era: " + String(palpite));

if (palpite == numAleatorio) {

  Serial.println("PARABENS, voce acertou!!!");
} else {
  Serial.println("Que pena, tente outra vez");
} 

Serial.println("reiniciando o programa...");
Serial.println();
delay(750);

}