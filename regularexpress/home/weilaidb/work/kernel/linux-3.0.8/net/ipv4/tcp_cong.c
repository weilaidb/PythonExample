int sysctl_tcp_max_ssthresh = 0;
static DEFINE_SPINLOCK(tcp_cong_list_lock);
static LIST_HEAD(tcp_cong_list);
static struct tcp_congestion_ops *tcp_ca_find(const char *name)
int tcp_register_congestion_control(struct tcp_congestion_ops *ca)
EXPORT_SYMBOL_GPL(tcp_register_congestion_control);
void tcp_unregister_congestion_control(struct tcp_congestion_ops *ca)
EXPORT_SYMBOL_GPL(tcp_unregister_congestion_control);
void tcp_init_congestion_control(struct sock *sk)
void tcp_cleanup_congestion_control(struct sock *sk)
int tcp_set_default_congestion_control(const char *name)
static int __init tcp_congestion_default(void)
late_initcall(tcp_congestion_default);
void tcp_get_available_congestion_control(char *buf, size_t maxlen)
void tcp_get_default_congestion_control(char *name)
void tcp_get_allowed_congestion_control(char *buf, size_t maxlen)
int tcp_set_allowed_congestion_control(char *val)
int tcp_set_congestion_control(struct sock *sk, const char *name)
int tcp_is_cwnd_limited(const struct sock *sk, u32 in_flight)
EXPORT_SYMBOL_GPL(tcp_is_cwnd_limited);
void tcp_slow_start(struct tcp_sock *tp)
EXPORT_SYMBOL_GPL(tcp_slow_start);
void tcp_cong_avoid_ai(struct tcp_sock *tp, u32 w)
EXPORT_SYMBOL_GPL(tcp_cong_avoid_ai);
void tcp_reno_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
EXPORT_SYMBOL_GPL(tcp_reno_cong_avoid);
u32 tcp_reno_ssthresh(struct sock *sk)
EXPORT_SYMBOL_GPL(tcp_reno_ssthresh);
u32 tcp_reno_min_cwnd(const struct sock *sk)
EXPORT_SYMBOL_GPL(tcp_reno_min_cwnd);
struct tcp_congestion_ops tcp_reno = ;
struct tcp_congestion_ops tcp_init_congestion_ops  = ;
EXPORT_SYMBOL_GPL(tcp_init_congestion_ops);
