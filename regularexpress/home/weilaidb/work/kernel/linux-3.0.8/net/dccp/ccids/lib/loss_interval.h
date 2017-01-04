#define _DCCP_LI_HIST_
#define NINTERVAL	8
#define LIH_SIZE	(NINTERVAL + 1)
struct tfrc_loss_interval ;
struct tfrc_loss_hist ;
static inline void tfrc_lh_init(struct tfrc_loss_hist *lh)
static inline u8 tfrc_lh_is_initialised(struct tfrc_loss_hist *lh)
static inline u8 tfrc_lh_length(struct tfrc_loss_hist *lh)
struct tfrc_rx_hist;
extern int  tfrc_lh_interval_add(struct tfrc_loss_hist *, struct tfrc_rx_hist *,
u32 (*first_li)(struct sock *), struct sock *);
extern u8   tfrc_lh_update_i_mean(struct tfrc_loss_hist *lh, struct sk_buff *);
extern void tfrc_lh_cleanup(struct tfrc_loss_hist *lh);
