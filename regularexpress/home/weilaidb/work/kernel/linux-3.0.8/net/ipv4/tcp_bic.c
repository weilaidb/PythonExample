#define BICTCP_BETA_SCALE    1024
#define BICTCP_B		4
static int fast_convergence = 1;
static int max_increment = 16;
static int low_window = 14;
static int beta = 819;
static int initial_ssthresh;
static int smooth_part = 20;
module_param(fast_convergence, int, 0644);
MODULE_PARM_DESC(fast_convergence, "turn on/off fast convergence");
module_param(max_increment, int, 0644);
MODULE_PARM_DESC(max_increment, "Limit on increment allowed during binary search");
module_param(low_window, int, 0644);
MODULE_PARM_DESC(low_window, "lower bound on congestion window (for TCP friendliness)");
module_param(beta, int, 0644);
MODULE_PARM_DESC(beta, "beta for multiplicative increase");
module_param(initial_ssthresh, int, 0644);
MODULE_PARM_DESC(initial_ssthresh, "initial value of slow start threshold");
module_param(smooth_part, int, 0644);
MODULE_PARM_DESC(smooth_part, "log(B/(B*Smin))/log(B/(B-1))+B, # of RTT from Wmax-B to Wmax");
struct bictcp ;
static inline void bictcp_reset(struct bictcp *ca)
static void bictcp_init(struct sock *sk)
static inline void bictcp_update(struct bictcp *ca, u32 cwnd)
static void bictcp_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static u32 bictcp_recalc_ssthresh(struct sock *sk)
static u32 bictcp_undo_cwnd(struct sock *sk)
static void bictcp_state(struct sock *sk, u8 new_state)
static void bictcp_acked(struct sock *sk, u32 cnt, s32 rtt)
static struct tcp_congestion_ops bictcp __read_mostly = ;
static int __init bictcp_register(void)
static void __exit bictcp_unregister(void)
module_init(bictcp_register);
module_exit(bictcp_unregister);
MODULE_AUTHOR("Stephen Hemminger");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("BIC TCP");
