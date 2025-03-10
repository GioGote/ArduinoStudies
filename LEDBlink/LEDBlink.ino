// code to have an arduino LED light up a max of 10 times

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}
 
bool running = true;
int max = 10;
 
void loop() {
  // put your main code here, to run repeatedly:
  if (running){
 
    for (int i = 0; i < max; i++){
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(13, LOW);
      delay(500);
    }
 
    running = false;
  }
}