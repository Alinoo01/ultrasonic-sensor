// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(1, LOW);
  delay(500);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(1000); // Wait for 5000 millisecond(s)
  
}