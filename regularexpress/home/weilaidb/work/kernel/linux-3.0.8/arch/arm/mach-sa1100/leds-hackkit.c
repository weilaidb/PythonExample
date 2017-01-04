#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
static unsigned int led_state;
static unsigned int hw_led_state;
#define LED_GREEN    GPIO_GPIO23
#define LED_RED    GPIO_GPIO22
#define LED_MASK  (LED_RED | LED_GREEN)
void hackkit_leds_event(led_event_t evt)
