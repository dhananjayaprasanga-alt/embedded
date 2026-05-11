#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB |= (1<<PB5);
  PORTB = 0x00;

  while (1)

  {
    if (PIND & (1<<PD2))
    {PORTB |= (1<< PB5);}
    
    else{
      PORTB &= ~(1<<PB5);/* code */
  }
  
}
