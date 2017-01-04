#define TCP_YEAH_ALPHA       80
#define TCP_YEAH_GAMMA        1
#define TCP_YEAH_DELTA        3
#define TCP_YEAH_EPSILON      1
#define TCP_YEAH_PHY          8
#define TCP_YEAH_RHO         16
#define TCP_YEAH_ZETA        50
#define TCP_SCALABLE_AI_CNT	 100U
struct yeah ;
static void tcp_yeah_init(struct sock *sk)
static void tcp_yeah_pkts_acked(struct sock *sk, u32 pkts_acked, s32 rtt_us)
static void tcp_yeah_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static u32 tcp_yeah_ssthresh(struct sock *sk)
static struct tcp_congestion_ops tcp_yeah __read_mostly = ;
static int __init tcp_yeah_register(void)
static void __exit tcp_yeah_unregister(void)
module_init(tcp_yeah_register);
module_exit(tcp_yeah_unregister);
MODULE_AUTHOR("Angelo P. Castellani");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("YeAH TCP");
