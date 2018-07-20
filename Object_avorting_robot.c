#include<avr/io.h>
#define F_CPU16000000UL
#include<util/delay.h>
#define lcd PORTD
//#include<mamalib/lcd.h>

void main()
{
  DDRA=0b11111110;
  DDRB=0b11111111;
 // DDRD=0b11111111;
  
 // lcd_init();
  //unsigned long int i=0;
  while(1)
  {
    	PORTB=0b00000101;//forward
       
	 if(PINA==0b00000001)
	 {
	 PORTB=0b00000000;//stop
	 _delay_ms(10);
	 
	
	 PORTB=0b00001001;//left
	 _delay_ms(1000);
	 
	 }
	 else
	   PORTB=0b00000101; 
   
 
	  
  }
}
