int sysctl_tcp_retrans_collapse __read_mostly = 1;
int sysctl_tcp_workaround_signed_windows __read_mostly = 0;
int sysctl_tcp_tso_win_divisor __read_mostly = 3;
int sysctl_tcp_mtu_probing __read_mostly = 0;
int sysctl_tcp_base_mss __read_mostly = TCP_BASE_MSS;
int sysctl_tcp_slow_start_after_idle __read_mostly = 1;
int sysctl_tcp_cookie_size __read_mostly = 0;
EXPORT_SYMBOL_GPL(sysctl_tcp_cookie_size);
static void tcp_event_new_data_sent(struct sock *sk, struct sk_buff *skb)
static inline __u32 tcp_acceptable_seq(struct sock *sk)
static __u16 tcp_advertise_mss(struct sock *sk)
static void tcp_cwnd_restart(struct sock *sk, struct dst_entry *dst)
static void tcp_event_data_sent(struct tcp_sock *tp,
struct sk_buff *skb, struct sock *sk)
static inline void tcp_event_ack_sent(struct sock *sk, unsigned int pkts)
void tcp_select_initial_window(int __space, __u32 mss,
__u32 *rcv_wnd, __u32 *window_clamp,
int wscale_ok, __u8 *rcv_wscale,
__u32 init_rcv_wnd)
EXPORT_SYMBOL(tcp_select_initial_window);
static u16 tcp_select_window(struct sock *sk)
static inline void TCP_ECN_send_synack(struct tcp_sock *tp, struct sk_buff *skb)
static inline void TCP_ECN_send_syn(struct sock *sk, struct sk_buff *skb)
static __inline__ void
TCP_ECN_make_synack(struct request_sock *req, struct tcphdr *th)
static inline void TCP_ECN_send(struct sock *sk, struct sk_buff *skb,
int tcp_header_len)
static void tcp_init_nondata_skb(struct sk_buff *skb, u32 seq, u8 flags)
static inline int tcp_urg_mode(const struct tcp_sock *tp)
#define OPTION_SACK_ADVERTISE	(1 << 0)
#define OPTION_TS		(1 << 1)
#define OPTION_MD5		(1 << 2)
#define OPTION_WSCALE		(1 << 3)
#define OPTION_COOKIE_EXTENSION	(1 << 4)
struct tcp_out_options ;
static u8 tcp_cookie_size_check(u8 desired)
static void tcp_options_write(__be32 *ptr, struct tcp_sock *tp,
struct tcp_out_options *opts)
static unsigned tcp_syn_options(struct sock *sk, struct sk_buff *skb,
struct tcp_out_options *opts,
struct tcp_md5sig_key **md5)
static unsigned tcp_synack_options(struct sock *sk,
struct request_sock *req,
unsigned mss, struct sk_buff *skb,
struct tcp_out_options *opts,
struct tcp_md5sig_key **md5,
struct tcp_extend_values *xvp)
static unsigned tcp_established_options(struct sock *sk, struct sk_buff *skb,
struct tcp_out_options *opts,
struct tcp_md5sig_key **md5)
static int tcp_transmit_skb(struct sock *sk, struct sk_buff *skb, int clone_it,
gfp_t gfp_mask)
static void tcp_queue_skb(struct sock *sk, struct sk_buff *skb)
static void tcp_set_skb_tso_segs(struct sock *sk, struct sk_buff *skb,
unsigned int mss_now)
static void tcp_adjust_fackets_out(struct sock *sk, struct sk_buff *skb,
int decr)
static void tcp_adjust_pcount(struct sock *sk, struct sk_buff *skb, int decr)
int tcp_fragment(struct sock *sk, struct sk_buff *skb, u32 len,
unsigned int mss_now)
static void __pskb_trim_head(struct sk_buff *skb, int len)
int tcp_trim_head(struct sock *sk, struct sk_buff *skb, u32 len)
int tcp_mtu_to_mss(struct sock *sk, int pmtu)
int tcp_mss_to_mtu(struct sock *sk, int mss)
void tcp_mtup_init(struct sock *sk)
EXPORT_SYMBOL(tcp_mtup_init);
unsigned int tcp_sync_mss(struct sock *sk, u32 pmtu)
EXPORT_SYMBOL(tcp_sync_mss);
unsigned int tcp_current_mss(struct sock *sk)
static void tcp_cwnd_validate(struct sock *sk)
static unsigned int tcp_mss_split_point(struct sock *sk, struct sk_buff *skb,
unsigned int mss_now, unsigned int cwnd)
static inline unsigned int tcp_cwnd_test(struct tcp_sock *tp,
struct sk_buff *skb)
static int tcp_init_tso_segs(struct sock *sk, struct sk_buff *skb,
unsigned int mss_now)
static inline int tcp_minshall_check(const struct tcp_sock *tp)
static inline int tcp_nagle_check(const struct tcp_sock *tp,
const struct sk_buff *skb,
unsigned mss_now, int nonagle)
static inline int tcp_nagle_test(struct tcp_sock *tp, struct sk_buff *skb,
unsigned int cur_mss, int nonagle)
static inline int tcp_snd_wnd_test(struct tcp_sock *tp, struct sk_buff *skb,
unsigned int cur_mss)
static unsigned int tcp_snd_test(struct sock *sk, struct sk_buff *skb,
unsigned int cur_mss, int nonagle)
int tcp_may_send_now(struct sock *sk)
static int tso_fragment(struct sock *sk, struct sk_buff *skb, unsigned int len,
unsigned int mss_now, gfp_t gfp)
static int tcp_tso_should_defer(struct sock *sk, struct sk_buff *skb)
static int tcp_mtu_probe(struct sock *sk)
static int tcp_write_xmit(struct sock *sk, unsigned int mss_now, int nonagle,
int push_one, gfp_t gfp)
void __tcp_push_pending_frames(struct sock *sk, unsigned int cur_mss,
int nonagle)
void tcp_push_one(struct sock *sk, unsigned int mss_now)
u32 __tcp_select_window(struct sock *sk)
static void tcp_collapse_retrans(struct sock *sk, struct sk_buff *skb)
static int tcp_can_collapse(struct sock *sk, struct sk_buff *skb)
static void tcp_retrans_try_collapse(struct sock *sk, struct sk_buff *to,
int space)
int tcp_retransmit_skb(struct sock *sk, struct sk_buff *skb)
static int tcp_can_forward_retransmit(struct sock *sk)
void tcp_xmit_retransmit_queue(struct sock *sk)
void tcp_send_fin(struct sock *sk)
void tcp_send_active_reset(struct sock *sk, gfp_t priority)
int tcp_send_synack(struct sock *sk)
struct sk_buff *tcp_make_synack(struct sock *sk, struct dst_entry *dst,
struct request_sock *req,
struct request_values *rvp)
EXPORT_SYMBOL(tcp_make_synack);
static void tcp_connect_init(struct sock *sk)
int tcp_connect(struct sock *sk)
EXPORT_SYMBOL(tcp_connect);
void tcp_send_delayed_ack(struct sock *sk)
void tcp_send_ack(struct sock *sk)
static int tcp_xmit_probe_skb(struct sock *sk, int urgent)
int tcp_write_wakeup(struct sock *sk)
void tcp_send_probe0(struct sock *sk)
