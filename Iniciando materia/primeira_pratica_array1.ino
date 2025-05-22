//C++



void setup()
{
  Serial.begin(9600);
 int numero = 5;
  
  numero = numero + 2;
  /*vetores - váriáveis construídas (estrutura de dados)
  "podem guardar vários valores em um único nome
  */
  Serial.println(numero);
  
  
  
  //                  0  1  2  3  4     //indices-posições
  int numeross[5] = {10,20,30,40,50};    //quantidade
  
  
  Serial.println(numero);//7
  Serial.println(numeross[3]); //40
  
  
  numeross[3] = 400; //valor da 4a "gaveta"  
  
  Serial.println(numeross[3]);// imprime o novo valor da 4a gaveta

  for(int linha = 1; linha <= 3; linha++) {} // pula 3 linhas    
  Serial.println();                          // ~~~~~~~~~~~~~             
         
  
  Serial.println(numeross[3]); 
  //fim do setup 
  
}
void loop()
{
  
}