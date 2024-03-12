int led1=10,led2=9,led3=8;
int delay1=500,delay2=200,delay3=1500;

void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
digitalWrite(led1,HIGH);
delay(delay1);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delay(delay2);
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
delay(delay3);
digitalWrite(led3,LOW);
}
