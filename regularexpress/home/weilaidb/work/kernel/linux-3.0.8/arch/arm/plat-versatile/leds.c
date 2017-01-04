#define LEDREG	(__io_address(VERSATILE_SYS_BASE) + VERSATILE_SYS_LED_OFFSET)
#define LEDREG	(__io_address(REALVIEW_SYS_BASE) + REALVIEW_SYS_LED_OFFSET)
struct versatile_led ;
static const struct  versatile_leds[] = ;
static void versatile_led_set(struct led_classdev *cdev,
enum led_brightness b)
static enum led_brightness versatile_led_get(struct led_classdev *cdev)
static int __init versatile_leds_init(void)
fs_initcall(versatile_leds_init);
