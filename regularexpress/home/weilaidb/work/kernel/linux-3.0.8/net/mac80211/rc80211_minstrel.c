#define SAMPLE_COLUMNS	10
#define SAMPLE_TBL(_mi, _idx, _col) \
_mi->sample_table[(_idx * SAMPLE_COLUMNS) + _col]
static inline int
rix_to_ndx(struct minstrel_sta_info *mi, int rix)
static void
minstrel_update_stats(struct minstrel_priv *mp, struct minstrel_sta_info *mi)
static void
minstrel_tx_status(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
struct sk_buff *skb)
static inline unsigned int
minstrel_get_retry_count(struct minstrel_rate *mr,
struct ieee80211_tx_info *info)
static int
minstrel_get_next_sample(struct minstrel_sta_info *mi)
static void
minstrel_get_rate(void *priv, struct ieee80211_sta *sta,
void *priv_sta, struct ieee80211_tx_rate_control *txrc)
static void
calc_rate_durations(struct minstrel_sta_info *mi, struct ieee80211_local *local,
struct minstrel_rate *d, struct ieee80211_rate *rate)
static void
init_sample_table(struct minstrel_sta_info *mi)
static void
minstrel_rate_init(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta)
static void *
minstrel_alloc_sta(void *priv, struct ieee80211_sta *sta, gfp_t gfp)
static void
minstrel_free_sta(void *priv, struct ieee80211_sta *sta, void *priv_sta)
static void *
minstrel_alloc(struct ieee80211_hw *hw, struct dentry *debugfsdir)
static void
minstrel_free(void *priv)
struct rate_control_ops mac80211_minstrel = ;
int __init
rc80211_minstrel_init(void)
void
rc80211_minstrel_exit(void)
