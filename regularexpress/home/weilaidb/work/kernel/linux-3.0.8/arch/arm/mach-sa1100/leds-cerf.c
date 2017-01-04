#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
static unsigned int led_state;
static unsigned int hw_led_state;
#define LED_D0          GPIO_GPIO(0)
#define LED_D1          GPIO_GPIO(1)
#define LED_D2          GPIO_GPIO(2)
#define LED_D3          GPIO_GPIO(3)
#define LED_MASK        (LED_D0|LED_D1|LED_D2|LED_D3)
void cerf_leds_event(led_event_t evt)
