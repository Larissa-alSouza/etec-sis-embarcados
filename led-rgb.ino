int azul = 10;//Atribui o valor 9 a variável azul
int verde = 9;//Atribui o valor 10 a variável verde
int vermelho = 12;//Atribui o valor 12 a variável vermelho

void setup() 
{
  pinMode(azul,OUTPUT);//Define a variável azul
  pinMode(verde,OUTPUT);//Define a variável verde
  pinMode(vermelho,OUTPUT);//Define a variável vermelho
  digitalWrite(azul,LOW);//Define pino 9 em nível baixo
  digitalWrite(verde,LOW);//Define pino 10 em nível baixo
  digitalWrite(vermelho,LOW);//Define pino 12 em nível baixo
}

void loop() 
{
  
  //Branco
  digitalWrite(azul, HIGH);//Coloca azul em nível alto, ligando-o
  digitalWrite(vermelho, HIGH);//Coloca vermelho em nível alto
  digitalWrite(verde, HIGH);//Coloca verde em nível alto, ligando-o
  delay(1000);//Intervalo de 1 segundo
  digitalWrite(azul, LOW);//Coloca azul em nível baixo novamente
  digitalWrite(vermelho, LOW);//Coloca vermelho em nível baixo
  digitalWrite(verde, LOW);//Coloca verde em nível baixo
  delay(1000);//Intervalo de 1 segundo
  
  //Magenta (violeta-púrpura)
  digitalWrite(azul, HIGH); //Coloca azul em nível alto
  digitalWrite(vermelho, HIGH); //Coloca vermelho em nível alto
  delay(1000); //Intervalo de 1 segundo
  digitalWrite(azul, LOW); //Coloca azul em nível baixo
  digitalWrite(vermelho, LOW); //Coloca vermelho em nível baixo
  delay(1000); //Intervalo de 1 segundo
  
  //Amarelo
  digitalWrite(verde, HIGH); //Coloca verde em nível alto
  digitalWrite(vermelho, HIGH); //Coloca vermelho em nível alto
  delay(1000); //Intervalo de 1 segundo
  digitalWrite(verde, LOW); //Coloca verde em nível baixo
  digitalWrite(vermelho, LOW); //Coloca vermelho em nível baixo
  delay(1000); //Intervalo de 1 segundo
  
  //Ciano
  digitalWrite(verde, HIGH); //Coloca verde em nível alto
  digitalWrite(azul, HIGH); //Coloca azul em nível baixo alto
  delay(1000); //Intervalo de 1 segundo
  digitalWrite(verde, LOW); //Coloca verde em nível baixo
  digitalWrite(azul, LOW); //Coloca azul em nível baixo
  delay(1000); //Intervalo de 1 segundo
}
