#define MWIFIEX_TX_PWR_DEFAULT     20
#define MWIFIEX_TX_PWR_US_DEFAULT      20
#define MWIFIEX_TX_PWR_JP_DEFAULT      16
#define MWIFIEX_TX_PWR_FR_100MW        20
#define MWIFIEX_TX_PWR_FR_10MW         10
#define MWIFIEX_TX_PWR_EMEA_DEFAULT    20
static u8 adhoc_rates_b[B_SUPPORTED_RATES] = ;
static u8 adhoc_rates_g[G_SUPPORTED_RATES] = ;
static u8 adhoc_rates_bg[BG_SUPPORTED_RATES] = ;
static u8 adhoc_rates_a[A_SUPPORTED_RATES] = ;
u8 supported_rates_a[A_SUPPORTED_RATES] = ;
static u16 mwifiex_data_rates[MWIFIEX_SUPPORTED_RATES_EXT] = ;
u8 supported_rates_b[B_SUPPORTED_RATES] = ;
u8 supported_rates_g[G_SUPPORTED_RATES] = ;
u8 supported_rates_bg[BG_SUPPORTED_RATES] = ;
u16 region_code_index[MWIFIEX_MAX_REGION_CODE] = ;
u8 supported_rates_n[N_SUPPORTED_RATES] = ;
u32 mwifiex_index_to_data_rate(u8 index, u8 ht_info)
u8 mwifiex_data_rate_to_index(u32 rate)
u32 mwifiex_get_active_data_rates(struct mwifiex_private *priv, u8 *rates)
struct mwifiex_chan_freq_power *
mwifiex_get_cfp_by_band_and_channel_from_cfg80211(struct mwifiex_private
*priv, u8 band, u16 channel)
struct mwifiex_chan_freq_power *
mwifiex_get_cfp_by_band_and_freq_from_cfg80211(struct mwifiex_private *priv,
u8 band, u32 freq)
u8
mwifiex_is_rate_auto(struct mwifiex_private *priv)
int mwifiex_get_rate_index(u16 *rate_bitmap, int size)
u32 mwifiex_get_supported_rates(struct mwifiex_private *priv, u8 *rates)
