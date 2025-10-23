int a = 13;//Correspondente ao LED a
int b = 12;//Correspondente ao LED b
int c = 11;//Correspondente ao LED c
int d = 10;//Correspondente ao LED d
int e = 9;//Correspondente ao LED e
int f = 8;//Correspondente ao LED f
int g = 7;//Correspondente ao LED g

void setup()
{
  pinMode(a, OUTPUT);//Define a como saída
  pinMode(b, OUTPUT);//Define b como saída
  pinMode(c, OUTPUT);//Define c como saída
  pinMode(d, OUTPUT);//Define d como saída
  pinMode(e, OUTPUT);//Define e como saída
  pinMode(f, OUTPUT);//Define f como saída
  pinMode(g, OUTPUT);//Define g como saída
}

void loop()
{
  //Apagado
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  delay(100);
  
  //0
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
  delay(2000);
  
  //1
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  delay(2000);
  
  //2
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  delay(2000);
  
  //3
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  delay(2000);
  
  //4
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(2000);
  
  //5
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(2000);
  
  //6
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(2000);
  
  //7
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  delay(2000);
  
  //8
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(2000);
  
  //9
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(2000);
  
}
