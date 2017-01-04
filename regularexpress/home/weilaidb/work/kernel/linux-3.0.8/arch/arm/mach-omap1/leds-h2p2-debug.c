#define GPIO_LED_RED		3
#define GPIO_LED_GREEN		OMAP_MPUIO(4)
#define LED_STATE_ENABLED	0x01
#define LED_STATE_CLAIMED	0x02
#define LED_TIMER_ON		0x04
#define GPIO_IDLE		GPIO_LED_GREEN
#define GPIO_TIMER		GPIO_LED_RED
void h2p2_dbg_leds_event(led_event_t evt)
