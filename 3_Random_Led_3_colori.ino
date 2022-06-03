int redpin = 11;
int greenpin = 9;
int blupin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(redpin,  OUTPUT);
  pinMode(greenpin,  OUTPUT);
  pinMode(blupin,  OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  analogWrite(redpin,random(255));
  analogWrite(greenpin,random(255));
  analogWrite(blupin,random(255));
    delay(1000);
  
}
