// constants won't change. They're used here to set pin numbers:
  const int buttonRIGHT = 2;
  const int buttonLEFT = 3;
  const int buttonSHOOT = 4;
  const int ledPin =  13;      // the number of the LED pin

// variables will change: variable for reading the pushbutton status   
  int buttonStateRIGHT = 0;         
  int buttonStateLEFT = 0;
  int buttonStateSHOOT = 0;

int right=2, rightRelease=20;
int left=3, leftRelease=30;
int shoot=4, shootRelease=40;

void setup() {
  Serial.begin(9600);
  
  // initialize the LED pin as an output:
    pinMode(ledPin, OUTPUT);
  
  // initialize the pushbutton pin as an input:
    pinMode(buttonRIGHT, INPUT);
    pinMode(buttonLEFT, INPUT);
    pinMode(buttonSHOOT, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
    buttonStateRIGHT = digitalRead(buttonRIGHT);
    buttonStateLEFT = digitalRead(buttonLEFT);
    buttonStateSHOOT = digitalRead(buttonSHOOT);


  //check if the pushbutton is pressed.
  //RIGHT BUTTON
  if (buttonStateRIGHT == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("RIGHT");
    Serial.write(right);
  }
  else{
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }

  //LEFT BUTTON
  if (buttonStateLEFT == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("LEFT");
    Serial.write(left);
  }
  else{
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }

  //SHOOT BUTTON
  if (buttonStateSHOOT == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("SHOOT");
    Serial.write(shoot);
  }
  else{
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
 delay(100);
}
