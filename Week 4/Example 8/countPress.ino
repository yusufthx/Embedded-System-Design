//Four switches (Push button: A, B, C, and D) are connected to ATmega328p as shown in the figure. 
//The micro controller needs to keep track of how many times each button has been pressed.
//Whenever any button has been pressed, the micro controller needs to send out 
//the information (of how many times each button has been pressed) 
//through the serial port.

//adapted from https://mechatrofice.com/arduino/arduino-counter-code-circuit-working

//the state of push button
int buttonA;
int buttonB;
int buttonC;
int buttonD;
int buttonE;

//the previous value for push button
int prevA;
int prevB;
int prevC;
int prevD;
int prevE;

//count the push button
int countA;
int countB;
int countC;
int countD;
int countE;


void setup() {
  
  Serial.begin(9600);
  
// initialize the pushbutton pin as an input:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
// 
// When your button is not pressed, 
//the internal pull-up resistor connects to 5 volts/ AREF. 
//This causes the Arduino to report "1" or HIGH. 
//When the button is pressed, 
//the Arduino pin is pulled to ground, 
//causing the Arduino report a "0", or LOW.
//adapted from https://www.arduino.cc/en/Tutorial/BuiltInExamples/InputPullupSerial/
    
}

void loop() {
  // read the state of the pushbutton
  buttonA = digitalRead(2);
  buttonB = digitalRead(3);
  buttonC = digitalRead(4);
  buttonD = digitalRead(5);
  buttonE = digitalRead(6);
  
  Serial.print("A = ");
  Serial.print(countA);
  Serial.print("\t");
  
  Serial.print("B = ");
  Serial.print(countB);
  Serial.print("\t");
  
  Serial.print("C = ");
  Serial.print(countC);
  Serial.print("\t");
  
  Serial.print("D = ");
  Serial.print(countD);
  Serial.print("\t");
  
  Serial.print("E = ");
  Serial.println(countE); 


  if ((prevA==1) && (buttonA == 0)) {
    countA++;
  }
    prevA = buttonA;

  if ((prevB == 1) && (buttonB == 0)) {
    countB++;
  }
    prevB = buttonB;

  if ((prevC == 1) && (buttonC == 0)) {
    countC++;
  }
    prevC = buttonC;

  if ((prevD == 1) && (buttonD == 0)) {
    countD++;
  }
   prevD = buttonD;

  if ((prevE == 1) && (buttonE == 0)) {
    countE++;
  }
    prevE = buttonE;

 
}
