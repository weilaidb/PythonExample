static void b43legacy_led_turn_on(struct b43legacy_wldev *dev, u8 led_index,
bool activelow)
static void b43legacy_led_turn_off(struct b43legacy_wldev *dev, u8 led_index,
bool activelow)
static void b43legacy_led_brightness_set(struct led_classdev *led_dev,
enum led_brightness brightness)
static int b43legacy_register_led(struct b43legacy_wldev *dev,
struct b43legacy_led *led,
const char *name,
const char *default_trigger,
u8 led_index, bool activelow)
static void b43legacy_unregister_led(struct b43legacy_led *led)
static void b43legacy_map_led(struct b43legacy_wldev *dev,
u8 led_index,
enum b43legacy_led_behaviour behaviour,
bool activelow)
void b43legacy_leds_init(struct b43legacy_wldev *dev)
void b43legacy_leds_exit(struct b43legacy_wldev *dev)
