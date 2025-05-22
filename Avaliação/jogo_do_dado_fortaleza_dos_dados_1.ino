// C++ code
//variaaveis
int ledVerde = 13;
int ledVermelho = 12;
int ledAzul1 = 4;
int ledAzul2 = 3;
int ledAzul3 = 2;
int ledAmarelo1 = 7;
int ledAmarelo2 = 8;
int ledAmarelo3 = 9;
int pontos = 1;
int qtdRodadas;

#include <Servo.h>
Servo portaMagica;

//funções
 
  
void desenhaCabecalho()
{
  Serial.println(); 
  Serial.println("-------------------------------------------");
  Serial.println("**Fortaleza do dado**");
  Serial.println("-------------------------------------------");
  Serial.println(); 
  
  Serial.println("---- Lembre-se voce tem 50 rodadas ----");
}
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode (ledAzul3, OUTPUT);
  pinMode (ledAzul2, OUTPUT);
  pinMode (ledAzul1, OUTPUT);
  pinMode (ledVermelho, OUTPUT);
  pinMode (ledVerde, OUTPUT);
  portaMagica.attach(5);
  portaMagica.write(0);
  
  
}

void loop()
{  
  qtdRodadas = 50; 
  int vetPalpites [qtdRodadas];
  int vetResultados [qtdRodadas];  

  desenhaCabecalho();
  
  for(int r = 0; r < qtdRodadas; r++)
  {
    
    delay(1000);
    int palpite = 0;
    Serial.println("---- Digite seu palpite ----");
    while( ! Serial.available());
    palpite = Serial.parseInt();
    Serial.println("----------------------------");
    int numAleatorio = random(1, 7);
    Serial.println();
    
    
    
    Serial.println();
    Serial.println("o numero rolado no dado foi: " + String(numAleatorio));
    Serial.println("o seu palpite era: " + String(palpite));
    if (palpite == numAleatorio && pontos == 1) {
      Serial.println("PARABENS, voce acertou!!!");
      digitalWrite(ledAzul1, HIGH);
      digitalWrite(ledVerde, HIGH);
      delay(300);
      digitalWrite(ledVerde, LOW);
      pontos++;
      
    } else if (palpite == numAleatorio && pontos == 2) {
      Serial.println("PARABENS, voce esta so a um ponto da vitoria!!!");
      digitalWrite(ledAzul2, HIGH);
      digitalWrite(ledVerde, HIGH);
      delay(300);
      digitalWrite(ledVerde, LOW);
      pontos++;
      
      
    }  else if (palpite == numAleatorio && pontos == 3) {
      Serial.println("PARABENS, pode passar!!!");
      digitalWrite(ledAzul3, HIGH);
      digitalWrite(ledVerde, HIGH);
      delay(1000);
      portaMagica.write(0);
      delay(1500);
      portaMagica.write(180);
      delay(1500);
        
    }  else {  
      Serial.println("Que pena, tente outra vez");
      digitalWrite(ledVermelho, HIGH);
      delay(1000);
      digitalWrite(ledVermelho, LOW);
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

    Serial.print("FIM DO JOGO!! sem mais rodadas");
    digitalWrite(ledAzul3, LOW);
    digitalWrite(ledAzul2, LOW);
    digitalWrite(ledAzul1, LOW);
    Serial.println();
    
    delay(750);
  }
  }