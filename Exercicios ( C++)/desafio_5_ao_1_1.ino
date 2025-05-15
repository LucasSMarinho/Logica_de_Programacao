//for - É uma estrutura de repetição que só executa repetição / laço enquanto 
//a condição for verdadeira



//variaveis

int numero1 = 0; //variavel global

void setup()
{
  Serial.begin (9600);
}

void loop()

{

  int contadorFor = 1; //variavel local

  for(int contadorFor = 1; contadorFor <= 10; contadorFor++) {
    if (contadorFor == 1) {

      Serial.println("contando...");
      delay (1000); 
      Serial.println(String(contadorFor) + "..." );
      delay (1000);
    } else if (contadorFor == 10) {
      Serial.println(String(contadorFor)); 
    } else {  

      Serial.println(String(contadorFor) + "..." );  
      delay (1000);  
    }
  }
  Serial.println("Digite uma letra mais o <enter> para continuar");
  while (! Serial.available());
  Serial.println();
  Serial.println();
} 