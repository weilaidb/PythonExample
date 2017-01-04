static void b43_led_turn_on(struct b43_wldev *dev, u8 led_index,
bool activelow)
static void b43_led_turn_off(struct b43_wldev *dev, u8 led_index,
bool activelow)
static void b43_led_update(struct b43_wldev *dev,
struct b43_led *led)
static void b43_leds_work(struct work_struct *work)
static void b43_led_brightness_set(struct led_classdev *led_dev,
enum led_brightness brightness)
static int b43_register_led(struct b43_wldev *dev, struct b43_led *led,
const char *name, const char *default_trigger,
u8 led_index, bool activelow)
static void b43_unregister_led(struct b43_led *led)
static void b43_map_led(struct b43_wldev *dev,
u8 led_index,
enum b43_led_behaviour behaviour,
bool activelow)
static void b43_led_get_sprominfo(struct b43_wldev *dev,
unsigned int led_index,
enum b43_led_behaviour *behaviour,
bool *activelow)
void b43_leds_init(struct b43_wldev *dev)
void b43_leds_exit(struct b43_wldev *dev)
void b43_leds_stop(struct b43_wldev *dev)
void b43_leds_register(struct b43_wldev *dev)
void b43_leds_unregister(struct b43_wl *wl)
