struct westwood ;
#define TCP_WESTWOOD_RTT_MIN   (HZ/20)
#define TCP_WESTWOOD_INIT_RTT  (20*HZ)
static void tcp_westwood_init(struct sock *sk)
static inline u32 westwood_do_filter(u32 a, u32 b)
static void westwood_filter(struct westwood *w, u32 delta)
static void tcp_westwood_pkts_acked(struct sock *sk, u32 cnt, s32 rtt)
static void westwood_update_window(struct sock *sk)
static inline void update_rtt_min(struct westwood *w)
static inline void westwood_fast_bw(struct sock *sk)
static inline u32 westwood_acked_count(struct sock *sk)
static u32 tcp_westwood_bw_rttmin(const struct sock *sk)
static void tcp_westwood_event(struct sock *sk, enum tcp_ca_event event)
static void tcp_westwood_info(struct sock *sk, u32 ext,
struct sk_buff *skb)
static struct tcp_congestion_ops tcp_westwood __read_mostly = ;
static int __init tcp_westwood_register(void)
static void __exit tcp_westwood_unregister(void)
module_init(tcp_westwood_register);
module_exit(tcp_westwood_unregister);
MODULE_AUTHOR("Stephen Hemminger, Angelo Dell'Aera");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TCP Westwood+");
