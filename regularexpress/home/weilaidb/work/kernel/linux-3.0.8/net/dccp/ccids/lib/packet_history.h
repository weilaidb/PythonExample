#define _DCCP_PKT_HIST_
struct tfrc_tx_hist_entry ;
static inline struct tfrc_tx_hist_entry *
tfrc_tx_hist_find_entry(struct tfrc_tx_hist_entry *head, u64 seqno)
extern int  tfrc_tx_hist_add(struct tfrc_tx_hist_entry **headp, u64 seqno);
extern void tfrc_tx_hist_purge(struct tfrc_tx_hist_entry **headp);
#define SUB16(a, b) (((a) + 16 - (b)) & 0xF)
#define TFRC_NDUPACK 3
struct tfrc_rx_hist_entry ;
struct tfrc_rx_hist ;
static inline u8 tfrc_rx_hist_index(const struct tfrc_rx_hist *h, const u8 n)
static inline struct tfrc_rx_hist_entry *
tfrc_rx_hist_last_rcv(const struct tfrc_rx_hist *h)
static inline struct tfrc_rx_hist_entry *
tfrc_rx_hist_entry(const struct tfrc_rx_hist *h, const u8 n)
static inline struct tfrc_rx_hist_entry *
tfrc_rx_hist_loss_prev(const struct tfrc_rx_hist *h)
static inline bool tfrc_rx_hist_loss_pending(const struct tfrc_rx_hist *h)
extern void tfrc_rx_hist_add_packet(struct tfrc_rx_hist *h,
const struct sk_buff *skb, const u64 ndp);
extern int tfrc_rx_hist_duplicate(struct tfrc_rx_hist *h, struct sk_buff *skb);
struct tfrc_loss_hist;
extern int  tfrc_rx_handle_loss(struct tfrc_rx_hist *h,
struct tfrc_loss_hist *lh,
struct sk_buff *skb, const u64 ndp,
u32 (*first_li)(struct sock *sk),
struct sock *sk);
extern u32 tfrc_rx_hist_sample_rtt(struct tfrc_rx_hist *h,
const struct sk_buff *skb);
extern int tfrc_rx_hist_alloc(struct tfrc_rx_hist *h);
extern void tfrc_rx_hist_purge(struct tfrc_rx_hist *h);
