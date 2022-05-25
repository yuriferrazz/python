int RED_LED = 13;
int GREEN_LED = 12;

int TIME_GREEN = 5000;
int TIME_RED = 5000;

void Red_Light(){
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, HIGH);
}
void Green_Light(){
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);
}

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  Green_Light();
  delay(TIME_GREEN);
  Red_Light();
  delay(TIME_RED);
}
