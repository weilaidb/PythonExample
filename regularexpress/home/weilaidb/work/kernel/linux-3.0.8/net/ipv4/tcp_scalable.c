#define TCP_SCALABLE_AI_CNT	50U
#define TCP_SCALABLE_MD_SCALE	3
static void tcp_scalable_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static u32 tcp_scalable_ssthresh(struct sock *sk)
static struct tcp_congestion_ops tcp_scalable __read_mostly = ;
static int __init tcp_scalable_register(void)
static void __exit tcp_scalable_unregister(void)
module_init(tcp_scalable_register);
module_exit(tcp_scalable_unregister);
MODULE_AUTHOR("John Heffner");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Scalable TCP");
