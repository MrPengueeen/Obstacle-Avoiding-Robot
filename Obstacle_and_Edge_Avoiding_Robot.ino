const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;
const int enable_12 = 8;
const int enable_34 = 10;

void setup()
{
  pinMode(enable_12, OUTPUT);
  pinMode(enable_34, OUTPUT);
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward, OUTPUT);
  pinMode(rightBackward, OUTPUT);
}

void loop()
{
  motorStart();
  goForward();
  delay(10000);
  motorStop();
  delay(3000);
  motorStart();
  goBackward();
  delay(10000);
  motorStop();
  delay(3000);





}
void goForward() {
  digitalWrite(leftForward , HIGH);
  digitalWrite(leftBackward, LOW);
  digitalWrite(rightForward, HIGH);
  digitalWrite(rightBackward, LOW);

}

void goBackward() {
  digitalWrite(leftForward, LOW);
  digitalWrite(leftBackward, HIGH);
  digitalWrite(rightForward, LOW);
  digitalWrite(rightBackward, HIGH);
}

void motorStart() {
  digitalWrite(enable_12, HIGH);
  digitalWrite(enable_34, HIGH);
}
void motorStop() {
  digitalWrite(enable_12, LOW);
  digitalWrite(enable_34, LOW);
}
