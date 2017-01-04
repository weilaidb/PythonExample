static spinlock_t leds_lock;
static void ebsa110_leds_event(led_event_t ledevt)
static int __init leds_init(void)
__initcall(leds_init);
