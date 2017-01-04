#define B43legacy_LEDS_H_
struct b43legacy_wldev;
#define B43legacy_LED_MAX_NAME_LEN	31
struct b43legacy_led ;
#define B43legacy_LED_BEHAVIOUR		0x7F
#define B43legacy_LED_ACTIVELOW		0x80
enum b43legacy_led_behaviour ;
void b43legacy_leds_init(struct b43legacy_wldev *dev);
void b43legacy_leds_exit(struct b43legacy_wldev *dev);
struct b43legacy_led ;
static inline void b43legacy_leds_init(struct b43legacy_wldev *dev)
static inline void b43legacy_leds_exit(struct b43legacy_wldev *dev)
