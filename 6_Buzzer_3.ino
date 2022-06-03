int Buzzer=9;
int Fotores=0;
int Nota;

void setup() {
  pinMode(Buzzer, OUTPUT);
 }
 
void loop() {
  Nota=2*(analogRead(Fotores))+500;
  if (Nota<590)
  {
    
  }
  else 
  {
  for(int i=0; i<7; i++)
  {
   tone(Buzzer,(Nota+(50*i)));
   delay(10);
  }
 noTone(9);
 delay(50);
}
