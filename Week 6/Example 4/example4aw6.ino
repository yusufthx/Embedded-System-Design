//Example 1 Week 6
//Write a program to produce a PWM signal with 25% duty cycle on Channel A of timer1. 
//Use 10-bit Phase Correct PWM-mode and pre-scalervalue of 8.
//Determine the theoretical frequency of the generated PWM signal.

//intmain()
//{
//unsigned char*ddrb= (unsigned char*)0x24;
//unsigned char*ocr1al = (unsigned char*)0x88;
//unsigned char*tccr1a = (unsigned char*)0x80;
//unsigned char*tccr1b = (unsigned char*)0x81;
//*ddrb=2;
//*ocr1al =255;
//*tccr1a =0b10000011;
//*tccr1b =0b00000010;
//}

unsigned char*ddrb= (unsigned char*)0x24;
unsigned char*ocr1al = (unsigned char*)0x88;
unsigned char*tccr1a = (unsigned char*)0x80;
unsigned char*tccr1b = (unsigned char*)0x81;

void setup() {

*ddrb=2;
*ocr1al =255;
*tccr1a =0b10000011;
*tccr1b =0b00000010;

}

void loop() {


}
