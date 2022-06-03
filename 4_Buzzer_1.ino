int Buzzer=9;
int Fotores=0;
int Nota;

void setup() {
  pinMode(Buzzer, OUTPUT);
 }
 
void loop() {
  Nota=3*(analogRead(Fotores))+500;
  tone(Buzzer,Nota);
  delay(10);
}
