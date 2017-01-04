static struct kmem_cache *tfrc_tx_hist_slab;
int __init tfrc_tx_packet_history_init(void)
void tfrc_tx_packet_history_exit(void)
int tfrc_tx_hist_add(struct tfrc_tx_hist_entry **headp, u64 seqno)
void tfrc_tx_hist_purge(struct tfrc_tx_hist_entry **headp)
static struct kmem_cache *tfrc_rx_hist_slab;
int __init tfrc_rx_packet_history_init(void)
void tfrc_rx_packet_history_exit(void)
static inline void tfrc_rx_hist_entry_from_skb(struct tfrc_rx_hist_entry *entry,
const struct sk_buff *skb,
const u64 ndp)
void tfrc_rx_hist_add_packet(struct tfrc_rx_hist *h,
const struct sk_buff *skb,
const u64 ndp)
int tfrc_rx_hist_duplicate(struct tfrc_rx_hist *h, struct sk_buff *skb)
static void tfrc_rx_hist_swap(struct tfrc_rx_hist *h, const u8 a, const u8 b)
static void __do_track_loss(struct tfrc_rx_hist *h, struct sk_buff *skb, u64 n1)
static void __one_after_loss(struct tfrc_rx_hist *h, struct sk_buff *skb, u32 n2)
static int __two_after_loss(struct tfrc_rx_hist *h, struct sk_buff *skb, u32 n3)
static void __three_after_loss(struct tfrc_rx_hist *h)
int tfrc_rx_handle_loss(struct tfrc_rx_hist *h,
struct tfrc_loss_hist *lh,
struct sk_buff *skb, const u64 ndp,
u32 (*calc_first_li)(struct sock *), struct sock *sk)
int tfrc_rx_hist_alloc(struct tfrc_rx_hist *h)
void tfrc_rx_hist_purge(struct tfrc_rx_hist *h)
static inline struct tfrc_rx_hist_entry *
tfrc_rx_hist_rtt_last_s(const struct tfrc_rx_hist *h)
static inline struct tfrc_rx_hist_entry *
tfrc_rx_hist_rtt_prev_s(const struct tfrc_rx_hist *h)
u32 tfrc_rx_hist_sample_rtt(struct tfrc_rx_hist *h, const struct sk_buff *skb)
