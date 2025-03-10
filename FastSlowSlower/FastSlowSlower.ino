// variables go brrrr
int fast = 50;
int slow = 500;
int slower = 2000;
int redLED = 8;
int blueLED = 12;
int greenLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  redBlinks();
  greenBlinks();
  blueBlinks();
}

void redBlinks() {
  for (int i = 0; i < 5; i++){
    digitalWrite(redLED, HIGH);
    delay(fast);
    digitalWrite(redLED, LOW);
    delay(fast);
  }
}

void greenBlinks() {
  for (int i = 0; i < 10; i++){
    digitalWrite(greenLED, HIGH);
    delay(slow);
    digitalWrite(greenLED, LOW);
    delay(slow);
  }
}

void blueBlinks() {
  for (int i = 0; i < 15; i++){
    digitalWrite(blueLED, HIGH);
    delay(slower);
    digitalWrite(blueLED, LOW);
    delay(slower);
  }
}