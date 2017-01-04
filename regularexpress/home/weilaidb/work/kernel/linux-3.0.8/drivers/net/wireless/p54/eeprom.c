static struct ieee80211_rate p54_bgrates[] = ;
static struct ieee80211_rate p54_arates[] = ;
static struct p54_rssi_db_entry p54_rssi_default = ;
#define CHAN_HAS_CAL		BIT(0)
#define CHAN_HAS_LIMIT		BIT(1)
#define CHAN_HAS_CURVE		BIT(2)
#define CHAN_HAS_ALL		(CHAN_HAS_CAL | CHAN_HAS_LIMIT | CHAN_HAS_CURVE)
struct p54_channel_entry ;
struct p54_channel_list ;
static int p54_get_band_from_freq(u16 freq)
static int same_band(u16 freq, u16 freq2)
static int p54_compare_channels(const void *_a,
const void *_b)
static int p54_compare_rssichan(const void *_a,
const void *_b)
static int p54_fill_band_bitrates(struct ieee80211_hw *dev,
struct ieee80211_supported_band *band_entry,
enum ieee80211_band band)
static int p54_generate_band(struct ieee80211_hw *dev,
struct p54_channel_list *list,
enum ieee80211_band band)
static void p54_update_channel_param(struct p54_channel_list *list,
u16 freq, u16 data)
static int p54_generate_channel_lists(struct ieee80211_hw *dev)
static int p54_convert_rev0(struct ieee80211_hw *dev,
struct pda_pa_curve_data *curve_data)
static int p54_convert_rev1(struct ieee80211_hw *dev,
struct pda_pa_curve_data *curve_data)
static const char *p54_rf_chips[] = ;
static int p54_parse_rssical(struct ieee80211_hw *dev,
u8 *data, int len, u16 type)
struct p54_rssi_db_entry *p54_rssi_find(struct p54_common *priv, const u16 freq)
static void p54_parse_default_country(struct ieee80211_hw *dev,
void *data, int len)
static int p54_convert_output_limits(struct ieee80211_hw *dev,
u8 *data, size_t len)
static struct p54_cal_database *p54_convert_db(struct pda_custom_wrapper *src,
size_t total_len)
int p54_parse_eeprom(struct ieee80211_hw *dev, void *eeprom, int len)
EXPORT_SYMBOL_GPL(p54_parse_eeprom);
int p54_read_eeprom(struct ieee80211_hw *dev)
EXPORT_SYMBOL_GPL(p54_read_eeprom);
