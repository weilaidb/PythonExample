#define AVG_PKT_SIZE	1200
#define SAMPLE_COLUMNS	10
#define EWMA_LEVEL		75
#define MCS_NBITS (AVG_PKT_SIZE << 3)
#define MCS_NSYMS(bps) ((MCS_NBITS + (bps) - 1) / (bps))
#define MCS_SYMBOL_TIME(sgi, syms)					\
(sgi ?								\
((syms) * 18 + 4) / 5 :		\
(syms) << 2		\
)
#define MCS_DURATION(streams, sgi, bps) MCS_SYMBOL_TIME(sgi, MCS_NSYMS((streams) * (bps)))
#define MCS_GROUP(_streams, _sgi, _ht40)
const struct mcs_group minstrel_mcs_groups[] = ;
static u8 sample_table[SAMPLE_COLUMNS][MCS_GROUP_RATES];
static int
minstrel_ewma(int old, int new, int weight)
static int
minstrel_ht_get_group_idx(struct ieee80211_tx_rate *rate)
static inline struct minstrel_rate_stats *
minstrel_get_ratestats(struct minstrel_ht_sta *mi, int index)
static void
minstrel_calc_rate_ewma(struct minstrel_priv *mp, struct minstrel_rate_stats *mr)
static void
minstrel_ht_calc_tp(struct minstrel_priv *mp, struct minstrel_ht_sta *mi,
int group, int rate)
static void
minstrel_ht_update_stats(struct minstrel_priv *mp, struct minstrel_ht_sta *mi)
static bool
minstrel_ht_txstat_valid(struct ieee80211_tx_rate *rate)
static void
minstrel_next_sample_idx(struct minstrel_ht_sta *mi)
static void
minstrel_downgrade_rate(struct minstrel_ht_sta *mi, unsigned int *idx,
bool primary)
static void
minstrel_aggr_check(struct minstrel_priv *mp, struct ieee80211_sta *pubsta, struct sk_buff *skb)
static void
minstrel_ht_tx_status(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
struct sk_buff *skb)
static void
minstrel_calc_retransmit(struct minstrel_priv *mp, struct minstrel_ht_sta *mi,
int index)
static void
minstrel_ht_set_rate(struct minstrel_priv *mp, struct minstrel_ht_sta *mi,
struct ieee80211_tx_rate *rate, int index,
struct ieee80211_tx_rate_control *txrc,
bool sample, bool rtscts)
static inline int
minstrel_get_duration(int index)
static int
minstrel_get_sample_rate(struct minstrel_priv *mp, struct minstrel_ht_sta *mi)
static void
minstrel_ht_get_rate(void *priv, struct ieee80211_sta *sta, void *priv_sta,
struct ieee80211_tx_rate_control *txrc)
static void
minstrel_ht_update_caps(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
enum nl80211_channel_type oper_chan_type)
static void
minstrel_ht_rate_init(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta)
static void
minstrel_ht_rate_update(void *priv, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
u32 changed, enum nl80211_channel_type oper_chan_type)
static void *
minstrel_ht_alloc_sta(void *priv, struct ieee80211_sta *sta, gfp_t gfp)
static void
minstrel_ht_free_sta(void *priv, struct ieee80211_sta *sta, void *priv_sta)
static void *
minstrel_ht_alloc(struct ieee80211_hw *hw, struct dentry *debugfsdir)
static void
minstrel_ht_free(void *priv)
static struct rate_control_ops mac80211_minstrel_ht = ;
static void
init_sample_table(void)
int __init
rc80211_minstrel_ht_init(void)
void
rc80211_minstrel_ht_exit(void)
