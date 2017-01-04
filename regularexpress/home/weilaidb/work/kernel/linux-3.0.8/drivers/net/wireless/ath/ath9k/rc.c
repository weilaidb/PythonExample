static const struct ath_rate_table ar5416_11na_ratetable = ;
static const struct ath_rate_table ar5416_11ng_ratetable = ;
static const struct ath_rate_table ar5416_11a_ratetable = ;
static const struct ath_rate_table ar5416_11g_ratetable = ;
static int ath_rc_get_rateindex(const struct ath_rate_table *rate_table,
struct ieee80211_tx_rate *rate);
static void ath_rc_sort_validrates(const struct ath_rate_table *rate_table,
struct ath_rate_priv *ath_rc_priv)
static void ath_rc_init_valid_rate_idx(struct ath_rate_priv *ath_rc_priv)
static inline void ath_rc_set_valid_rate_idx(struct ath_rate_priv *ath_rc_priv,
u8 index, int valid_tx_rate)
static inline
int ath_rc_get_nextvalid_txrate(const struct ath_rate_table *rate_table,
struct ath_rate_priv *ath_rc_priv,
u8 cur_valid_txrate,
u8 *next_idx)
static int ath_rc_valid_phyrate(u32 phy, u32 capflag, int ignore_cw)
static inline int
ath_rc_get_lower_rix(const struct ath_rate_table *rate_table,
struct ath_rate_priv *ath_rc_priv,
u8 cur_valid_txrate, u8 *next_idx)
static u8 ath_rc_init_validrates(struct ath_rate_priv *ath_rc_priv,
const struct ath_rate_table *rate_table,
u32 capflag)
static u8 ath_rc_setvalid_rates(struct ath_rate_priv *ath_rc_priv,
const struct ath_rate_table *rate_table,
struct ath_rateset *rateset,
u32 capflag)
static u8 ath_rc_setvalid_htrates(struct ath_rate_priv *ath_rc_priv,
const struct ath_rate_table *rate_table,
u8 *mcs_set, u32 capflag)
static u8 ath_rc_get_highest_rix(struct ath_softc *sc,
struct ath_rate_priv *ath_rc_priv,
const struct ath_rate_table *rate_table,
int *is_probing)
static void ath_rc_rate_set_series(const struct ath_rate_table *rate_table,
struct ieee80211_tx_rate *rate,
struct ieee80211_tx_rate_control *txrc,
u8 tries, u8 rix, int rtsctsenable)
static void ath_rc_rate_set_rtscts(struct ath_softc *sc,
const struct ath_rate_table *rate_table,
struct ieee80211_tx_info *tx_info)
static void ath_get_rate(void *priv, struct ieee80211_sta *sta, void *priv_sta,
struct ieee80211_tx_rate_control *txrc)
static void ath_rc_update_per(struct ath_softc *sc,
const struct ath_rate_table *rate_table,
struct ath_rate_priv *ath_rc_priv,
struct ieee80211_tx_info *tx_info,
int tx_rate, int xretries, int retries,
u32 now_msec)
static void ath_debug_stat_retries(struct ath_rate_priv *rc, int rix,
int xretries, int retries, u8 per)
static void ath_rc_update_ht(struct ath_softc *sc,
struct ath_rate_priv *ath_rc_priv,
struct ieee80211_tx_info *tx_info,
int tx_rate, int xretries, int retries)
static int ath_rc_get_rateindex(const struct ath_rate_table *rate_table,
struct ieee80211_tx_rate *rate)
static void ath_rc_tx_status(struct ath_softc *sc,
struct ath_rate_priv *ath_rc_priv,
struct ieee80211_tx_info *tx_info,
int final_ts_idx, int xretries, int long_retry)
static const
struct ath_rate_table *ath_choose_rate_table(struct ath_softc *sc,
enum ieee80211_band band,
bool is_ht)
static void ath_rc_init(struct ath_softc *sc,
struct ath_rate_priv *ath_rc_priv,
struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta,
const struct ath_rate_table *rate_table)
static u8 ath_rc_build_ht_caps(struct ath_softc *sc, struct ieee80211_sta *sta,
bool is_cw40, bool is_sgi)
static bool ath_tx_aggr_check(struct ath_softc *sc, struct ath_node *an,
u8 tidno)
static void ath_debug_stat_rc(struct ath_rate_priv *rc, int final_rate)
static void ath_tx_status(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
struct sk_buff *skb)
static void ath_rate_init(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta)
static void ath_rate_update(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
u32 changed, enum nl80211_channel_type oper_chan_type)
static int ath9k_debugfs_open(struct inode *inode, struct file *file)
static ssize_t read_file_rcstat(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_rcstat = ;
static void ath_rate_add_sta_debugfs(void *priv, void *priv_sta,
struct dentry *dir)
static void *ath_rate_alloc(struct ieee80211_hw *hw, struct dentry *debugfsdir)
static void ath_rate_free(void *priv)
static void *ath_rate_alloc_sta(void *priv, struct ieee80211_sta *sta, gfp_t gfp)
static void ath_rate_free_sta(void *priv, struct ieee80211_sta *sta,
void *priv_sta)
static struct rate_control_ops ath_rate_ops = ;
int ath_rate_control_register(void)
void ath_rate_control_unregister(void)
