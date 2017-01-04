#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
static unsigned int led_state;
static unsigned int hw_led_state;
#define LED_23    GPIO_GPIO23
#define LED_MASK  (LED_23)
void lart_leds_event(led_event_t evt)
