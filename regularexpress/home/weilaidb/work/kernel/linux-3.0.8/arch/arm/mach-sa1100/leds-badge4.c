#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
static unsigned int led_state;
static unsigned int hw_led_state;
#define LED_RED		GPIO_GPIO(7)
#define LED_GREEN       GPIO_GPIO(9)
#define LED_MASK	(LED_RED|LED_GREEN)
#define LED_IDLE	LED_GREEN
#define LED_TIMER	LED_RED
void badge4_leds_event(led_event_t evt)
