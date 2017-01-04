static void _rtl92se_init_led(struct ieee80211_hw *hw,
struct rtl_led *pled, enum rtl_led_pin ledpin)
void rtl92se_init_sw_leds(struct ieee80211_hw *hw)
void rtl92se_sw_led_on(struct ieee80211_hw *hw, struct rtl_led *pled)
void rtl92se_sw_led_off(struct ieee80211_hw *hw, struct rtl_led *pled)
static void _rtl92se_sw_led_control(struct ieee80211_hw *hw,
enum led_ctl_mode ledaction)
void rtl92se_led_control(struct ieee80211_hw *hw, enum led_ctl_mode ledaction)
