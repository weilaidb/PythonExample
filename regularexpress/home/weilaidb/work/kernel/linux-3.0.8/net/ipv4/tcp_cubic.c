#define BICTCP_BETA_SCALE    1024
#define	BICTCP_HZ		10
#define HYSTART_ACK_TRAIN	0x1
#define HYSTART_DELAY		0x2
#define HYSTART_MIN_SAMPLES	8
#define HYSTART_DELAY_MIN	(4U<<3)
#define HYSTART_DELAY_MAX	(16U<<3)
#define HYSTART_DELAY_THRESH(x)	clamp(x, HYSTART_DELAY_MIN, HYSTART_DELAY_MAX)
static int fast_convergence __read_mostly = 1;
static int beta __read_mostly = 717;
static int initial_ssthresh __read_mostly;
static int bic_scale __read_mostly = 41;
static int tcp_friendliness __read_mostly = 1;
static int hystart __read_mostly = 1;
static int hystart_detect __read_mostly = HYSTART_ACK_TRAIN | HYSTART_DELAY;
static int hystart_low_window __read_mostly = 16;
static int hystart_ack_delta __read_mostly = 2;
static u32 cube_rtt_scale __read_mostly;
static u32 beta_scale __read_mostly;
static u64 cube_factor __read_mostly;
module_param(fast_convergence, int, 0644);
MODULE_PARM_DESC(fast_convergence, "turn on/off fast convergence");
module_param(beta, int, 0644);
MODULE_PARM_DESC(beta, "beta for multiplicative increase");
module_param(initial_ssthresh, int, 0644);
MODULE_PARM_DESC(initial_ssthresh, "initial value of slow start threshold");
module_param(bic_scale, int, 0444);
MODULE_PARM_DESC(bic_scale, "scale (scaled by 1024) value for bic function (bic_scale/1024)");
module_param(tcp_friendliness, int, 0644);
MODULE_PARM_DESC(tcp_friendliness, "turn on/off tcp friendliness");
module_param(hystart, int, 0644);
MODULE_PARM_DESC(hystart, "turn on/off hybrid slow start algorithm");
module_param(hystart_detect, int, 0644);
MODULE_PARM_DESC(hystart_detect, "hyrbrid slow start detection mechanisms"
" 1: packet-train 2: delay 3: both packet-train and delay");
module_param(hystart_low_window, int, 0644);
MODULE_PARM_DESC(hystart_low_window, "lower bound cwnd for hybrid slow start");
module_param(hystart_ack_delta, int, 0644);
MODULE_PARM_DESC(hystart_ack_delta, "spacing between ack's indicating train (msecs)");
struct bictcp ;
static inline void bictcp_reset(struct bictcp *ca)
static inline u32 bictcp_clock(void)
static inline void bictcp_hystart_reset(struct sock *sk)
static void bictcp_init(struct sock *sk)
static u32 cubic_root(u64 a)
static inline void bictcp_update(struct bictcp *ca, u32 cwnd)
static void bictcp_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static u32 bictcp_recalc_ssthresh(struct sock *sk)
static u32 bictcp_undo_cwnd(struct sock *sk)
static void bictcp_state(struct sock *sk, u8 new_state)
static void hystart_update(struct sock *sk, u32 delay)
static void bictcp_acked(struct sock *sk, u32 cnt, s32 rtt_us)
static struct tcp_congestion_ops cubictcp __read_mostly = ;
static int __init cubictcp_register(void)
static void __exit cubictcp_unregister(void)
module_init(cubictcp_register);
module_exit(cubictcp_unregister);
MODULE_AUTHOR("Sangtae Ha, Stephen Hemminger");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CUBIC TCP");
MODULE_VERSION("2.3");
