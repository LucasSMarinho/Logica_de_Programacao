// C++ code
//variaveis


float media;
float n1, n2, n3, n4;
String text    = "||ERROR||";
String materia = "||ERROR||";
  
  
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_15         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();
  
 Serial.println("Digite a materia escolhida");
 while (! Serial.available()); 
 n1 = Serial.parseFloat();
  
  
 Serial.println("Digite a primeira nota");
 while (! Serial.available()); 
 n1 = Serial.parseFloat();
  
 Serial.println("Digite a segunda nota");
 while (! Serial.available()); 
 n2 = Serial.parseFloat();
  
 Serial.println("Digite a terceira nota");
 while (! Serial.available()); 
 n3 = Serial.parseFloat(); 
  
 Serial.println("Digite a quarta nota");
 while (! Serial.available()); 
 n4 = Serial.parseFloat();
  
  media =(n1+n2+n3+n4) / 4;
  
  
  if( media >= 7 ){
    
    text = "Voce foi aprovado";
    
  }else if ( media >= 5) {
    
    text = "Voce está de recuperacao";
    
  }else {
    
    text = "Voce foi reprovado"; }
  
  
  Serial.println();
  Serial.println();
  Serial.println("-------------------------------------------------------------"); 
  Serial.println("Boletim de " + String(text));
  Serial.println("-------------------------------------------------------------");
  Serial.println();
  Serial.println();
  Serial.println("-------------------------------------------------------------");
  Serial.println("Primeira Nota: " + String(n1));
  Serial.println();
  Serial.println("Segunda Nota: " + String(n2));
  Serial.println();
  Serial.println("Terceira Nota: " + String(n3));
  Serial.println();
  Serial.println("Quarta Nota: " + String(n4)); 
  Serial.println("-------------------------------------------------------------");
  Serial.println("Media final: " + String(media));
  Serial.println("-------------------------------------------------------------"); 
  Serial.println();
  Serial.println();
  Serial.println(text);
  Serial.println();
  Serial.println();  
  Serial.println("-------------------------------------------------------------"); 
  Serial.println(); 
  Serial.println("-------------------------------------------------------------"); 
  
  
  
}