#define B43_LEDS_H_
struct b43_wl;
struct b43_wldev;
#define B43_LED_MAX_NAME_LEN	31
struct b43_led ;
struct b43_leds ;
#define B43_MAX_NR_LEDS			4
#define B43_LED_BEHAVIOUR		0x7F
#define B43_LED_ACTIVELOW		0x80
enum b43_led_behaviour ;
void b43_leds_register(struct b43_wldev *dev);
void b43_leds_unregister(struct b43_wl *wl);
void b43_leds_init(struct b43_wldev *dev);
void b43_leds_exit(struct b43_wldev *dev);
void b43_leds_stop(struct b43_wldev *dev);
struct b43_leds ;
static inline void b43_leds_register(struct b43_wldev *dev)
static inline void b43_leds_unregister(struct b43_wl *wl)
static inline void b43_leds_init(struct b43_wldev *dev)
static inline void b43_leds_exit(struct b43_wldev *dev)
static inline void b43_leds_stop(struct b43_wldev *dev)
