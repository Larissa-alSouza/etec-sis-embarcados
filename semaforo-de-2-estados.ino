int led1 = 12; // LED vermelho carros
int led2 = 11; // LED amarelo carros
int led3 = 10; // LED verde carros
int led4 = 9; // LED vermelho pedestres
int led5 = 8; // LED verde pedestres

int botao = 2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(botao, INPUT);
  
}

void loop() {
  digitalWrite(led3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH);
  
  if (digitalRead(botao) == HIGH) {
    digitalWrite(led3, LOW);
  	digitalWrite(led2, LOW);
  	digitalWrite(led1, HIGH);

  	digitalWrite(led4, LOW);
  	digitalWrite(led5, HIGH);
    delay(2000);

  	digitalWrite(led5, LOW);
  	digitalWrite(led4, HIGH);

  	digitalWrite(led1, LOW);
  	digitalWrite(led3, HIGH);
    return;
  }

  delay(2000);
  
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  
  if (digitalRead(botao) == HIGH) {
    digitalWrite(led3, LOW);
  	digitalWrite(led2, LOW);
  	digitalWrite(led1, HIGH);

  	digitalWrite(led4, LOW);
  	digitalWrite(led5, HIGH);

  	delay(2000);

  	digitalWrite(led5, LOW);
  	digitalWrite(led4, HIGH);

  	digitalWrite(led1, LOW);
  	digitalWrite(led3, HIGH);
    return;
  }

  delay(1000);

  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  
  delay(2000);
    
  digitalWrite(led4, LOW);
  
  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH);

  digitalWrite(led1, LOW);
  digitalWrite(led3, HIGH);
}
