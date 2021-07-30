#define R0=16.14
#define RL=10
int buzpin=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(buzpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int a=analogRead(A0);
 Serial.println(a);
 if(a<550)
 {
  digitalWrite(buzpin,HIGH);
  delay(1000);
 }
 
 delay(500);
}
