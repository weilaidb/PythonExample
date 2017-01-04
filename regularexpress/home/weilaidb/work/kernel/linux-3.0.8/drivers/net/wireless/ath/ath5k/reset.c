int ath5k_hw_register_timeout(struct ath5k_hw *ah, u32 reg, u32 flag, u32 val,
bool is_set)
unsigned int ath5k_hw_htoclock(struct ath5k_hw *ah, unsigned int usec)
unsigned int ath5k_hw_clocktoh(struct ath5k_hw *ah, unsigned int clock)
static void ath5k_hw_init_core_clock(struct ath5k_hw *ah)
static void ath5k_hw_set_sleep_clock(struct ath5k_hw *ah, bool enable)
static int ath5k_hw_nic_reset(struct ath5k_hw *ah, u32 val)
static int ath5k_hw_wisoc_reset(struct ath5k_hw *ah, u32 flags)
static int ath5k_hw_set_power(struct ath5k_hw *ah, enum ath5k_power_mode mode,
bool set_chip, u16 sleep_duration)
int ath5k_hw_on_hold(struct ath5k_hw *ah)
int ath5k_hw_nic_wakeup(struct ath5k_hw *ah, int flags, bool initial)
static void ath5k_hw_tweak_initval_settings(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static void ath5k_hw_commit_eeprom_settings(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
int ath5k_hw_reset(struct ath5k_hw *ah, enum nl80211_iftype op_mode,
struct ieee80211_channel *channel, bool fast, bool skip_pcu)
