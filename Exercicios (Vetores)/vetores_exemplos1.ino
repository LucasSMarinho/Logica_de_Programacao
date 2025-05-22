//C++



void setup()
{
  Serial.begin(9600);
 int numero = 5;
  
  numero = numero + 2;
  /*vetores - váriáveis construídas (estrutura de dados)
  "podem guardar vários valores em um único nome
  */
  
  
  //                  0  1  2  3  4     //indices-posições
  int numeross[5] = {10,20,30,40,50};    //quantidade
  
  for(int i = 0; i <= 4; i++){
   Serial.println(numeross[i]);
  }
  
  
  
  //fim do setup 
  
}
void loop()
{
  
}