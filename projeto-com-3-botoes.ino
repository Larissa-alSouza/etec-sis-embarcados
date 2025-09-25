int led = 4;

int botao1 = 9;
int botao2 = 10;
int botao3 = 11;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  
  digitalWrite(led, LOW);
}

void loop()
{
  
  
  if(digitalRead(botao1) == LOW)
  {
    digitalWrite(led, HIGH);
  }
  else if(digitalRead(botao2) == LOW && digitalRead(led) == HIGH)
  {
    while(digitalRead(botao3) != LOW && digitalRead(botao1))
    {
      digitalWrite(led, LOW);
      delay(200);

      digitalWrite(led, HIGH);
      delay(200);
    }
    
  }
  else if(digitalRead(botao3) == LOW)
  {
    digitalWrite(led, LOW);
  }
}
