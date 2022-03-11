#ifndef PROJECT_H_
#define PROJECT_H_


#include <stdint.h>


 /**
  * @brief Used for Green Led
  * 
  */
#define LED_GREEN 12  // green led pin as 12

/**
 * @brief Used for Orange Led
 * 
 */
#define LED_ORANGE 13 // orange led pin as 13

/**
 * @brief Used for Red Led
 * 
 */
#define LED_RED 14    // red led pin as 14

/**
 * @brief Used for Blue Led
 * 
 */
#define LED_BLUE 15   // blue led pin as 15

/**
 * @brief Used For User Button
 * 
 */
#define user_button 0    // user button pin as 0

/**
 * @brief This Function Initilizes the LED's 
 * 
 */
void led_init_all(void);      // This will initialize all the LED's

/**
 * @brief This function takes LED number as input and on that led
 * 
 * @param led_no 
 */
void led_on(uint8_t led_no);  // This is to on custom LED

/**
 * @brief This function takes LED number as input and turns off that led
 * 
 * @param led_no 
 */
void led_off(uint8_t led_no); // This is to off custom LED

/**
 * @brief This function gives us a certain delay
 * 
 * @param time 
 */
void _delay_ms(uint32_t time); // provide delay

/**
 * @brief This function Initilizes the Button
 * 
 */
void button_init(void);   // This will initialize the button

/**
 * @brief This function Counts no of button presses in a Given amount of time
 * 
 * @return int 
 */
int button_press(void);      // This will check no of button presses

/**
 * @brief This function Encrypts the data that is given as input and outputs encrypted data
 * 
 * @param data 
 * @return int 
 */
int Encryption(int data); // This will encrypt no of button presses and returns encrypted data

#endif