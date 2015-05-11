#include <msp430.h> 
#define LED0 BIT0
#define LED1 BIT6
#define BUTTON 0x08

long temp = 0;

int main(void)
{
WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
P1DIR |= (LED0 + LED1); // Set P1.0 to output direction

// P1.3 must stay at input
P1OUT &= ~(LED0 + LED1); // set P1.0 to 0 (LED OFF)

P1IE |= BUTTON; // P1.3 interrupt enabled

P1IFG &= ~BUTTON; // P1.3 IFG cleared

__enable_interrupt(); // enable all interrupts
while(1)
{



	   _delay_cycles(1000000);
	   P1OUT = LED0;
	  _delay_cycles(1000000);

	  P1OUT = LED1;


}

}



// Port 1 interrupt service routine
#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
{

	P1IFG &= ~BUTTON; // P1.3 IFG cleared
	P1IES ^= BUTTON;


P1OUT ^= (LED0 + LED1); // P1.0 = toggle




 // toggle the interrupt edge,
// the interrupt vector will be called
// when P1.3 goes from HitoLow as well as
// LowtoHigh
}
