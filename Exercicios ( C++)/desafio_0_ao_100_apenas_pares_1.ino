// C++ code
//


void setup()
{
  Serial.begin(9600);


  for (int contadorFor = 0; contadorFor <= 100; contadorFor += 1){

    if (contadorFor % 2 == 0)

      Serial.println(String(contadorFor));
      delay (200);

  }

}

void loop()
{

}