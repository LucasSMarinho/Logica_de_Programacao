

//variaveis

float soma 			= 0;
float subtracao 	= 0;
float multiplicacao = 0;
float divisao 		= 0;
char escolha = '+';
int contador;



//funções

float Soma (float Numero1, float Numero2, float Numero3 = 0 ) {

  return (Numero1 + Numero2 + Numero3);
}

float Subtracao (float Numero1, float Numero2, float Numero3 = 0 ) { 

  return (Numero1 - Numero2) ;

}  
float Multiplicacao (float Numero1, float Numero2, float Numero3 = 0 ) { 

  return (Numero1 * Numero2) ; 

}  
float Divisao (float Numero1, float Numero2, float Numero3 = 0 ) {

  return (Numero1 / Numero2) ;   

}


void setup()
{
  Serial.begin (9600);



  //varias locais

  float N1 = 0;
  float N2 = 0;


  do {




    Serial.println("Bem-Vindo(a) a calculadora inteligente"); 
    Serial.println("Escolha uma das opcoes/operacoes");
    Serial.println("(+) - Somar       ");
    Serial.println("(-) - Subtrair    ");
    Serial.println("(*) - Multiplicar ");  
    Serial.println("(/) - Dividir     ");  
    Serial.println("Porfavor, lembre-se de nao deixar nenhum espaco no fim da linha");
    while (! Serial.available ());  
    escolha = Serial.read();



    Serial.println("Agora para realizar a operacao, digite o 1 numero");
    while (! Serial.available ());    
    N1 = Serial.parseFloat();

    Serial.println();

    Serial.println("Agora, digite o 2 numero");
    while (! Serial.available ());    
    N2 = Serial.parseFloat();

    /*Serial.println("Agora, digite o 3 numero (OPCIONAL)");
    while (! Serial.available ());    
    Numero3 = Serial.parseFloat();
    */

    Serial.println();

    switch(escolha)  {

      case '+':
      float resultadoSoma;
      resultadoSoma = Soma(N1, N2);
      Serial.println("WOW!!! O resultado foi: " + String(resultadoSoma)); 
      Serial.println();

      break;

      case '-':
      float resultadoSubtracao;
      resultadoSubtracao = Subtracao(N1, N2);
      Serial.println("WOW!!! O resultado foi: " + String(resultadoSubtracao)); 
      Serial.println();

      break;

      case '*':
      float resultadoMultiplicacao;
      resultadoMultiplicacao = Multiplicacao(N1, N2);
      Serial.println("WOW!!! O resultado foi: " + String(resultadoMultiplicacao)); 
      Serial.println();

      break;

      case '/':
      float resultadoDivisao;
      resultadoDivisao = Divisao(N1, N2);
      Serial.println("WOW!!! O resultado foi: " + String(resultadoDivisao)); 
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