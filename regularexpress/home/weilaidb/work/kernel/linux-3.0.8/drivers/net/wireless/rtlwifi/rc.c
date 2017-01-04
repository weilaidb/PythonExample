static u8 _rtl_rc_get_highest_rix(struct rtl_priv *rtlpriv,
struct ieee80211_sta *sta,
struct sk_buff *skb, bool not_data)
static void _rtl_rc_rate_set_series(struct rtl_priv *rtlpriv,
struct ieee80211_sta *sta,
struct ieee80211_tx_rate *rate,
struct ieee80211_tx_rate_control *txrc,
u8 tries, char rix, int rtsctsenable,
bool not_data)
static void rtl_get_rate(void *ppriv, struct ieee80211_sta *sta,
void *priv_sta, struct ieee80211_tx_rate_control *txrc)
static bool _rtl_tx_aggr_check(struct rtl_priv *rtlpriv,
struct rtl_sta_info *sta_entry, u16 tid)
static void rtl_tx_status(void *ppriv,
struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
struct sk_buff *skb)
static void rtl_rate_init(void *ppriv,
struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta)
static void rtl_rate_update(void *ppriv,
struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
u32 changed,
enum nl80211_channel_type oper_chan_type)
static void *rtl_rate_alloc(struct ieee80211_hw *hw,
struct dentry *debugfsdir)
static void rtl_rate_free(void *rtlpriv)
static void *rtl_rate_alloc_sta(void *ppriv,
struct ieee80211_sta *sta, gfp_t gfp)
static void rtl_rate_free_sta(void *rtlpriv,
struct ieee80211_sta *sta, void *priv_sta)
static struct rate_control_ops rtl_rate_ops = ;
int rtl_rate_control_register(void)
void rtl_rate_control_unregister(void)
