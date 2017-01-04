#define ALPHA_SHIFT	7
#define ALPHA_SCALE	(1u<<ALPHA_SHIFT)
#define ALPHA_MIN	((3*ALPHA_SCALE)/10)
#define ALPHA_MAX	(10*ALPHA_SCALE)
#define ALPHA_BASE	ALPHA_SCALE
#define U32_MAX		((u32)~0U)
#define RTT_MAX		(U32_MAX / ALPHA_MAX)
#define BETA_SHIFT	6
#define BETA_SCALE	(1u<<BETA_SHIFT)
#define BETA_MIN	(BETA_SCALE/8)
#define BETA_MAX	(BETA_SCALE/2)
#define BETA_BASE	BETA_MAX
static int win_thresh __read_mostly = 15;
module_param(win_thresh, int, 0);
MODULE_PARM_DESC(win_thresh, "Window threshold for starting adaptive sizing");
static int theta __read_mostly = 5;
module_param(theta, int, 0);
MODULE_PARM_DESC(theta, "# of fast RTT's before full growth");
struct illinois ;
static void rtt_reset(struct sock *sk)
static void tcp_illinois_init(struct sock *sk)
static void tcp_illinois_acked(struct sock *sk, u32 pkts_acked, s32 rtt)
static inline u32 max_delay(const struct illinois *ca)
static inline u32 avg_delay(const struct illinois *ca)
static u32 alpha(struct illinois *ca, u32 da, u32 dm)
static u32 beta(u32 da, u32 dm)
static void update_params(struct sock *sk)
static void tcp_illinois_state(struct sock *sk, u8 new_state)
static void tcp_illinois_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static u32 tcp_illinois_ssthresh(struct sock *sk)
static void tcp_illinois_info(struct sock *sk, u32 ext,
struct sk_buff *skb)
static struct tcp_congestion_ops tcp_illinois __read_mostly = ;
static int __init tcp_illinois_register(void)
static void __exit tcp_illinois_unregister(void)
module_init(tcp_illinois_register);
module_exit(tcp_illinois_unregister);
MODULE_AUTHOR("Stephen Hemminger, Shao Liu");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TCP Illinois");
MODULE_VERSION("1.0");
