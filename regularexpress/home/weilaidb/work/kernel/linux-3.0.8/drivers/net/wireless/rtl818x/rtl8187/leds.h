#define RTL8187_LED_H
#define RTL8187_LED_MAX_NAME_LEN	21
enum ;
enum ;
struct rtl8187_led ;
void rtl8187_leds_init(struct ieee80211_hw *dev, u16 code);
void rtl8187_leds_exit(struct ieee80211_hw *dev);
