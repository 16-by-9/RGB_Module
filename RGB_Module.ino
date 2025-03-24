int redPin = 9; //select the pin for the red LED
int greenPin = 10;// select the pin for the green LED
int bluePin = 11; // select the pin for the  blue LED

void setup() {
//Put your setup code here, to run once:
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT);

analogWrite(redPin, 0);
analogWrite(greenPin, 0);
analogWrite(bluePin, 0);


}

void loop() {

}