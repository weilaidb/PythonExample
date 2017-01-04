static int sta_info_hash_del(struct ieee80211_local *local,
struct sta_info *sta)
struct sta_info *sta_info_get(struct ieee80211_sub_if_data *sdata,
const u8 *addr)
struct sta_info *sta_info_get_bss(struct ieee80211_sub_if_data *sdata,
const u8 *addr)
struct sta_info *sta_info_get_by_idx(struct ieee80211_sub_if_data *sdata,
int idx)
static void __sta_info_free(struct ieee80211_local *local,
struct sta_info *sta)
static void sta_info_hash_add(struct ieee80211_local *local,
struct sta_info *sta)
static void sta_unblock(struct work_struct *wk)
static int sta_prepare_rate_control(struct ieee80211_local *local,
struct sta_info *sta, gfp_t gfp)
struct sta_info *sta_info_alloc(struct ieee80211_sub_if_data *sdata,
u8 *addr, gfp_t gfp)
static int sta_info_finish_insert(struct sta_info *sta, bool async)
static void sta_info_finish_pending(struct ieee80211_local *local)
static void sta_info_finish_work(struct work_struct *work)
int sta_info_insert_rcu(struct sta_info *sta) __acquires(RCU)
int sta_info_insert(struct sta_info *sta)
static inline void __bss_tim_set(struct ieee80211_if_ap *bss, u16 aid)
static inline void __bss_tim_clear(struct ieee80211_if_ap *bss, u16 aid)
static void __sta_info_set_tim_bit(struct ieee80211_if_ap *bss,
struct sta_info *sta)
void sta_info_set_tim_bit(struct sta_info *sta)
static void __sta_info_clear_tim_bit(struct ieee80211_if_ap *bss,
struct sta_info *sta)
void sta_info_clear_tim_bit(struct sta_info *sta)
static int sta_info_buffer_expired(struct sta_info *sta,
struct sk_buff *skb)
static bool sta_info_cleanup_expire_buffered(struct ieee80211_local *local,
struct sta_info *sta)
static int __must_check __sta_info_destroy(struct sta_info *sta)
int sta_info_destroy_addr(struct ieee80211_sub_if_data *sdata, const u8 *addr)
int sta_info_destroy_addr_bss(struct ieee80211_sub_if_data *sdata,
const u8 *addr)
static void sta_info_cleanup(unsigned long data)
void sta_info_init(struct ieee80211_local *local)
void sta_info_stop(struct ieee80211_local *local)
int sta_info_flush(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata)
void ieee80211_sta_expire(struct ieee80211_sub_if_data *sdata,
unsigned long exp_time)
struct ieee80211_sta *ieee80211_find_sta_by_ifaddr(struct ieee80211_hw *hw,
const u8 *addr,
const u8 *localaddr)
EXPORT_SYMBOL_GPL(ieee80211_find_sta_by_ifaddr);
struct ieee80211_sta *ieee80211_find_sta(struct ieee80211_vif *vif,
const u8 *addr)
EXPORT_SYMBOL(ieee80211_find_sta);
static void clear_sta_ps_flags(void *_sta)
void ieee80211_sta_ps_deliver_wakeup(struct sta_info *sta)
void ieee80211_sta_ps_deliver_poll_response(struct sta_info *sta)
void ieee80211_sta_block_awake(struct ieee80211_hw *hw,
struct ieee80211_sta *pubsta, bool block)
EXPORT_SYMBOL(ieee80211_sta_block_awake);
void ieee80211_sta_set_tim(struct ieee80211_sta *pubsta)
EXPORT_SYMBOL(ieee80211_sta_set_tim);
