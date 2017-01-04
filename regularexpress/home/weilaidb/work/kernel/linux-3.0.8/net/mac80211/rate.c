struct rate_control_alg ;
static LIST_HEAD(rate_ctrl_algs);
static DEFINE_MUTEX(rate_ctrl_mutex);
static char *ieee80211_default_rc_algo = CONFIG_MAC80211_RC_DEFAULT;
module_param(ieee80211_default_rc_algo, charp, 0644);
MODULE_PARM_DESC(ieee80211_default_rc_algo,
"Default rate control algorithm for mac80211 to use");
int ieee80211_rate_control_register(struct rate_control_ops *ops)
EXPORT_SYMBOL(ieee80211_rate_control_register);
void ieee80211_rate_control_unregister(struct rate_control_ops *ops)
EXPORT_SYMBOL(ieee80211_rate_control_unregister);
static struct rate_control_ops *
ieee80211_try_rate_control_ops_get(const char *name)
static struct rate_control_ops *
ieee80211_rate_control_ops_get(const char *name)
static void ieee80211_rate_control_ops_put(struct rate_control_ops *ops)
static ssize_t rcname_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations rcname_ops = ;
static struct rate_control_ref *rate_control_alloc(const char *name,
struct ieee80211_local *local)
static void rate_control_release(struct kref *kref)
static bool rc_no_data_or_no_ack(struct ieee80211_tx_rate_control *txrc)
static void rc_send_low_broadcast(s8 *idx, u32 basic_rates,
struct ieee80211_supported_band *sband)
bool rate_control_send_low(struct ieee80211_sta *sta,
void *priv_sta,
struct ieee80211_tx_rate_control *txrc)
EXPORT_SYMBOL(rate_control_send_low);
static void rate_idx_match_mask(struct ieee80211_tx_rate *rate,
int n_bitrates, u32 mask)
void rate_control_get_rate(struct ieee80211_sub_if_data *sdata,
struct sta_info *sta,
struct ieee80211_tx_rate_control *txrc)
struct rate_control_ref *rate_control_get(struct rate_control_ref *ref)
void rate_control_put(struct rate_control_ref *ref)
int ieee80211_init_rate_ctrl_alg(struct ieee80211_local *local,
const char *name)
void rate_control_deinitialize(struct ieee80211_local *local)
