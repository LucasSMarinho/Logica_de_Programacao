// C++ code

int N1 = 1;
int numero1 = 1;
int resultado;


void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis

void loop()
{
  
  Serial.println("Digite a tabuada que vc deseja obter");
  while (! Serial.available());
  numero1 = Serial.parseInt();
  
  
  
  
  
  
  for (int ContadorDoFor = 1; ContadorDoFor <= 10; ContadorDoFor++){
  
  N1 = numero1;  
  
  resultado = N1 * ContadorDoFor;
    
    Serial.println(String(numero1) + " x " + String(ContadorDoFor) + " = " + String(resultado));
    
    delay (100);
  }
  
  Serial.println("Digite uma letra + <Enter> para continuar");
  while (! Serial.available() );
  
  Serial.println();
  Serial.println();
  
  Serial.read(); 
  } 