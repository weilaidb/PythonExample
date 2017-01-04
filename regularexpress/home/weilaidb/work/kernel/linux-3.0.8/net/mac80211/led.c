void ieee80211_led_rx(struct ieee80211_local *local)
void ieee80211_led_tx(struct ieee80211_local *local, int q)
void ieee80211_led_assoc(struct ieee80211_local *local, bool associated)
void ieee80211_led_radio(struct ieee80211_local *local, bool enabled)
void ieee80211_led_names(struct ieee80211_local *local)
void ieee80211_led_init(struct ieee80211_local *local)
void ieee80211_led_exit(struct ieee80211_local *local)
char *__ieee80211_get_radio_led_name(struct ieee80211_hw *hw)
EXPORT_SYMBOL(__ieee80211_get_radio_led_name);
char *__ieee80211_get_assoc_led_name(struct ieee80211_hw *hw)
EXPORT_SYMBOL(__ieee80211_get_assoc_led_name);
char *__ieee80211_get_tx_led_name(struct ieee80211_hw *hw)
EXPORT_SYMBOL(__ieee80211_get_tx_led_name);
char *__ieee80211_get_rx_led_name(struct ieee80211_hw *hw)
EXPORT_SYMBOL(__ieee80211_get_rx_led_name);
static unsigned long tpt_trig_traffic(struct ieee80211_local *local,
struct tpt_led_trigger *tpt_trig)
static void tpt_trig_timer(unsigned long data)
char *__ieee80211_create_tpt_led_trigger(struct ieee80211_hw *hw,
unsigned int flags,
const struct ieee80211_tpt_blink *blink_table,
unsigned int blink_table_len)
EXPORT_SYMBOL(__ieee80211_create_tpt_led_trigger);
static void ieee80211_start_tpt_led_trig(struct ieee80211_local *local)
static void ieee80211_stop_tpt_led_trig(struct ieee80211_local *local)
void ieee80211_mod_tpt_led_trig(struct ieee80211_local *local,
unsigned int types_on, unsigned int types_off)
