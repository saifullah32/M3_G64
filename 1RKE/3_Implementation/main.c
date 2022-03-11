#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "project.h"
#include <stdio.h>

static void lock(void);			   
static void unlock(void);		   
static void approach_light(void);  
static void alarm_actOrDact(void); 

static void lock(void) 
{
	led_on(LED_ORANGE);
	led_on(LED_GREEN);
	led_on(LED_RED);
	led_on(LED_BLUE);
}

static void alarm_actOrDact(void) 
{

	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_RED);
	my_delay_ms(350);
	led_off(LED_RED);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
}

static void approach_light(void) 
{

	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_RED);
	my_delay_ms(350);
	led_off(LED_RED);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
}

static void unlock(void) 
{
	led_off(LED_ORANGE);
	led_off(LED_GREEN);
	led_off(LED_RED);
	led_off(LED_BLUE);
}

int main(void)
{

	led_init_all();
	button_init();

	while (1)
	{
		int btncnt = btn_press();
		volatile int encrypredData = Encryption(btncnt);
		if (encrypredData == 1244)
		{ // comparing encrypted data
			lock();
			btncnt = 0;
		}
		else if (encrypredData == 1843)
		{ // comparing encrypted data
			unlock();
			btncnt = 0;
		}
		else if (encrypredData == 6789)
		{ // comparing encrypted data
			alarm_actOrDact();

			btncnt = 0;
		}
		else if (encrypredData == 5478)
		{ // comparing encrypted data
			approach_light();
			btncnt = 0;
		}
	}
}
