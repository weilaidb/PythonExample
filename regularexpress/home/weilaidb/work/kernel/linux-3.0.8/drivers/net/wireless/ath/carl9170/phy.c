static int carl9170_init_power_cal(struct ar9170 *ar)
struct carl9170_phy_init ;
static struct carl9170_phy_init ar5416_phy_init[] = ;
static u32 carl9170_def_val(u32 reg, bool is_2ghz, bool is_40mhz)
static int carl9170_init_phy_from_eeprom(struct ar9170 *ar,
bool is_2ghz, bool is_40mhz)
static int carl9170_init_phy(struct ar9170 *ar, enum ieee80211_band band)
struct carl9170_rf_initvals ;
static struct carl9170_rf_initvals carl9170_rf_initval[] = ;
static int carl9170_init_rf_banks_0_7(struct ar9170 *ar, bool band5ghz)
struct carl9170_phy_freq_params ;
enum carl9170_bw ;
struct carl9170_phy_freq_entry ;
static const struct carl9170_phy_freq_entry carl9170_phy_freq_params[] = ;
static int carl9170_init_rf_bank4_pwr(struct ar9170 *ar, bool band5ghz,
u32 freq, enum carl9170_bw bw)
static const struct carl9170_phy_freq_params *
carl9170_get_hw_dyn_params(struct ieee80211_channel *channel,
enum carl9170_bw bw)
static int carl9170_find_freq_idx(int nfreqs, u8 *freqs, u8 f)
static s32 carl9170_interpolate_s32(s32 x, s32 x1, s32 y1, s32 x2, s32 y2)
static u8 carl9170_interpolate_u8(u8 x, u8 x1, u8 y1, u8 x2, u8 y2)
static u8 carl9170_interpolate_val(u8 x, u8 *x_array, u8 *y_array)
static int carl9170_set_freq_cal_data(struct ar9170 *ar,
struct ieee80211_channel *channel)
static u8 carl9170_get_max_edge_power(struct ar9170 *ar,
u32 freq, struct ar9170_calctl_edges edges[])
static u8 carl9170_get_heavy_clip(struct ar9170 *ar, u32 freq,
enum carl9170_bw bw, struct ar9170_calctl_edges edges[])
static void carl9170_calc_ctl(struct ar9170 *ar, u32 freq, enum carl9170_bw bw)
static int carl9170_set_power_cal(struct ar9170 *ar, u32 freq,
enum carl9170_bw bw)
int carl9170_get_noisefloor(struct ar9170 *ar)
static enum carl9170_bw nl80211_to_carl(enum nl80211_channel_type type)
int carl9170_set_channel(struct ar9170 *ar, struct ieee80211_channel *channel,
enum nl80211_channel_type _bw,
enum carl9170_rf_init_mode rfi)
