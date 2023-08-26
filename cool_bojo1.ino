// C++ code
//
int ledver = 13;
int ledama = 7;
int ledred = 4;

void setup(){
  pinMode(ledver, OUTPUT);
  pinMode(ledred, OUTPUT);
  pinMode (ledama, OUTPUT);
}

void loop(){
  
  digitalWrite(ledver,HIGH);
  delay(1000);// Wait for 1000 millisecond(s)
  
  digitalWrite(ledver,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(ledama, HIGH);
  delay(1000);// Wait for 1000 millisecond(s)
  
  digitalWrite(ledama, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(ledred,HIGH);
  delay(1000);// Wait for 1000 millisecond(s)
  
  digitalWrite(ledred,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
}