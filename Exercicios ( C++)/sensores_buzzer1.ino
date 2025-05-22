// C++ code
//

int ledVerde = 3;
int ledVermelho = 2;
int senhaDigitada = 3456;
int senhaCorreta = 3456;
int buzzer = 4;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); 
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  do {  
    Serial.println(String(senhaDigitada == 3456 ? "porfavor, digite sua senha" : "tente novamente"));
    while( ! Serial.available());
    senhaDigitada = Serial.parseInt();

      
    if (senhaDigitada == senhaCorreta) {

      digitalWrite(ledVerde, HIGH);
      delay (250);
      digitalWrite(ledVerde, LOW );

    } else {

      digitalWrite(ledVermelho, HIGH);
      delay (250);
      digitalWrite(ledVermelho, LOW );
      digitalWrite(buzzer, HIGH);
      delay (2000);
      digitalWrite(buzzer, LOW );
      Serial.println("----------Senha Incorreta!----------");
    }
    
      
  }  while (senhaDigitada != senhaCorreta);

  Serial.println("Entrando...");
  
}

void loop()
{
}