#define RS_NAME "iwl-3945-rs"
static s32 iwl3945_expected_tpt_g[IWL_RATE_COUNT_3945] = ;
static s32 iwl3945_expected_tpt_g_prot[IWL_RATE_COUNT_3945] = ;
static s32 iwl3945_expected_tpt_a[IWL_RATE_COUNT_3945] = ;
static s32 iwl3945_expected_tpt_b[IWL_RATE_COUNT_3945] = ;
struct iwl3945_tpt_entry ;
static struct iwl3945_tpt_entry iwl3945_tpt_table_a[] = ;
static struct iwl3945_tpt_entry iwl3945_tpt_table_g[] = ;
#define IWL_RATE_MAX_WINDOW          62
#define IWL_RATE_FLUSH		(3*HZ)
#define IWL_RATE_WIN_FLUSH       (HZ/2)
#define IWL39_RATE_HIGH_TH          11520
#define IWL_SUCCESS_UP_TH	   8960
#define IWL_SUCCESS_DOWN_TH	  10880
#define IWL_RATE_MIN_FAILURE_TH       6
#define IWL_RATE_MIN_SUCCESS_TH       8
#define IWL_RATE_DECREASE_TH       1920
#define IWL_RATE_RETRY_TH	     15
static u8 iwl3945_get_rate_index_by_rssi(s32 rssi, enum ieee80211_band band)
static void iwl3945_clear_window(struct iwl3945_rate_scale_data *window)
static int iwl3945_rate_scale_flush_windows(struct iwl3945_rs_sta *rs_sta)
#define IWL_RATE_FLUSH_MAX              5000
#define IWL_RATE_FLUSH_MIN              50
#define IWL_AVERAGE_PACKETS             1500
static void iwl3945_bg_rate_scale_flush(unsigned long data)
static void iwl3945_collect_tx_data(struct iwl3945_rs_sta *rs_sta,
struct iwl3945_rate_scale_data *window,
int success, int retries, int index)
void iwl3945_rs_rate_init(struct iwl_priv *priv, struct ieee80211_sta *sta, u8 sta_id)
static void *iwl3945_rs_alloc(struct ieee80211_hw *hw, struct dentry *debugfsdir)
static void iwl3945_rs_free(void *priv)
static void *iwl3945_rs_alloc_sta(void *iwl_priv, struct ieee80211_sta *sta, gfp_t gfp)
static void iwl3945_rs_free_sta(void *iwl_priv, struct ieee80211_sta *sta,
void *priv_sta)
static void iwl3945_rs_tx_status(void *priv_rate, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
struct sk_buff *skb)
static u16 iwl3945_get_adjacent_rate(struct iwl3945_rs_sta *rs_sta,
u8 index, u16 rate_mask, enum ieee80211_band band)
static void iwl3945_rs_get_rate(void *priv_r, struct ieee80211_sta *sta,
void *priv_sta,	struct ieee80211_tx_rate_control *txrc)
static int iwl3945_open_file_generic(struct inode *inode, struct file *file)
static ssize_t iwl3945_sta_dbgfs_stats_table_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations rs_sta_dbgfs_stats_table_ops = ;
static void iwl3945_add_debugfs(void *priv, void *priv_sta,
struct dentry *dir)
static void iwl3945_remove_debugfs(void *priv, void *priv_sta)
static void iwl3945_rs_rate_init_stub(void *priv_r,
struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta)
static struct rate_control_ops rs_ops = ;
void iwl3945_rate_scale_init(struct ieee80211_hw *hw, s32 sta_id)
int iwl3945_rate_control_register(void)
void iwl3945_rate_control_unregister(void)
