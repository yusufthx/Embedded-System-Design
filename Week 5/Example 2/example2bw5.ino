//Write a program that continuously prints out the analog value of PC3 through the serial port. Assume the followings:
//•The clock speed of the microcontroller is 16MHz
//•The desired clock speed of ADC is 125 kHz.
//•Use AVCC as analog reference.
//•On-demand mode


//char*admux= (char*)0x7C; //Signed/unsigned does not matter if you don’t do decimal work
//volatileunsigned char*adcsra= (unsignedchar*)0x7A;
//volatileunsigned char*adch= (unsignedchar*)0x79;
//volatileunsigned char*adcl= (unsignedchar*)0x78;
//intmain()//To run on Arduino, just change this function to void setup()
//{
//*admux=0b01000011; //Set analog reference to AVCC and analog source to PC3.
//*adcsra=0b11000111; //Enable ADC, start conversion and set pre-scalerto 128
//Serial.begin(9600);
//while(1)
//{
//*adcsra|=0b01000000; //Start conversion (Set ADSC bit)
//while (((*adcsra) &0b01000000))//As long as ADSC bit is HIGH
//{
////Do nothing
//}
//intlowbyte= (*adcl); //Capture low byte
//inthighbyte= (*adch); //Capture high byte
//intvalue = (highbyte<<8) | lowbyte; //Merge high byte and low byte
//Serial.println(value);
//}
//}


char*admux= (char*)0x7C; //Signed/unsigned does not matter if you don’t do decimal work
volatile unsigned char*adcsra = (unsigned char*) 0x7A;
volatile unsigned char*adch = (unsigned char*) 0x79;
volatile unsigned char*adcl = (unsigned char*) 0x78;

//intmain()//To run on Arduino, just change this function to void setup()
void setup()
{
  *admux=0b01000011; //Set analog reference to AVCC and analog source to PC3 which means A3. if you to use A0 u change to *admux=0b01000000;
  *adcsra=0b11000111; //Enable ADC, start conversion and set pre-scaler to 128
  Serial.begin(9600);

}

void loop() {
   {
    *adcsra|=0b01000000;                          //Start conversion (Set ADSC bit)
   while (((*adcsra) &0b01000000))               //As long as ADSC bit is HIGH
   {
         //Do nothing
   }
        int lowbyte = (*adcl);                        //Capture low byte
        int highbyte = (*adch);                       //Capture high byte
        int value = (highbyte<<8) | lowbyte;          //Merge high byte and low byte

        Serial.print("lowbyte:");
        Serial.print(lowbyte);  //the range is between 0 to 255
        Serial.print("\t");
        Serial.print("highbyte:");
        Serial.print(highbyte); //the range is between 0 to 3
        Serial.print("\t");
        Serial.print("value:");
        Serial.println(value); // the range is between 0 to 1023
    }
    
}
