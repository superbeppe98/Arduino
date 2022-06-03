int  Pin1=9;
int  Pin2=10;
int  Pin3=11;
int  Pausa=1000;

void setup() {
  // put your setup code here, to run once:
pinMode (Pin1, OUTPUT);
pinMode (Pin2, OUTPUT);
pinMode (Pin3, OUTPUT);
}

void loop()  {
  // put your main code here, to run repeatedly: 
  digitalWrite (Pin1, HIGH);
  delay (Pausa);
    digitalWrite (Pin1, LOW);
  delay (Pausa);
    digitalWrite (Pin2, HIGH);
  delay (Pausa);
    digitalWrite (Pin2, LOW);
  delay (Pausa);
    digitalWrite (Pin3, HIGH);
  delay (Pausa);
    digitalWrite (Pin3, LOW);
  delay (Pausa);
 }
