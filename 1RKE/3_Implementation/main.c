
#include "project.h"
#include <stdio.h>

static void lock(void);			   
static void unlock(void);		   
static void approach_light(void);  
static void alarm_activateOrDeactivate(void); 

static void lock(void) 
{
	led_on(LED_ORANGE);
	led_on(LED_GREEN);
	led_on(LED_BLUE);
}

static void unlock(void) 
{
	led_off(LED_ORANGE);
	led_off(LED_GREEN);
	led_off(LED_RED);
	led_off(LED_BLUE);
}

static void approach_light(void) 
{

	led_on(LED_GREEN);
	_delay_ms(500);
	led_off(LED_GREEN);
	led_on(LED_BLUE);
	_delay_ms(500);
	led_off(LED_BLUE);
	led_on(LED_RED);
	_delay_ms(500);
	led_off(LED_RED);
	led_on(LED_ORANGE);
	_delay_ms(500);
	led_off(LED_ORANGE);
	led_on(LED_GREEN);
	_delay_ms(500);
	led_off(LED_GREEN);
}

static void alarm_activateOrDeactivate(void) 
{

	led_on(LED_GREEN);
	_delay_ms(500);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	_delay_ms(500);
	led_off(LED_ORANGE);
	led_on(LED_RED);
	_delay_ms(500);
	led_off(LED_RED);
	led_on(LED_BLUE);
	_delay_ms(500);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	_delay_ms(500);
	led_off(LED_GREEN);
}

int main(void)
{

	led_init_all();
	button_init();

	while (1)
	{
		int button_count = button_press();
		volatile int encryptedData = Encryption(button_count);
		if (encryptedData == 1111)
		{ 
			lock();
			button_count = 0;
		}
		else if (encryptedData == 2222)
		{ 
			unlock();
			button_count = 0;
		}
		else if (encryptedData == 3333)
		{ 
			alarm_actOrDact();

			button_count = 0;
		}
		else if (encryptedData == 4444)
		{ 
			approach_light();
			button_count = 0;
		}
	}
}
