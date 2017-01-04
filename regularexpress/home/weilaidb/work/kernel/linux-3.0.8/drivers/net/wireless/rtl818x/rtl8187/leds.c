static void led_turn_on(struct work_struct *work)
static void led_turn_off(struct work_struct *work)
static void rtl8187_led_brightness_set(struct led_classdev *led_dev,
enum led_brightness brightness)
static int rtl8187_register_led(struct ieee80211_hw *dev,
struct rtl8187_led *led, const char *name,
const char *default_trigger, u8 ledpin,
bool is_radio)
static void rtl8187_unregister_led(struct rtl8187_led *led)
void rtl8187_leds_init(struct ieee80211_hw *dev, u16 custid)
void rtl8187_leds_exit(struct ieee80211_hw *dev)
