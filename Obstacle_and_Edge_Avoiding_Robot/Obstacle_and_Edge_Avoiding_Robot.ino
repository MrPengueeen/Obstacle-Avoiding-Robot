const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 5;
const int rightBackward = 4;


void setup() 
{
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  

}

void loop()
{
  
  goForward();
 
  
  
 
}
void goForward() {
  digitalWrite(leftForward , LOW);
  digitalWrite(leftBackward, HIGH);
  digitalWrite(rightForward,HIGH);
  digitalWrite(rightBackward, LOW);
  
}

void goBackward() {
  digitalWrite(leftForward, HIGH);
  digitalWrite(leftBackward, LOW);
  digitalWrite(rightForward, HIGH);
  digitalWrite(rightBackward, LOW);
}
void motorStop() {
  digitalWrite(leftForward, LOW);
  digitalWrite(leftBackward, LOW);
  digitalWrite(rightForward, LOW);
  digitalWrite(rightBackward, LOW);
}
