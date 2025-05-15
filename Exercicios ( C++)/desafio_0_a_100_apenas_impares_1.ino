// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  
  
  for( int ContadorFor = 1; ContadorFor <= 99; ContadorFor++ ) {
    
    if (ContadorFor % 2 != 0)
    
    Serial.println(String(ContadorFor));
    delay(50);
  }
}

void loop()
{

}