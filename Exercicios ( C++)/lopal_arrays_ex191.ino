// C++ code
/*
faça um programa que contenha um array tamanho 10. Solicite ao usúario que digite
números pares, inteiros, e os guarda no vetor. Para isso ultilize a estrutura de
repetição WHILE. Ao final, exiba todos os valores com a estrutura de repetição FOR.


*/

int i = 0;


void setup()
{
  Serial.begin(9600);
  
  int nPares[10];
  
  
  while(i <= 9){
    
    Serial.println("Digite o " + String(i + 1) + "o numero par escolhido");
    while (! Serial.available());
    nPares[i] = Serial.parseInt();
    i++;
  }
  
  for(int a = 0; a <=9; a++){
  
    if (nPares[a] % 2 == 0){
  Serial.println("O " + String(a + 1) + "o Numero par que vc escreveu foi: " + nPares[a] );    
    }else{
  Serial.println("O " + String(a + 1) + "o Numero que vc escreveu nao era par! ");    
  }
  }  
}//fim do setup

void loop()
{
}//fim do loop