// C++ code
//
void setup()
{
int contadorFor = 60;  
  
  
  Serial.begin(9600);


  while (contadorFor <= 101) {


    if (contadorFor <= 80 && contadorFor % 2 == 0 )    {
      Serial.println(contadorFor);
      delay(200);

    } else if (contadorFor <= 101 && contadorFor % 2 != 0) {

      Serial.println(contadorFor);
      delay (200);
    } else {}
    
    contadorFor++;
  }
}

void loop()
{

}