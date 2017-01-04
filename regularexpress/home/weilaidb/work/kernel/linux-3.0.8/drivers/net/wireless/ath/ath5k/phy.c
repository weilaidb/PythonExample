u16 ath5k_hw_radio_revision(struct ath5k_hw *ah, unsigned int chan)
bool ath5k_channel_ok(struct ath5k_hw *ah, u16 freq, unsigned int flags)
bool ath5k_hw_chan_has_spur_noise(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static unsigned int ath5k_hw_rfb_op(struct ath5k_hw *ah,
const struct ath5k_rf_reg *rf_regs,
u32 val, u8 reg_id, bool set)
static inline int ath5k_hw_write_ofdm_timings(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
int ath5k_hw_phy_disable(struct ath5k_hw *ah)
static void ath5k_hw_wait_for_synth(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
int ath5k_hw_rfgain_opt_init(struct ath5k_hw *ah)
static void ath5k_hw_request_rfgain_probe(struct ath5k_hw *ah)
static u32 ath5k_hw_rf_gainf_corr(struct ath5k_hw *ah)
static bool ath5k_hw_rf_check_gainf_readback(struct ath5k_hw *ah)
static s8 ath5k_hw_rf_gainf_adjust(struct ath5k_hw *ah)
enum ath5k_rfgain ath5k_hw_gainf_calibrate(struct ath5k_hw *ah)
static int ath5k_hw_rfgain_init(struct ath5k_hw *ah, enum ieee80211_band band)
static int ath5k_hw_rfregs_init(struct ath5k_hw *ah,
struct ieee80211_channel *channel, unsigned int mode)
static u32 ath5k_hw_rf5110_chan2athchan(struct ieee80211_channel *channel)
static int ath5k_hw_rf5110_channel(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static int ath5k_hw_rf5111_chan2athchan(unsigned int ieee,
struct ath5k_athchan_2ghz *athchan)
static int ath5k_hw_rf5111_channel(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static int ath5k_hw_rf5112_channel(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static int ath5k_hw_rf2425_channel(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static int ath5k_hw_channel(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static s32 ath5k_hw_read_measured_noise_floor(struct ath5k_hw *ah)
void ath5k_hw_init_nfcal_hist(struct ath5k_hw *ah)
static void ath5k_hw_update_nfcal_hist(struct ath5k_hw *ah, s16 noise_floor)
static s16 ath5k_hw_get_median_noise_floor(struct ath5k_hw *ah)
void ath5k_hw_update_noise_floor(struct ath5k_hw *ah)
static int ath5k_hw_rf5110_calibrate(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static int
ath5k_hw_rf511x_iq_calibrate(struct ath5k_hw *ah)
int ath5k_hw_phy_calibrate(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static void
ath5k_hw_set_spur_mitigation_filter(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static void
ath5k_hw_set_def_antenna(struct ath5k_hw *ah, u8 ant)
static void
ath5k_hw_set_fast_div(struct ath5k_hw *ah, u8 ee_mode, bool enable)
void
ath5k_hw_set_antenna_switch(struct ath5k_hw *ah, u8 ee_mode)
void
ath5k_hw_set_antenna_mode(struct ath5k_hw *ah, u8 ant_mode)
static s16
ath5k_get_interpolated_value(s16 target, s16 x_left, s16 x_right,
s16 y_left, s16 y_right)
static s16
ath5k_get_linear_pcdac_min(const u8 *stepL, const u8 *stepR,
const s16 *pwrL, const s16 *pwrR)
static void
ath5k_create_power_curve(s16 pmin, s16 pmax,
const s16 *pwr, const u8 *vpd,
u8 num_points,
u8 *vpd_table, u8 type)
static void
ath5k_get_chan_pcal_surrounding_piers(struct ath5k_hw *ah,
struct ieee80211_channel *channel,
struct ath5k_chan_pcal_info **pcinfo_l,
struct ath5k_chan_pcal_info **pcinfo_r)
static void
ath5k_get_rate_pcal_data(struct ath5k_hw *ah,
struct ieee80211_channel *channel,
struct ath5k_rate_pcal_info *rates)
static void
ath5k_get_max_ctl_power(struct ath5k_hw *ah,
struct ieee80211_channel *channel)
static void
ath5k_fill_pwr_to_pcdac_table(struct ath5k_hw *ah, s16* table_min,
s16 *table_max)
static void
ath5k_combine_linear_pcdac_curves(struct ath5k_hw *ah, s16* table_min,
s16 *table_max, u8 pdcurves)
static void
ath5k_write_pcdac_table(struct ath5k_hw *ah)
static void
ath5k_combine_pwr_to_pdadc_curves(struct ath5k_hw *ah,
s16 *pwr_min, s16 *pwr_max, u8 pdcurves)
static void
ath5k_write_pwr_to_pdadc_table(struct ath5k_hw *ah, u8 ee_mode)
static int
ath5k_setup_channel_powertable(struct ath5k_hw *ah,
struct ieee80211_channel *channel,
u8 ee_mode, u8 type)
static void
ath5k_write_channel_powertable(struct ath5k_hw *ah, u8 ee_mode, u8 type)
static void
ath5k_setup_rate_powertable(struct ath5k_hw *ah, u16 max_pwr,
struct ath5k_rate_pcal_info *rate_info,
u8 ee_mode)
static int
ath5k_hw_txpower(struct ath5k_hw *ah, struct ieee80211_channel *channel,
u8 txpower)
int ath5k_hw_set_txpower_limit(struct ath5k_hw *ah, u8 txpower)
int ath5k_hw_phy_init(struct ath5k_hw *ah, struct ieee80211_channel *channel,
u8 mode, bool fast)
