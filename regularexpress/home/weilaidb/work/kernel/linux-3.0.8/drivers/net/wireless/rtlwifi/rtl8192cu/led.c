static void _rtl92cu_init_led(struct ieee80211_hw *hw,
struct rtl_led *pled, enum rtl_led_pin ledpin)
static void _rtl92cu_deInit_led(struct rtl_led *pled)
void rtl92cu_sw_led_on(struct ieee80211_hw *hw, struct rtl_led *pled)
void rtl92cu_sw_led_off(struct ieee80211_hw *hw, struct rtl_led *pled)
void rtl92cu_init_sw_leds(struct ieee80211_hw *hw)
void rtl92cu_deinit_sw_leds(struct ieee80211_hw *hw)
static void _rtl92cu_sw_led_control(struct ieee80211_hw *hw,
enum led_ctl_mode ledaction)
void rtl92cu_led_control(struct ieee80211_hw *hw,
enum led_ctl_mode ledaction)
