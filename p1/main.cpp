#define F_CPU 16000000UL
#include <avr/io.h>
#include 

int main(void)
{
  DDRB=(1<< DDB5);
  PORTB + 0x00;

  while (1)
  {
    PORTB |= (1 << PB5);
    _delay_ms (1000);
    PORTB &= ~ (1<< PB5);
    _delay_ms (1000);/* code */
  }
  
}