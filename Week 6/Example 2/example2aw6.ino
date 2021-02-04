//Example 2 Week 6
//Write a program to produce a PWM signal with 50% duty cycle on Channel B of timer0. 
//Use Fast PWM mode and pre-scalervalue of 1.
//Determine the theoretical frequency of the generated PWM signal.

//intmain()
//{
//unsigned char*ddrd=(unsigned char*)0x2A;
//unsigned char*ocr0b =(unsigned char*)0x48;
//unsigned char*tccr0a = (unsigned char*)0x44;
//unsigned char*tccr0b = (unsigned char*)0x45;
//*ddrd=1 <<5;
//*ocr0b =127;
//*tccr0a =0b00100011;
//*tccr0b =0b00000001;
//}

unsigned char*ddrd=(unsigned char*)0x2A;
unsigned char*ocr0b =(unsigned char*)0x48;
unsigned char*tccr0a = (unsigned char*)0x44;
unsigned char*tccr0b = (unsigned char*)0x45;

void setup() {

*ddrd=1 <<5;
*ocr0b =127;
*tccr0a =0b00100011;
*tccr0b =0b00000001;

}

void loop() {
  // put your main code here, to run repeatedly:

}
