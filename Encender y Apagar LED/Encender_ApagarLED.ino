int ledPin = 8
int pause = 1000

void setup() {
pinMode(ledPin,OUTPUT);
}

void loop() {  
digitalWrite(ledPin,HIGH);
delay(pause);
digitalWrite(LedPin,LOW);
delay(pause);

//exit(0);
}
