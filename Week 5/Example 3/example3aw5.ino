//Modify example 2 to put the ADC in continuously running mode (auto-trigger)
//char*admux= (char*)0x7C;
//char*adcsra= (char*)0x7A;
//volatile unsigned char *adch= (unsigned char*)0x79;
//volatile unsigned char *adcl= (unsigned char*)0x78;
//intmain()//To run on Arduino, just change this function to void setup()
//{
//*admux=0b01000011; //Set analog reference to AVCC and analog source to PC3.
//*adcsra=0b11100111; //Enable ADC, start conversion, enable auto-triggering
//// and set pre-scalerto 128
//Serial.begin(9600);
//while(1)
//{
//intlowbyte= (*adcl); //Capture low byte
//inthighbyte= (*adch); //Capture high byte
//intvalue = (highbyte<<8) | lowbyte; //Merge high byte and low byte
//Serial.println(value);
//}
//}


char*admux = (char*)0x7C;
char*adcsra = (char*)0x7A;
volatile unsigned char *adch = (unsigned char*)0x79;
volatile unsigned char *adcl = (unsigned char*)0x78;


void setup() {

*admux = 0b01000011; //Set analog reference to AVCC and analog source to PC3.
*adcsra = 0b11100111; //Enable ADC, start conversion, enable auto-triggering
// and set pre-scalerto 128
Serial.begin(9600);

}

void loop() {
int lowbyte= (*adcl); //Capture low byte
int highbyte= (*adch); //Capture high byte
int value = (highbyte<<8) | lowbyte; //Merge high byte and low byte

Serial.print(lowbyte);
Serial.print("\t");
Serial.print(highbyte);
Serial.print("\t");
Serial.println(value);


}
