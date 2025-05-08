// C++ code
//Faça um programa que receba um número de usuário e exiba este número, apenas
//se for par. Caso contrário informe apenas “DIGITE APENAS NÚMEROS PARES”.
//Variaveis


 float salario;
 float salariof;
 int cargo = 1;
 String text  	 = "texto aleatorio";
 String textcg	 = "cargo aleatorio";     

void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis

void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_16         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  

  Serial.println("-------------------------------------------------------------");
  Serial.println("Digite o seu cargo");
  Serial.println("-------------------------------------------------------------");
  Serial.println("1 - Producao      ");
  Serial.println("2 - Administrativo");
  Serial.println("3 - Diretoria     ");
  Serial.println("-------------------------------------------------------------");
  Serial.println();  
  Serial.println(); 
  
  while (! Serial.available());
  cargo = Serial.parseInt();


  Serial.println("-------------------------------------------------------------");
  Serial.println("Digite seu salario");
  Serial.println("-------------------------------------------------------------");
  
  
  while (! Serial.available() );
  salario = Serial.parseFloat();
  
   
  switch(cargo) {
    
    case 1:
    
    salariof = salario + (salario * 0.06) ;
    text = "esperamos que vc esteja satisfeito com o novo salario";
    break;
    
    case 2:
    
    salariof = salario * (salario * 0.075);
    text = "esperamos que vc esteja satisfeito com o novo salario";
     break;
    
    case 3:
    
    salariof = salario * (salario * 0.12);
    text = "esperamos que vc esteja satisfeito com o novo salario";
     break;
    
    default:
    
    text = "PORFAVOR SELECIONE UM TRABALHO ENTRE AS OPCOES";
    salario = 0;
    salariof = 0;
  }   
    
  Serial.println();
  Serial.println();
  Serial.println("-------------------------------------------------------------"); 
  Serial.println("Relatorio");
  Serial.println("-------------------------------------------------------------");
  Serial.println("Seu salario antes era de : R$" + String(salario));
  Serial.println("Seu novo salario e de : R$" + String(salariof));
  Serial.println();
  Serial.println(text);
  Serial.println();  
  Serial.println();
  Serial.println();  
  Serial.println("-------------------------------------------------------------"); 
  Serial.println(); 
  Serial.println("-------------------------------------------------------------"); 
  
  
  
  
  
  Serial.println("Digite uma letra + <Enter> para continuar");
  while (! Serial.available() );
  
  Serial.println();
  Serial.println();
  
  Serial.read(); 
  } 