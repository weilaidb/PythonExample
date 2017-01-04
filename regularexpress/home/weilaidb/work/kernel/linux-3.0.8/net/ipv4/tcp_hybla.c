struct hybla ;
static int rtt0 = 25;
module_param(rtt0, int, 0644);
MODULE_PARM_DESC(rtt0, "reference rout trip time (ms)");
static inline void hybla_recalc_param (struct sock *sk)
static void hybla_init(struct sock *sk)
static void hybla_state(struct sock *sk, u8 ca_state)
static inline u32 hybla_fraction(u32 odds)
static void hybla_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static struct tcp_congestion_ops tcp_hybla __read_mostly = ;
static int __init hybla_register(void)
static void __exit hybla_unregister(void)
module_init(hybla_register);
module_exit(hybla_unregister);
MODULE_AUTHOR("Daniele Lacamera");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TCP Hybla");
