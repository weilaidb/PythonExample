static void p54_dump_tx_queue(struct p54_common *priv)
static int p54_assign_address(struct p54_common *priv, struct sk_buff *skb)
static void p54_tx_pending(struct p54_common *priv)
static void p54_wake_queues(struct p54_common *priv)
static int p54_tx_qos_accounting_alloc(struct p54_common *priv,
struct sk_buff *skb,
const u16 p54_queue)
static void p54_tx_qos_accounting_free(struct p54_common *priv,
struct sk_buff *skb)
void p54_free_skb(struct ieee80211_hw *dev, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(p54_free_skb);
static struct sk_buff *p54_find_and_unlink_skb(struct p54_common *priv,
const __le32 req_id)
void p54_tx(struct p54_common *priv, struct sk_buff *skb)
static int p54_rssi_to_dbm(struct p54_common *priv, int rssi)
static void p54_pspoll_workaround(struct p54_common *priv, struct sk_buff *skb)
static int p54_rx_data(struct p54_common *priv, struct sk_buff *skb)
static void p54_rx_frame_sent(struct p54_common *priv, struct sk_buff *skb)
static void p54_rx_eeprom_readback(struct p54_common *priv,
struct sk_buff *skb)
static void p54_rx_stats(struct p54_common *priv, struct sk_buff *skb)
static void p54_rx_trap(struct p54_common *priv, struct sk_buff *skb)
static int p54_rx_control(struct p54_common *priv, struct sk_buff *skb)
int p54_rx(struct ieee80211_hw *dev, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(p54_rx);
static void p54_tx_80211_header(struct p54_common *priv, struct sk_buff *skb,
struct ieee80211_tx_info *info, u8 *queue,
u32 *extra_len, u16 *flags, u16 *aid,
bool *burst_possible)
static u8 p54_convert_algo(u32 cipher)
void p54_tx_80211(struct ieee80211_hw *dev, struct sk_buff *skb)
