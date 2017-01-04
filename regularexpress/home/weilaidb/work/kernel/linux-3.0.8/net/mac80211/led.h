void ieee80211_led_rx(struct ieee80211_local *local);
void ieee80211_led_tx(struct ieee80211_local *local, int q);
void ieee80211_led_assoc(struct ieee80211_local *local,
bool associated);
void ieee80211_led_radio(struct ieee80211_local *local,
bool enabled);
void ieee80211_led_names(struct ieee80211_local *local);
void ieee80211_led_init(struct ieee80211_local *local);
void ieee80211_led_exit(struct ieee80211_local *local);
void ieee80211_mod_tpt_led_trig(struct ieee80211_local *local,
unsigned int types_on, unsigned int types_off);
static inline void ieee80211_led_rx(struct ieee80211_local *local)
static inline void ieee80211_led_tx(struct ieee80211_local *local, int q)
static inline void ieee80211_led_assoc(struct ieee80211_local *local,
bool associated)
static inline void ieee80211_led_radio(struct ieee80211_local *local,
bool enabled)
static inline void ieee80211_led_names(struct ieee80211_local *local)
static inline void ieee80211_led_init(struct ieee80211_local *local)
static inline void ieee80211_led_exit(struct ieee80211_local *local)
static inline void ieee80211_mod_tpt_led_trig(struct ieee80211_local *local,
unsigned int types_on,
unsigned int types_off)
static inline void
ieee80211_tpt_led_trig_tx(struct ieee80211_local *local, __le16 fc, int bytes)
static inline void
ieee80211_tpt_led_trig_rx(struct ieee80211_local *local, __le16 fc, int bytes)
