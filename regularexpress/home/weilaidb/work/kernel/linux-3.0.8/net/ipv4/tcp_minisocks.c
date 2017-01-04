int sysctl_tcp_syncookies __read_mostly = 1;
EXPORT_SYMBOL(sysctl_tcp_syncookies);
int sysctl_tcp_abort_on_overflow __read_mostly;
struct inet_timewait_death_row tcp_death_row = ;
EXPORT_SYMBOL_GPL(tcp_death_row);
static int tcp_remember_stamp(struct sock *sk)
static int tcp_tw_remember_stamp(struct inet_timewait_sock *tw)
static __inline__ int tcp_in_window(u32 seq, u32 end_seq, u32 s_win, u32 e_win)
enum tcp_tw_status
tcp_timewait_state_process(struct inet_timewait_sock *tw, struct sk_buff *skb,
const struct tcphdr *th)
EXPORT_SYMBOL(tcp_timewait_state_process);
void tcp_time_wait(struct sock *sk, int state, int timeo)
void tcp_twsk_destructor(struct sock *sk)
EXPORT_SYMBOL_GPL(tcp_twsk_destructor);
static inline void TCP_ECN_openreq_child(struct tcp_sock *tp,
struct request_sock *req)
struct sock *tcp_create_openreq_child(struct sock *sk, struct request_sock *req, struct sk_buff *skb)
EXPORT_SYMBOL(tcp_create_openreq_child);
struct sock *tcp_check_req(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct request_sock **prev)
EXPORT_SYMBOL(tcp_check_req);
int tcp_child_process(struct sock *parent, struct sock *child,
struct sk_buff *skb)
EXPORT_SYMBOL(tcp_child_process);
