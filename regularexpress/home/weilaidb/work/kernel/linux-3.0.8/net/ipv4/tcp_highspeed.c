static const struct hstcp_aimd_val  hstcp_aimd_vals[] = ;
#define HSTCP_AIMD_MAX	ARRAY_SIZE(hstcp_aimd_vals)
struct hstcp ;
static void hstcp_init(struct sock *sk)
static void hstcp_cong_avoid(struct sock *sk, u32 adk, u32 in_flight)
static u32 hstcp_ssthresh(struct sock *sk)
static struct tcp_congestion_ops tcp_highspeed __read_mostly = ;
static int __init hstcp_register(void)
static void __exit hstcp_unregister(void)
module_init(hstcp_register);
module_exit(hstcp_unregister);
MODULE_AUTHOR("John Heffner");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("High Speed TCP");
