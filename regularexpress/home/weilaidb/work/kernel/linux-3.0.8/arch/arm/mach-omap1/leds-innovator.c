#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
static unsigned int led_state;
static unsigned int hw_led_state;
void innovator_leds_event(led_event_t evt)
