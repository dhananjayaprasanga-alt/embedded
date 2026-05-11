#define F_CPU 160000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRC = (1<< PC0)| (1<<PC1)| (1<<PC2)| (1<<PC3);}
  PORTC = 0x00;

  while (1)
  {PORTC |= (1<<PC0);
    _delay_ms(1000);
    PORTC &= ~(1<<PC0);

    PORTC |= (1<<PC1):
    _delay_ms (1000);
    PORTC &= ~(1<< PC1);

    PORTC |= (1<<PC2):
    _delay_ms (1000);
    PORTC &= ~(1<< PC2);

    PORTC |= (1<<PC3):
    _delay_ms (1000);
    PORTC &= ~(1<< PC3);

}
    /* code */
  
  
