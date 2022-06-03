int redpin = 11;
int greenpin = 9;
int blupin = 10;
int vel=10;
int passo=1;

void setup() {
  for (int L=0;L<256;L+=passo) { 
  analogWrite(redpin,L);
  delay(vel);
  }
}

void loop() { 
  for (int L=0;L<256;L+=passo) { 
   analogWrite(redpin,255-L);
   analogWrite(greenpin,L);
   delay(vel);
   }
  for (int L=0;L<256;L+=passo)  { 
   analogWrite(blupin,L);
   delay(vel);
   }
  for (int L=0;L<256;L+=passo)  {
   analogWrite(blupin,255-L);
   analogWrite(redpin,L);
   delay(vel);
   }
}
  
