static void p54_update_leds(struct work_struct *work)
static void p54_led_brightness_set(struct led_classdev *led_dev,
enum led_brightness brightness)
static int p54_register_led(struct p54_common *priv,
unsigned int led_index,
char *name, char *trigger)
int p54_init_leds(struct p54_common *priv)
void p54_unregister_leds(struct p54_common *priv)
