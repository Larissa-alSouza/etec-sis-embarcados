int LED = 9;
int LED1 = 1;
int LED2 = 13;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(500); 
  digitalWrite(LED, LOW);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(500); 
}
