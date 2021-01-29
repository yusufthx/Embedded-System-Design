//this code to blink two led in two differernt rate
//There are two LEDs whose anodes are connected to PB0 and PB1 respectively. 
//The LED0 needs to be flashing with ON time 750ms and OFF time 350ms.
//The LED1 needs to be flashing with ON time 400 and OFF time 600ms. 

  int led0= 0;   //green led
  int led1= 1;   //yellow

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  
}

void loop() {
  //led0 Yellow
  digitalWrite(led0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(750);                       // wait for 750ms 
  digitalWrite(led0, LOW);    // turn the LED off by making the voltage LOW
  delay(350);                       // wait for 350ms

  //led1 Green
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);                       // wait for 400ms 
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(600);                       // wait for 600ms
}
