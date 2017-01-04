static const int subtype_txq_to_hwq[] = ;
#define ATH9K_HTC_INIT_TXQ(subtype) do  while (0)
int get_hw_qnum(u16 queue, int *hwq_map)
void ath9k_htc_check_stop_queues(struct ath9k_htc_priv *priv)
void ath9k_htc_check_wake_queues(struct ath9k_htc_priv *priv)
int ath9k_htc_tx_get_slot(struct ath9k_htc_priv *priv)
void ath9k_htc_tx_clear_slot(struct ath9k_htc_priv *priv, int slot)
static inline enum htc_endpoint_id get_htc_epid(struct ath9k_htc_priv *priv,
u16 qnum)
static inline struct sk_buff_head*
get_htc_epid_queue(struct ath9k_htc_priv *priv, u8 epid)
static inline int strip_drv_header(struct ath9k_htc_priv *priv,
struct sk_buff *skb)
int ath_htc_txq_update(struct ath9k_htc_priv *priv, int qnum,
struct ath9k_tx_queue_info *qinfo)
static void ath9k_htc_tx_mgmt(struct ath9k_htc_priv *priv,
struct ath9k_htc_vif *avp,
struct sk_buff *skb,
u8 sta_idx, u8 vif_idx, u8 slot)
static void ath9k_htc_tx_data(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif,
struct sk_buff *skb,
u8 sta_idx, u8 vif_idx, u8 slot,
bool is_cab)
int ath9k_htc_tx_start(struct ath9k_htc_priv *priv,
struct sk_buff *skb,
u8 slot, bool is_cab)
static inline bool __ath9k_htc_check_tx_aggr(struct ath9k_htc_priv *priv,
struct ath9k_htc_sta *ista, u8 tid)
static void ath9k_htc_check_tx_aggr(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif,
struct sk_buff *skb)
static void ath9k_htc_tx_process(struct ath9k_htc_priv *priv,
struct sk_buff *skb,
struct __wmi_event_txstatus *txs)
static inline void ath9k_htc_tx_drainq(struct ath9k_htc_priv *priv,
struct sk_buff_head *queue)
void ath9k_htc_tx_drain(struct ath9k_htc_priv *priv)
void ath9k_tx_failed_tasklet(unsigned long data)
static inline bool check_cookie(struct ath9k_htc_priv *priv,
struct sk_buff *skb,
u8 cookie, u8 epid)
static struct sk_buff* ath9k_htc_tx_get_packet(struct ath9k_htc_priv *priv,
struct __wmi_event_txstatus *txs)
void ath9k_htc_txstatus(struct ath9k_htc_priv *priv, void *wmi_event)
void ath9k_htc_txep(void *drv_priv, struct sk_buff *skb,
enum htc_endpoint_id ep_id, bool txok)
static inline bool check_packet(struct ath9k_htc_priv *priv, struct sk_buff *skb)
static void ath9k_htc_tx_cleanup_queue(struct ath9k_htc_priv *priv,
struct sk_buff_head *epid_queue)
void ath9k_htc_tx_cleanup_timer(unsigned long data)
int ath9k_tx_init(struct ath9k_htc_priv *priv)
void ath9k_tx_cleanup(struct ath9k_htc_priv *priv)
bool ath9k_htc_txq_setup(struct ath9k_htc_priv *priv, int subtype)
int ath9k_htc_cabq_setup(struct ath9k_htc_priv *priv)
u32 ath9k_htc_calcrxfilter(struct ath9k_htc_priv *priv)
static void ath9k_htc_opmode_init(struct ath9k_htc_priv *priv)
void ath9k_host_rx_init(struct ath9k_htc_priv *priv)
static void ath9k_process_rate(struct ieee80211_hw *hw,
struct ieee80211_rx_status *rxs,
u8 rx_rate, u8 rs_flags)
static bool ath9k_rx_prepare(struct ath9k_htc_priv *priv,
struct ath9k_htc_rxbuf *rxbuf,
struct ieee80211_rx_status *rx_status)
void ath9k_rx_tasklet(unsigned long data)
void ath9k_htc_rxep(void *drv_priv, struct sk_buff *skb,
enum htc_endpoint_id ep_id)
void ath9k_rx_cleanup(struct ath9k_htc_priv *priv)
int ath9k_rx_init(struct ath9k_htc_priv *priv)
