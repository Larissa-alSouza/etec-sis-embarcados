int LED = 9;
int LED1 = 1;
int LED2 = 13;
int LED3 = 7;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(200); 
  digitalWrite(LED1, HIGH);
  delay(200); 
  digitalWrite(LED2, HIGH);
  delay(200); 
  digitalWrite(LED3, HIGH);
  delay(200); 
  digitalWrite(LED, LOW);
  delay(200);
  digitalWrite(LED1, LOW);
  delay(200);
  digitalWrite(LED2, LOW);
  delay(200);
  digitalWrite(LED3, LOW);
  delay(200); 
}
