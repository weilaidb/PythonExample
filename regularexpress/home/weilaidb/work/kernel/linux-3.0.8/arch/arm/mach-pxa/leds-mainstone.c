#define D28			(1 << 0)
#define D27			(1 << 1)
#define D26			(1 << 2)
#define D25			(1 << 3)
#define D24			(1 << 4)
#define D23			(1 << 5)
#define D22			(1 << 6)
#define D21			(1 << 7)
#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
static unsigned int led_state;
static unsigned int hw_led_state;
void mainstone_leds_event(led_event_t evt)
