int led1 = 12; //led vermelho carros
int led2 = 11; //led amarelo carros
int led3 = 10; //led verde carros
int led4 = 9; //led vermelho pedestres
int led5 = 8; //led verde pedestres

int botao = 2;
int val = 0;
  
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  pinMode(botao, INPUT_PULLUP);
}

void loop()
{
  val = digitalRead(botao);
  
  if(val == HIGH)
  {
    digitalWrite(led5, HIGH);
    digitalWrite(led1, HIGH);
    
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  else
  {
    digitalWrite(led5, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led1, LOW);
    
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    delay(1000);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
  }
  
}
