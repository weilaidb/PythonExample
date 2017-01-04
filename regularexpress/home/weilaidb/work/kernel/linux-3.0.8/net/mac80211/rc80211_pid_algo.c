static void rate_control_pid_adjust_rate(struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta,
struct rc_pid_sta_info *spinfo, int adj,
struct rc_pid_rateinfo *rinfo)
static void rate_control_pid_normalize(struct rc_pid_info *pinfo, int l)
static void rate_control_pid_sample(struct rc_pid_info *pinfo,
struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta,
struct rc_pid_sta_info *spinfo)
static void rate_control_pid_tx_status(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
struct sk_buff *skb)
static void
rate_control_pid_get_rate(void *priv, struct ieee80211_sta *sta,
void *priv_sta,
struct ieee80211_tx_rate_control *txrc)
static void
rate_control_pid_rate_init(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta)
static void *rate_control_pid_alloc(struct ieee80211_hw *hw,
struct dentry *debugfsdir)
static void rate_control_pid_free(void *priv)
static void *rate_control_pid_alloc_sta(void *priv, struct ieee80211_sta *sta,
gfp_t gfp)
static void rate_control_pid_free_sta(void *priv, struct ieee80211_sta *sta,
void *priv_sta)
static struct rate_control_ops mac80211_rcpid = ;
int __init rc80211_pid_init(void)
void rc80211_pid_exit(void)
