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
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
}

void loop()
{  
  Serial.println("Quantas rodadas voce quer jogar");
  while (! Serial.available());
  int qtdRodadas = Serial.parseInt(); 
  int vetPalpites [qtdRodadas];
  int vetResultados [qtdRodadas];  


  for(int r = 0; r < qtdRodadas; r++)
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
    
    vetPalpites [r] = palpite;
    vetResultados[r] = numAleatorio; 
    
  }
  Serial.println("---Resultado final--");
  for(int i = 1; i <= qtdRodadas; i++ ){
    
    Serial.println("-------------------------------------------");  
    Serial.println("Rodada " + String(i + 1) + ":");
    Serial.println("Palpite: " + String(vetPalpites[i - 1]));
    Serial.println("Dado: " + String(vetResultados[i - 1]));
    Serial.println("Resultado da Rodada: " + String(vetResultados[i] == vetPalpites[i] ? "Ganhou!!" : "ERROU :("));   
    Serial.println("-------------------------------------------");  

    Serial.print("FIM DO JOGO!! reiniciando o programa");
    carregamento(3, 700);
    Serial.println();
    delay(750);
  }
  }