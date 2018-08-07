int opendelay = 500;
int closedelay = 1000;
void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 4; i++) {
    pinMode(i, OUTPUT);
  }//setup loop
}//setup

void loop() {
  for (int i = 2; i < 4; i++) {
    digitalWrite (i, LOW);
    delay (opendelay);
    digitalWrite (i, HIGH);
    delay (closedelay);
  }//pattern loop
 }//void loop
  // put your main code here, to run repeatedly:


