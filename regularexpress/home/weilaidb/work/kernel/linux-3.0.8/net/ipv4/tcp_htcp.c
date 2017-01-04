#define ALPHA_BASE	(1<<7)
#define BETA_MIN	(1<<6)
#define BETA_MAX	102
static int use_rtt_scaling __read_mostly = 1;
module_param(use_rtt_scaling, int, 0644);
MODULE_PARM_DESC(use_rtt_scaling, "turn on/off RTT scaling");
static int use_bandwidth_switch __read_mostly = 1;
module_param(use_bandwidth_switch, int, 0644);
MODULE_PARM_DESC(use_bandwidth_switch, "turn on/off bandwidth switcher");
struct htcp ;
static inline u32 htcp_cong_time(const struct htcp *ca)
static inline u32 htcp_ccount(const struct htcp *ca)
static inline void htcp_reset(struct htcp *ca)
static u32 htcp_cwnd_undo(struct sock *sk)
static inline void measure_rtt(struct sock *sk, u32 srtt)
static void measure_achieved_throughput(struct sock *sk, u32 pkts_acked, s32 rtt)
static inline void htcp_beta_update(struct htcp *ca, u32 minRTT, u32 maxRTT)
static inline void htcp_alpha_update(struct htcp *ca)
static void htcp_param_update(struct sock *sk)
static u32 htcp_recalc_ssthresh(struct sock *sk)
static void htcp_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static void htcp_init(struct sock *sk)
static void htcp_state(struct sock *sk, u8 new_state)
static struct tcp_congestion_ops htcp __read_mostly = ;
static int __init htcp_register(void)
static void __exit htcp_unregister(void)
module_init(htcp_register);
module_exit(htcp_unregister);
MODULE_AUTHOR("Baruch Even");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("H-TCP");
