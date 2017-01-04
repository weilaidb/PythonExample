#define STA_INFO_H
enum ieee80211_sta_info_flags ;
#define STA_TID_NUM 16
#define ADDBA_RESP_INTERVAL HZ
#define HT_AGG_MAX_RETRIES		0x3
#define HT_AGG_STATE_DRV_READY		0
#define HT_AGG_STATE_RESPONSE_RECEIVED	1
#define HT_AGG_STATE_OPERATIONAL	2
#define HT_AGG_STATE_STOPPING		3
#define HT_AGG_STATE_WANT_START		4
#define HT_AGG_STATE_WANT_STOP		5
struct tid_ampdu_tx ;
struct tid_ampdu_rx ;
struct sta_ampdu_mlme ;
struct sta_info ;
static inline enum nl80211_plink_state sta_plink_state(struct sta_info *sta)
static inline void set_sta_flags(struct sta_info *sta, const u32 flags)
static inline void clear_sta_flags(struct sta_info *sta, const u32 flags)
static inline u32 test_sta_flags(struct sta_info *sta, const u32 flags)
static inline u32 test_and_clear_sta_flags(struct sta_info *sta,
const u32 flags)
static inline u32 get_sta_flags(struct sta_info *sta)
void ieee80211_assign_tid_tx(struct sta_info *sta, int tid,
struct tid_ampdu_tx *tid_tx);
static inline struct tid_ampdu_tx *
rcu_dereference_protected_tid_tx(struct sta_info *sta, int tid)
#define STA_HASH_SIZE 256
#define STA_HASH(sta) (sta[5])
#define STA_MAX_TX_BUFFER 128
#define STA_TX_BUFFER_EXPIRE (10 * HZ)
#define STA_INFO_CLEANUP_INTERVAL (10 * HZ)
struct sta_info *sta_info_get(struct ieee80211_sub_if_data *sdata,
const u8 *addr);
struct sta_info *sta_info_get_bss(struct ieee80211_sub_if_data *sdata,
const u8 *addr);
static inline
void for_each_sta_info_type_check(struct ieee80211_local *local,
const u8 *addr,
struct sta_info *sta,
struct sta_info *nxt)
#define for_each_sta_info(local, _addr, _sta, nxt) 			\
for (					\
_sta = rcu_dereference(local->sta_hash[STA_HASH(_addr)]),\
nxt = _sta ? rcu_dereference(_sta->hnext) : NULL;	\						\
for_each_sta_info_type_check(local, (_addr), _sta, nxt),\				\
_sta;							\					\
_sta = nxt,						\
nxt = _sta ? rcu_dereference(_sta->hnext) : NULL	\
)								\		\
if (memcmp(_sta->sta.addr, (_addr), ETH_ALEN) == 0)
struct sta_info *sta_info_get_by_idx(struct ieee80211_sub_if_data *sdata,
int idx);
struct sta_info *sta_info_alloc(struct ieee80211_sub_if_data *sdata,
u8 *addr, gfp_t gfp);
int sta_info_insert(struct sta_info *sta);
int sta_info_insert_rcu(struct sta_info *sta) __acquires(RCU);
int sta_info_insert_atomic(struct sta_info *sta);
int sta_info_destroy_addr(struct ieee80211_sub_if_data *sdata,
const u8 *addr);
int sta_info_destroy_addr_bss(struct ieee80211_sub_if_data *sdata,
const u8 *addr);
void sta_info_set_tim_bit(struct sta_info *sta);
void sta_info_clear_tim_bit(struct sta_info *sta);
void sta_info_init(struct ieee80211_local *local);
void sta_info_stop(struct ieee80211_local *local);
int sta_info_flush(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata);
void ieee80211_sta_expire(struct ieee80211_sub_if_data *sdata,
unsigned long exp_time);
void ieee80211_sta_ps_deliver_wakeup(struct sta_info *sta);
void ieee80211_sta_ps_deliver_poll_response(struct sta_info *sta);
