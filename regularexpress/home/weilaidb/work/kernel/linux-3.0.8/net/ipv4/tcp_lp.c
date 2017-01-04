#define LP_RESOL       1000
enum tcp_lp_state ;
struct lp ;
static void tcp_lp_init(struct sock *sk)
static void tcp_lp_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static u32 tcp_lp_remote_hz_estimator(struct sock *sk)
static u32 tcp_lp_owd_calculator(struct sock *sk)
static void tcp_lp_rtt_sample(struct sock *sk, u32 rtt)
static void tcp_lp_pkts_acked(struct sock *sk, u32 num_acked, s32 rtt_us)
static struct tcp_congestion_ops tcp_lp __read_mostly = ;
static int __init tcp_lp_register(void)
static void __exit tcp_lp_unregister(void)
module_init(tcp_lp_register);
module_exit(tcp_lp_unregister);
MODULE_AUTHOR("Wong Hoi Sing Edison, Hung Hing Lun Mike");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TCP Low Priority");
