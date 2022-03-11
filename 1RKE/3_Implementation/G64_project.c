#include "G64_project.h"

const int make_delay = 10000; // make delay for initial values
const int encrypted1 = 1;		  // encrypted1 become constant in program
const int encrypted2 = 2;		  // encrypted2 become constant in program
const int encrypted3 = 3;		  // encrypted3 become constant in program
const int encrypted4 = 4;		  // encrypted4 become constant in program
void _delay_ms(uint32_t time) 
{								
	for (uint32_t i = 0; i < (time * make_delay); i++)
	{
		
	}
}

void button_init(void)
{
	//(for Gpio A)
	uint32_t *pRccAhb1enr = (uint32_t *)0x40023830; 
	*pRccAhb1enr |= (1 << 0);						
     
	/*------*/
	uint32_t *pGpiodModeReg = (uint32_t *)0x40020000; 
	*pGpiodModeReg &= ~(1 << 0);					  // setting it as input
	*pGpiodModeReg &= ~(1 << 1);
	/*------*/

	uint32_t *pGpioPuPdReg = (uint32_t *)0x4002000C; //(GPIOx_PUPDR) + 0x0C(offset) for Pull up and pull down
	*pGpioPuPdReg |= (1 << 1);						 
}

void led_init_all(void)
{													  
      //(for Gpio D)												  
	uint32_t *pRccAhb1enr = (uint32_t *)0x40023830;	 
	uint32_t *pGpiodModeReg = (uint32_t *)0x40020C00; 

	*pRccAhb1enr |= (1 << 3); 
	// configure it as General purpose output mode

	*pGpiodModeReg |= (1 << (2 * LED_GREEN));  
	*pGpiodModeReg |= (1 << (2 * LED_ORANGE)); 
	*pGpiodModeReg |= (1 << (2 * LED_RED));	   
	*pGpiodModeReg |= (1 << (2 * LED_BLUE));   

	led_off(LED_GREEN);
	led_off(LED_ORANGE);
	led_off(LED_RED);
	led_off(LED_BLUE);
}

void led_on(uint8_t led_no)							  
{													  // for outputting data
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; //(GPIOx_ODR) + 0x14(offset)
	*pGpiodDataReg |= (1 << led_no);
}

void led_off(uint8_t led_no)						  
{													  // for outputting data
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; //(GPIOx_ODR) + 0x14(offset)
	*pGpiodDataReg &= ~(1 << led_no);
}

int button_press(void) 
{ // for inputting button press data and returns button count
	int count = 0;
	int hfmilsec = 10000000;						  // for some milli seconds
	uint32_t *pGpioaDataReg = (uint32_t *)0x40020010; //(GPIOx_IDR) + 0x10(offset)
	while (hfmilsec--)
	{
		if ((*pGpioaDataReg) & (1 << user_button)) 
		{										// check if the button is pressed or not
			_delay_ms(250);
			count++;
			if (count > 4)
				count = 0;
		}
	}
	return count;
}


int Encryption(int data)
{

	if (data == encrypted1)
	{ int dta = 1000 + 111;
		return dta;
	}
	else if (data == encrypted2)
	{int dta = 2000 + 222;
		return dta;
	}
	else if (data == encrypted3)
	{int dta = 3000 + 333;
		return dta;
	}
	else if (data == encrypted4)
	{int dta = 4000 + 444;
		return dta;
	}
	return 0;
}
