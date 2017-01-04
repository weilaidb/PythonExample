#define IEEE80211_RATE_H
struct rate_control_ref ;
void rate_control_get_rate(struct ieee80211_sub_if_data *sdata,
struct sta_info *sta,
struct ieee80211_tx_rate_control *txrc);
struct rate_control_ref *rate_control_get(struct rate_control_ref *ref);
void rate_control_put(struct rate_control_ref *ref);
static inline void rate_control_tx_status(struct ieee80211_local *local,
struct ieee80211_supported_band *sband,
struct sta_info *sta,
struct sk_buff *skb)
static inline void rate_control_rate_init(struct sta_info *sta)
static inline void rate_control_rate_update(struct ieee80211_local *local,
struct ieee80211_supported_band *sband,
struct sta_info *sta, u32 changed,
enum nl80211_channel_type oper_chan_type)
static inline void *rate_control_alloc_sta(struct rate_control_ref *ref,
struct ieee80211_sta *sta,
gfp_t gfp)
static inline void rate_control_free_sta(struct sta_info *sta)
static inline void rate_control_add_sta_debugfs(struct sta_info *sta)
static inline void rate_control_remove_sta_debugfs(struct sta_info *sta)
int ieee80211_init_rate_ctrl_alg(struct ieee80211_local *local,
const char *name);
void rate_control_deinitialize(struct ieee80211_local *local);
extern int rc80211_pid_init(void);
extern void rc80211_pid_exit(void);
static inline int rc80211_pid_init(void)
static inline void rc80211_pid_exit(void)
extern int rc80211_minstrel_init(void);
extern void rc80211_minstrel_exit(void);
static inline int rc80211_minstrel_init(void)
static inline void rc80211_minstrel_exit(void)
extern int rc80211_minstrel_ht_init(void);
extern void rc80211_minstrel_ht_exit(void);
static inline int rc80211_minstrel_ht_init(void)
static inline void rc80211_minstrel_ht_exit(void)
