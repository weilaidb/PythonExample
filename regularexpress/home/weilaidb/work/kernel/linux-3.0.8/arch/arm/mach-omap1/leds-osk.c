#define LED_STATE_ENABLED	(1 << 0)
#define LED_STATE_CLAIMED	(1 << 1)
static u8 led_state;
#define	TIMER_LED		(1 << 3)
#define	IDLE_LED		(1 << 4)
static u8 hw_led_state;
#define GPIO_LED_RED		3
#define GPIO_LED_GREEN		OMAP_MPUIO(4)
static void mistral_setled(void)
void osk_leds_event(led_event_t evt)
