int k=11;
int y=12;
int potpin=A0;
int deger=0;
int timer=0;
void setup() {
pinMode(k,OUTPUT);
pinMode(y,OUTPUT);}
void loop() {
deger=analogRead(potpin);
timer=map(deger,0,1023,10,500);
digitalWrite(y,HIGH);
delay(timer);
digitalWrite(y,LOW);
delay(timer);
digitalWrite(y,HIGH);
delay(timer);
digitalWrite(y,LOW);
digitalWrite(k,HIGH);
delay(timer);
digitalWrite(k,LOW);
delay(timer);
digitalWrite(k,HIGH);
delay(timer);
digitalWrite(k,LOW);}