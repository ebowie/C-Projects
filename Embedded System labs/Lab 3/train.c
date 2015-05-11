#include "iodefine.h"


                                    //associates led's 4-15 as with PDR (direction) bits
#define LED4_PDR PORTD.PDR.BIT.B3
#define LED5_PDR PORTD.PDR.BIT.B4
#define LED6_PDR PORTD.PDR.BIT.B5
#define LED7_PDR PORTD.PDR.BIT.B6
#define LED8_PDR PORTD.PDR.BIT.B7
#define LED9_PDR PORTE.PDR.BIT.B0
#define LED10_PDR PORTE.PDR.BIT.B1
#define LED11_PDR PORTE.PDR.BIT.B2
#define LED12_PDR PORTE.PDR.BIT.B3
#define LED13_PDR PORTE.PDR.BIT.B4
#define LED14_PDR PORTE.PDR.BIT.B5
#define LED15_PDR PORTE.PDR.BIT.B6

                                    //associates led's 4-15 as with PDR (direction) bits
#define LED4 PORTD.PODR.BIT.B3
#define LED5 PORTD.PODR.BIT.B4
#define LED6 PORTD.PODR.BIT.B5
#define LED7 PORTD.PODR.BIT.B6
#define LED8 PORTD.PODR.BIT.B7
#define LED9 PORTE.PODR.BIT.B0
#define LED10 PORTE.PODR.BIT.B1
#define LED11 PORTE.PODR.BIT.B2
#define LED12 PORTE.PODR.BIT.B3
#define LED13 PORTE.PODR.BIT.B4
#define LED14 PORTE.PODR.BIT.B5
#define LED15 PORTE.PODR.BIT.B6





#define SW1 PORT4.PIDR.BIT.B0   //associate the switches as inputs
#define SW2 PORT4.PIDR.BIT.B1
#define SW3 PORT4.PIDR.BIT.B4
                                //useful macros
#define LED_ON 1
#define LED_OFF 0
#define ALL_LEDS_ON {LED4 = LED5 = LED6 = LED7 = LED8 = LED9 = LED10 = LED11 = LED12 = LED13 = LED14 = LED15 = LED_ON;}
#define ALL_LEDS_OFF {LED4 = LED5 = LED6 = LED7 = LED8 = LED9 = LED10 = LED11 = LED12 = LED13 = LED14 = LED15 = LED_ON;}
#define ENABLE_LEDS {LED4_PDR = LED5_PDR = LED6_PDR = LED7_PDR = LED8_PDR = LED9_PDR = LED10_PDR = LED11_PDR = LED12_PDR = LED13_PDR = LED14_PDR = LED15_PDR = LED_ON;}

int main(){
int head = 4;

while (1){
    if(SW1 == 0){           //train forward
        ENABLE_LEDS;
            while (SW2 == 1){
        LED4 = LED5 = LED6 = LED7 = LED_ON;          // 4 5 6 7
            LED4 = LED_OFF;
        LED5 = LED6 = LED7 = LED8 = LED_ON;          // 5 6 7 8
            LED5 = LED_OFF;
        LED6 = LED7 = LED8 = LED9 = LED_ON;          // 6 7 8 9
            LED6 = LED_OFF;
        LED7 = LED8 = LED9 = LED10 = LED_ON;          // 7 8 9  10
            LED7 = LED_OFF;
        LED8 = LED9 = LED10 = LED11 = LED_ON;          // 8 9 10 11
            LED8 = LED_OFF;
        LED9 = LED10 = LED11 = LED12 = LED_ON;          // 9 10 11 12
            LED9 = LED_OFF;
        LED10 = LED11 = LED12 = LED13 = LED_ON;          // 10 11 12 13
            LED10 = LED_OFF;
        LED11 = LED12 = LED13 = LED14 = LED_ON;          // 11 12 13 14
            LED11 = LED_OFF;
        LED12 = LED13 = LED14 = LED15 = LED_ON;          //12 13 14 15
            LED12 = LED_OFF;
        LED13 = LED14 = LED15 = LED4 = LED_ON;          //13 14 15 4
            LED13 = LED_OFF;
        LED14 = LED15 = LED4 = LED5 = LED_ON;          //14 15 4 5
            LED14 = LED_OFF;
        LED15 = LED4 = LED5 = LED6 = LED_ON;  }        //15 4 5 6


        }

}//end while
return 0;}
