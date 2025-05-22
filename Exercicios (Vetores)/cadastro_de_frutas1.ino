//C++



void setup()
{
  Serial.begin(9600);

  Serial.println("**** Sacolao do Zeh ****");
  Serial.println();

  String frutas[6]{};                  //cria um vetor de tamanho 6 vazio

  Serial.println("oh Zeh, bora cadastrar as frutas!");
  Serial.println();



  for(int i = 0; i <= 5; i++) {

    Serial.println("informe a " + String(i + 1) + "a Fruta");
    while (! Serial.available()); 
    frutas[i] = Serial.readString(); 


  }

  for(int numeroFruta = 0; numeroFruta < 6; numeroFruta++ ) {
    Serial.println("a " + String(numeroFruta + 1)+ "a fruta eh:" + frutas[numeroFruta]);
    Serial.println();

  }
}
void loop()
{

}
