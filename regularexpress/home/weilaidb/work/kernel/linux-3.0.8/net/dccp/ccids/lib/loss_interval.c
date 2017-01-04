static struct kmem_cache  *tfrc_lh_slab  __read_mostly;
static const int tfrc_lh_weights[NINTERVAL] = ;
static inline u8 LIH_INDEX(const u8 ctr)
static inline struct tfrc_loss_interval *tfrc_lh_peek(struct tfrc_loss_hist *lh)
static inline u32 tfrc_lh_get_interval(struct tfrc_loss_hist *lh, const u8 i)
static struct tfrc_loss_interval *tfrc_lh_demand_next(struct tfrc_loss_hist *lh)
void tfrc_lh_cleanup(struct tfrc_loss_hist *lh)
static void tfrc_lh_calc_i_mean(struct tfrc_loss_hist *lh)
u8 tfrc_lh_update_i_mean(struct tfrc_loss_hist *lh, struct sk_buff *skb)
static inline u8 tfrc_lh_is_new_loss(struct tfrc_loss_interval *cur,
struct tfrc_rx_hist_entry *new_loss)
int tfrc_lh_interval_add(struct tfrc_loss_hist *lh, struct tfrc_rx_hist *rh,
u32 (*calc_first_li)(struct sock *), struct sock *sk)
int __init tfrc_li_init(void)
void tfrc_li_exit(void)
