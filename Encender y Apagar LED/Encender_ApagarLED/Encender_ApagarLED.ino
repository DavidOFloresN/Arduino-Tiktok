int ledPin = 8; //Indicamos el pin conectado de nuestro protoboard a nuestro arduino (en este caso es el pin #8)
int pause = 1000; // Indicamos el tiempo que queremos que se retrace el cambio de instruccion 

void setup() {
pinMode(ledPin,OUTPUT);
}jhg

void loop() {
digitalWrite(ledPin,HIGH); 
delay(pause);
digitalWrite(ledPin,LOW);
delay(pause);
exit(0);
}