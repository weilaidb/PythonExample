#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
static char led_state;
static char hw_led_state;
static DEFINE_SPINLOCK(leds_lock);
static void netwinder_leds_event(led_event_t evt)
static int __init leds_init(void)
__initcall(leds_init);
