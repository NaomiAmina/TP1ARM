#include "stm32f10x.h"

int main(void)
{
	RCC->APB2ENR |= 0x00000010; 
	GPIOC->CRH |= 0x00100000;
while(1)
	{
    GPIOC->BSRR = 0x20000000;
    GPIOC->BSRR = 0x00002000;
  }		
}































/*GPIOC->CRH = (GPIOC->CRH & 0xFF0FFFFF) | 0x00300000;
	GPIOA->CRL =  (GPIOC->CRH & 0xFFFFFFF0)| 0x44444448;
  GPIOA->IDR |=  (GPIOC->CRH & 0xFFFFFFFF)| 0x00000000;
	RCC->APB2ENR |= RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPAEN;*/


/*while(1)
{  
	if (GPIOA->BSRR == 0x20000000)
	{
		GPIOC->BSRR = GPIO_BSRR_BS13;
	}
	else  (GPIOC->BSRR = 0x00002000);
	{
	 GPIOA->BSRR = GPIO_BSRR_BR13;	
	}
}*/	




















        // Turn on the LED on pin C13
       // GPIOC->BSRR = GPIO_BSRR_BS13;

        // Wait for 1 second
        //delay_ms(1000);

        // Turn off the LED
       // GPIOC->BSRR = GPIO_BSRR_BR13;

        // Wait for 1 second
       // delay_ms(1000);
/*{
	 GPIOA->CRL &= ~(GPIO_CRL_MODE0 | GPIO_CRL_CNF0_0);
    GPIOA->CRL |= GPIO_CRL_CNF0_1;  // Input mode, floating input

    while (1) {
        // Check the state of the push button
        if ((GPIOA->IDR & GPIO_IDR_IDR0) == 0) {
            // Button is pressed, turn on the LED
            GPIOC->BSRR = GPIO_BSRR_BS13;
        } else {
            // Button is not pressed, turn off the LED
            GPIOC->BSRR = GPIO_BSRR_BR13;
        }
    }	
	}
 }*/
 
 
 /*int main(void) {
    // Enable the clock for GPIOC and GPIOA
    RCC->APB2ENR |= RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPAEN;

    // Configure pin C13 as output for the LED
    GPIOC->CRH &= ~(GPIO_CRH_MODE13 | GPIO_CRH_CNF13);
    GPIOC->CRH |= GPIO_CRH_MODE13_0;  // Output mode, speed 10 MHz

    // Configure pin A0 as input for the push button
    GPIOA->CRL &= ~(GPIO_CRL_MODE0 | GPIO_CRL_CNF0_0);
    GPIOA->CRL |= GPIO_CRL_CNF0_1;  // Input mode, floating input

    while (1) {
        // Check the state of the push button
        if ((GPIOA->IDR & GPIO_IDR_IDR0) == 0) {
            // Button is pressed, turn on the LED
            GPIOC->BSRR = GPIO_BSRR_BS13;
        } else {
            // Button is not pressed, turn off the LED
            GPIOC->BSRR = GPIO_BSRR_BR13;
        }
    }
	}*/

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

