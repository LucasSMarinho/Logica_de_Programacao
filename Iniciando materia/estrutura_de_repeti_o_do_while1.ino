//while - É uma estrutura de repetição que só executa repetição / laço enquanto 
//a condição for verdadeira



//variaveis

int numero1 = 0; //variavel global

void setup()
{
  Serial.begin (9600);
}

void loop()

{
  
  /* Do While - É uma estrutura de repetição que executa PELO MENOS UMA VEZ independente da condição.
  Em seguida, continuará executando enquanto a condição for verdadeira.
  */

  int contadorWhile = 1; //variavel local


  do {
    if ( contadorWhile == 1 ) {
      Serial.println("iniciando contagem...");
      delay (1000);  
}
    else { }

    Serial.println(String(contadorWhile) + "...");  
    contadorWhile++;
    delay (1000);


  }while(contadorWhile <= 5);

  Serial.println("Digite uma letra mais o <enter> para continuar");
  while (! Serial.available());

} 