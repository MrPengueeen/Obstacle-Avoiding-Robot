const int buzzer = 2;
int trigpin = 3;
int echopin = 4;
float duration;
float distance;
const int leftForward = 8;
const int leftBackward = 7;
const int rightForward = 9;
const int rightBackward = 6;


void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward, OUTPUT);
  pinMode(rightForward, OUTPUT);

}
void loop()
{
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);

  distance = ((duration * 0.034) / 2);
  Serial.print(distance);

  if (distance < 20)
  {
    tone(buzzer, 500);



    //  delay


    motorStop();
    delay(1000);
    goRight();
    delay(1000);
  }
  else {
    noTone(buzzer);
    goForward();

  }

  // motorStop();
  // delay(5000);
  //goBackward();
  //delay(5000);
  //motorStop();
  //delay(5000);
  //goLeft();
  //delay(5000);
  //motorStop();
  //delay(5000);
  //goRight();
  //delay(5000);
  //motorStop();
  //delay(5000);




}

void goForward() {
  digitalWrite(leftForward , HIGH);
  digitalWrite(leftBackward, LOW);
  digitalWrite(rightForward, HIGH);
  digitalWrite(rightBackward, LOW);
}
void goBackward()
{
  digitalWrite(leftForward , LOW);
  digitalWrite(leftBackward, HIGH);
  digitalWrite(rightForward, LOW);
  digitalWrite(rightBackward, HIGH);
}
void motorStop() {
  digitalWrite(leftForward , LOW);
  digitalWrite(leftBackward, LOW);
  digitalWrite(rightForward, LOW);
  digitalWrite(rightBackward, LOW);
}
void goLeft() {
  digitalWrite(leftForward , HIGH);
  digitalWrite(leftBackward, LOW);
  digitalWrite(rightForward, LOW);
  digitalWrite(rightBackward, HIGH);
}
void goRight() {
  digitalWrite(leftForward , LOW);
  digitalWrite(leftBackward, HIGH);
  digitalWrite(rightForward, HIGH);
  digitalWrite(rightBackward, LOW);
}
