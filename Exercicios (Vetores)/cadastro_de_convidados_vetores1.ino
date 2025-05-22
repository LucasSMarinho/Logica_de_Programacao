// C++ code
//Variáveis Globais


String convidados[4];
int idadeConvidados[4];
String emailConvidados[4];
String permissao = "texto aleatorio";


//funções

void desenhaCabecalho()
{
  Serial.println("-------------------------------------------");
  Serial.println("");
  Serial.println("Churasco com amigos");
  Serial.println("");
  Serial.println("-------------------------------------------");
  Serial.println("    *convidados*    ");
  Serial.println("-------------------------------------------");
  Serial.println("");
  Serial.println("");
}

void setup()
{
  Serial.begin(9600);
}

void loop()

{ 
  desenhaCabecalho();
  for(int i = 0; i < 4; i++) {
    //solicitar o nome do usuario, idade e email.
    Serial.println("informe o nome para o " + String(i + 1) + "o convidado");
    while (! Serial.available());
    convidados [i] = Serial.readString();


    Serial.println("informe a idade de " + convidados[i]);
    while (! Serial.available());
    idadeConvidados [i] = Serial.parseInt();  

    Serial.println("informe o email do(a) " + convidados[i]);
    while (! Serial.available());
    emailConvidados [i] = Serial.readString();
  }

  for(int i = 0; i < 4; i++) {

    
     
     
      Serial.println("-------------------------------------------");
      Serial.println(convidados[i]);
      Serial.println("idade: " + String(idadeConvidados[i]));
      Serial.println("email:" + emailConvidados[i]);
      Serial.println("status: " + String(idadeConvidados[i] >= 18 ? "Permitido na festa" : "Barrado"));
      Serial.println("-------------------------------------------");
  }
  delay(2000);
}