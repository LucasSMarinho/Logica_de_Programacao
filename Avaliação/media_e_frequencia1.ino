// C++ code
//variaveis

float TotaldeAulas      = 200;
float Aulasparticipadas = 0;
float N1                = 0;
float N2                = 0;
float media 			= 0;
float frequencia	    = 0;
String text             = "texto aleatório";


void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  Serial.println("Digite sua primeira nota");
  while (! Serial.available() );
  N1 = Serial.parseFloat();
  
  Serial.println("Digite sua segunda nota");
  while (! Serial.available() );
  N2 = Serial.parseFloat();
  
  Serial.println("Digite quantas aulas vc esteve");
  while (! Serial.available() );
  Aulasparticipadas = Serial.parseFloat();
  
  media = (N1 + N2) / 2;
  
  frequencia = Aulasparticipadas / TotaldeAulas * 100;
  
  if (media >= 6 && frequencia >= 75 ) {
    
    text = "voce foi aprovado, parabens";
      
  }else{   
    
    text = "sentimos muito mas vc foi reprovado";
   
    
  }  
  Serial.println("-------------------------------------------------------");  
  Serial.println("sua media: " + String(media, 2));          
  Serial.println("sua frequencia: " + String(frequencia, 0) + "%");
  Serial.println(text);
  Serial.println("-------------------------------------------------------"); 
  Serial.println();
  Serial.println();
  
  
  Serial.println("porfavor, aperte alguma letra mais <enter> para continuar");
  while (! Serial.available()); 
    
    
}