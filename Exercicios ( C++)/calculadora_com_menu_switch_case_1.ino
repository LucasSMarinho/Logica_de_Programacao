
float N1 			= 0; 
float N2 			= 0;
float soma 			= 0;
float subtracao 	= 0;
float multiplicacao = 0;
float divisao 		= 0;
int escolha, contador;


void setup()
{
  Serial.begin (9600);


  do {
    Serial.println("Bem-Vindo(a) a calculadora mega inteligente :P"); 
    Serial.println("Escolha uma das opcoes/operacoes");
    Serial.println("1 - Somar       ");
    Serial.println("2 - Subtrair    ");
    Serial.println("3 - Multiplicar ");  
    Serial.println("4 - Dividir     ");  
    while (! Serial.available ());  
    escolha = Serial.parseInt();



    Serial.println("Agora para realizar a operacao, digite o 1 numero");
    while (! Serial.available ());    
    N1 = Serial.parseFloat();

    Serial.println();
    
    Serial.println("Agora, digite o 2 numero");
    while (! Serial.available ());    
    N2 = Serial.parseFloat();  

    Serial.println();
    
    switch(escolha)  {

      case 1:
    
      soma = N1 + N2;

      Serial.println("WOW!!! O resultado foi: " + String(soma)); 
      Serial.println();
      
      break;
      
      case 2:
      
      subtracao = N1 - N2;
      
      Serial.println("WOW!!! O resultado foi: " + String(subtracao)); 
      Serial.println();
      
      break;
      
      case 3:
      
      multiplicacao = N1 * N2;
      
      Serial.println("WOW!!! O resultado foi: " + String(multiplicacao)); 
      Serial.println();
      
      break;
      
      case 4:
      
      divisao = N1 / N2;
      
      Serial.println("WOW!!! O resultado foi: " + String(divisao)); 
      Serial.println();
      
      break;
      
      default:
        
        Serial.println("EI!! eu nao te dei essa opcao!!!");
    }
    
    Serial.println("Voce deseja continuar? se sim digite [s], se nao digite [n] ");
    while (!Serial.available());
    
      if(Serial.readString() == "s" ) {
    
  contador++; 
    }
      
      else{
      contador = 0;
        Serial.println("Ate breve, obrigado por usar a calculadora");
        Serial.println("caso queira voltar, reinicie o sistema.");
      }
    }
  
  while(contador != 0);

}

void loop()

{
//sem código
}