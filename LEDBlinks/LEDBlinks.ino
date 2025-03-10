void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  redBlinks();
  blueBlinks();
  greenBlinks();
}
 
void redBlinks() {
  for (int i = 0; i < 5; i++){
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8, LOW);
    delay(200);
  }
}
 
void blueBlinks() {
  for (int i = 0; i < 10; i++){
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
}
 
void greenBlinks() {
  for (int i = 0; i < 15; i++){
    digitalWrite(12, HIGH);
    delay(200);
    digitalWrite(12, LOW);
    delay(200);
  }
}