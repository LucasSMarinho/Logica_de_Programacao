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
  // while
  int contadorWhile = 1; //variavel local
  int contadorWhile2 = 5;  
    
  while(contadorWhile2 >= 1 ) {
    Serial.println(contadorWhile2);
    contadorWhile2 = contadorWhile2 - 1;
    
  }
   
  while(contadorWhile <= 5 ) {
    Serial.println(contadorWhile);
    contadorWhile++;
    
  }

  
 delay (1000);
 
  } 