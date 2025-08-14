int LED = 9;
int LED1 = 1;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  digitalWrite(LED1, HIGH);
  delay(500); 
  digitalWrite(LED, LOW);
  digitalWrite(LED1, LOW);
  delay(500); 
}
