static const unsigned int ack_rates_high[] =	;
int ath5k_hw_get_frame_duration(struct ath5k_hw *ah,
int len, struct ieee80211_rate *rate, bool shortpre)
unsigned int ath5k_hw_get_default_slottime(struct ath5k_hw *ah)
unsigned int ath5k_hw_get_default_sifs(struct ath5k_hw *ah)
void ath5k_hw_update_mib_counters(struct ath5k_hw *ah)
static inline void ath5k_hw_write_rate_duration(struct ath5k_hw *ah)
static int ath5k_hw_set_ack_timeout(struct ath5k_hw *ah, unsigned int timeout)
static int ath5k_hw_set_cts_timeout(struct ath5k_hw *ah, unsigned int timeout)
int ath5k_hw_set_lladdr(struct ath5k_hw *ah, const u8 *mac)
void ath5k_hw_set_bssid(struct ath5k_hw *ah)
void ath5k_hw_set_bssid_mask(struct ath5k_hw *ah, const u8 *mask)
void ath5k_hw_set_mcast_filter(struct ath5k_hw *ah, u32 filter0, u32 filter1)
u32 ath5k_hw_get_rx_filter(struct ath5k_hw *ah)
void ath5k_hw_set_rx_filter(struct ath5k_hw *ah, u32 filter)
#define ATH5K_MAX_TSF_READ 10
u64 ath5k_hw_get_tsf64(struct ath5k_hw *ah)
void ath5k_hw_set_tsf64(struct ath5k_hw *ah, u64 tsf64)
void ath5k_hw_reset_tsf(struct ath5k_hw *ah)
void ath5k_hw_init_beacon(struct ath5k_hw *ah, u32 next_beacon, u32 interval)
static inline bool
ath5k_check_timer_win(int a, int b, int window, int intval)
bool
ath5k_hw_check_beacon_timers(struct ath5k_hw *ah, int intval)
void ath5k_hw_set_coverage_class(struct ath5k_hw *ah, u8 coverage_class)
void ath5k_hw_start_rx_pcu(struct ath5k_hw *ah)
void ath5k_hw_stop_rx_pcu(struct ath5k_hw *ah)
int ath5k_hw_set_opmode(struct ath5k_hw *ah, enum nl80211_iftype op_mode)
void ath5k_hw_pcu_init(struct ath5k_hw *ah, enum nl80211_iftype op_mode,
u8 mode)
