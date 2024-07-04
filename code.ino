// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(9, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  
  digitalWrite(8, HIGH);
  digitalWrite(8, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  
  digitalWrite(7, HIGH);
  digitalWrite(7, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
}
