int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

}

void binaryLight(int i) {
  // The code below is using bitwise AND (&) to check if each bit in i is set
  // it will then light the corresponding LED
  digitalWrite(LED1, (i & 0b0001) ? HIGH : LOW);
  digitalWrite(LED2, (i & 0b0010) ? HIGH : LOW);
  digitalWrite(LED3, (i & 0b0100) ? HIGH : LOW);
  digitalWrite(LED4, (i & 0b1000) ? HIGH : LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 16; i++){
    binaryLight(i);
    delay(750);
  }
}
