#define LED_STATE_ENABLED	1
#define LED_STATE_CLAIMED	2
#define SEQUOIA_LED_GREEN       (1<<6)
#define SEQUOIA_LED_AMBER       (1<<5)
#define SEQUOIA_LED_BACK        (1<<7)
static char led_state;
static short hw_led_state;
static short saved_state;
static DEFINE_SPINLOCK(leds_lock);
short sequoia_read(int addr)
void sequoia_write(short value,short addr)
static void sequoia_leds_event(led_event_t evt)
static int __init leds_init(void)
__initcall(leds_init);
