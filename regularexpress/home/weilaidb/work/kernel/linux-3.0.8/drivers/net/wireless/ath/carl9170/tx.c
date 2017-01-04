static inline unsigned int __carl9170_get_queue(struct ar9170 *ar,
unsigned int queue)
static inline unsigned int carl9170_get_queue(struct ar9170 *ar,
struct sk_buff *skb)
static bool is_mem_full(struct ar9170 *ar)
static void carl9170_tx_accounting(struct ar9170 *ar, struct sk_buff *skb)
static struct ieee80211_sta *__carl9170_get_tx_sta(struct ar9170 *ar,
struct sk_buff *skb)
static void carl9170_tx_ps_unblock(struct ar9170 *ar, struct sk_buff *skb)
static void carl9170_tx_accounting_free(struct ar9170 *ar, struct sk_buff *skb)
static int carl9170_alloc_dev_space(struct ar9170 *ar, struct sk_buff *skb)
static void carl9170_release_dev_space(struct ar9170 *ar, struct sk_buff *skb)
static void carl9170_tx_release(struct kref *ref)
void carl9170_tx_get_skb(struct sk_buff *skb)
int carl9170_tx_put_skb(struct sk_buff *skb)
static void carl9170_tx_shift_bm(struct ar9170 *ar,
struct carl9170_sta_tid *tid_info, u16 seq)
static void carl9170_tx_status_process_ampdu(struct ar9170 *ar,
struct sk_buff *skb, struct ieee80211_tx_info *txinfo)
void carl9170_tx_status(struct ar9170 *ar, struct sk_buff *skb,
const bool success)
void carl9170_tx_callback(struct ar9170 *ar, struct sk_buff *skb)
static struct sk_buff *carl9170_get_queued_skb(struct ar9170 *ar, u8 cookie,
struct sk_buff_head *queue)
static void carl9170_tx_fill_rateinfo(struct ar9170 *ar, unsigned int rix,
unsigned int tries, struct ieee80211_tx_info *txinfo)
static void carl9170_check_queue_stop_timeout(struct ar9170 *ar)
static void carl9170_tx_ampdu_timeout(struct ar9170 *ar)
void carl9170_tx_janitor(struct work_struct *work)
static void __carl9170_tx_process_status(struct ar9170 *ar,
const uint8_t cookie, const uint8_t info)
void carl9170_tx_process_status(struct ar9170 *ar,
const struct carl9170_rsp *cmd)
static __le32 carl9170_tx_physet(struct ar9170 *ar,
struct ieee80211_tx_info *info, struct ieee80211_tx_rate *txrate)
static bool carl9170_tx_rts_check(struct ar9170 *ar,
struct ieee80211_tx_rate *rate,
bool ampdu, bool multi)
static bool carl9170_tx_cts_check(struct ar9170 *ar,
struct ieee80211_tx_rate *rate)
static int carl9170_tx_prepare(struct ar9170 *ar, struct sk_buff *skb)
static void carl9170_set_immba(struct ar9170 *ar, struct sk_buff *skb)
static void carl9170_set_ampdu_params(struct ar9170 *ar, struct sk_buff *skb)
static bool carl9170_tx_rate_check(struct ar9170 *ar, struct sk_buff *_dest,
struct sk_buff *_src)
static void carl9170_tx_ampdu(struct ar9170 *ar)
static struct sk_buff *carl9170_tx_pick_skb(struct ar9170 *ar,
struct sk_buff_head *queue)
void carl9170_tx_drop(struct ar9170 *ar, struct sk_buff *skb)
static bool carl9170_tx_ps_drop(struct ar9170 *ar, struct sk_buff *skb)
static void carl9170_tx(struct ar9170 *ar)
static bool carl9170_tx_ampdu_queue(struct ar9170 *ar,
struct ieee80211_sta *sta, struct sk_buff *skb)
void carl9170_op_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
void carl9170_tx_scheduler(struct ar9170 *ar)
