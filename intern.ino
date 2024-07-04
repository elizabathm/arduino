const int ledpin=12;
const int buttonpin=2;
int buttonstate=0;
void setup()
{
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
}
void loop() 
{
  buttonstate=digitalRead(buttonpin);
  Serial.println("hello");
  if (buttonstate==HIGH)
  {digitalWrite(ledpin,HIGH);}
  else{digitalWrite(ledpin,LOW);}
}
