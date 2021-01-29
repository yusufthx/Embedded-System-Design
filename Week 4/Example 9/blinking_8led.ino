//this code to blink two led in two differernt rate
//There are two LEDs whose anodes are connected to PB0 and PB1 respectively. 
//The LED0 needs to be flashing with ON time 781ms and OFF time 515ms.
//The LED1 needs to be flashing with ON time 2014ms and OFF time 1348ms. 
//The LED2 needs to be flashing with ON time 343ms and OFF time 573ms.
//The LED3 needs to be flashing with ON time 678ms and OFF time 1839ms. 
//The LED4 needs to be flashing with ON time 342ms and OFF time 534ms.
//The LED5 needs to be flashing with ON time 1478ms and OFF time 326ms. 
//The LED6 needs to be flashing with ON time 1859ms and OFF time 351ms.
//The LED7 needs to be flashing with ON time 777ms and OFF time 888ms.


  int led0 = 0;   //red led
  int led1 = 1;   //orange
  int led2 = 2;   //blue
  int led3 = 3;   //white
  int led4 = 4;   //greeen
  int led5 = 5;   //yellow
  int led6 = 6;   //red
  int led7 = 7;   //blue





void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  
}

void loop() {
  //led0 Red
  digitalWrite(led0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(781);                       // wait for 781ms 
  digitalWrite(led0, LOW);    // turn the LED off by making the voltage LOW
  delay(515);                       // wait for 515ms

  //led1 Orange
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2014);                       // wait for 2014ms 
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(1348);                       // wait for 1348ms


  //led0 Blue
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(343);                       // wait for 343ms 
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(573);                       // wait for 573ms

  //led1 White
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(678);                       // wait for 678ms 
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(1839);                       // wait for 1839ms

  //led0 Green
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(342);                       // wait for 342ms 
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  delay(534);                       // wait for 534ms

  //led1 Yellow
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1478);                       // wait for 1478ms 
  digitalWrite(led5, LOW);    // turn the LED off by making the voltage LOW
  delay(326);                       // wait for 326ms

  //led0 Red
  digitalWrite(led6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1859);                       // wait for 1859ms 
  digitalWrite(led6, LOW);    // turn the LED off by making the voltage LOW
  delay(351);                       // wait for 351ms


  //led0 Blue
  digitalWrite(led7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(777);                      // wait for 777ms 
  digitalWrite(led7, LOW);    // turn the LED off by making the voltage LOW
  delay(888);                       // wait for 888ms







  
}
