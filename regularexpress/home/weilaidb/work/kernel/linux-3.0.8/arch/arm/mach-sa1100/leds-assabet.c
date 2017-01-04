#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
static unsigned int led_state;
static unsigned int hw_led_state;
#define ASSABET_BCR_LED_MASK	(ASSABET_BCR_LED_GREEN | ASSABET_BCR_LED_RED)
void assabet_leds_event(led_event_t evt)
