int ledPin = 8
int pause = 1000

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin,HIGH);
delay(pause);
digitalWrite(LedPin,LOW);
delay(pause);

//exit(0);
}
