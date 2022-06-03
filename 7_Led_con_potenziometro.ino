int redpin= 11;
int greenpin= 9;
int blupin= 10;
int Slider=0;
int Lettura=0;
int Gruppo;
int Lumi;

void setup() {
  pinMode(redpin,  OUTPUT);
  pinMode(greenpin,  OUTPUT);
  pinMode(blupin,  OUTPUT);
analogReference(DEFAULT);
}

void loop() {
  
  Lettura = analogRead(Slider);
  
  Gruppo = (Lettura & 768)/256;
  Lumi = (Lettura & 255);

switch (Gruppo) {
  case 0:
  analogWrite(greenpin,Lumi);
  analogWrite(redpin,Lumi);
  analogWrite(blupin,Lumi);
  break;
  case 1:
  analogWrite(greenpin,255-Lumi);
  analogWrite(blupin,Lumi);
  analogWrite(redpin,0);
  break;
  case 2:
  analogWrite(blupin,255-Lumi);
  analogWrite(redpin,Lumi);
  analogWrite(greenpin,0);
  break;
  case 3:
  analogWrite(redpin,255-Lumi);
  analogWrite(greenpin,Lumi);
  analogWrite(blupin,0);
  break;

}
delay (10);

}
  
  
