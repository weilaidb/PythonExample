const char inet_csk_timer_bug_msg[] = "inet_csk BUG: unknown timer value\n";
EXPORT_SYMBOL(inet_csk_timer_bug_msg);
struct local_ports sysctl_local_ports __read_mostly = ;
unsigned long *sysctl_local_reserved_ports;
EXPORT_SYMBOL(sysctl_local_reserved_ports);
void inet_get_local_port_range(int *low, int *high)
EXPORT_SYMBOL(inet_get_local_port_range);
int inet_csk_bind_conflict(const struct sock *sk,
const struct inet_bind_bucket *tb)
EXPORT_SYMBOL_GPL(inet_csk_bind_conflict);
int inet_csk_get_port(struct sock *sk, unsigned short snum)
EXPORT_SYMBOL_GPL(inet_csk_get_port);
static int inet_csk_wait_for_connect(struct sock *sk, long timeo)
struct sock *inet_csk_accept(struct sock *sk, int flags, int *err)
EXPORT_SYMBOL(inet_csk_accept);
void inet_csk_init_xmit_timers(struct sock *sk,
void (*retransmit_handler)(unsigned long),
void (*delack_handler)(unsigned long),
void (*keepalive_handler)(unsigned long))
EXPORT_SYMBOL(inet_csk_init_xmit_timers);
void inet_csk_clear_xmit_timers(struct sock *sk)
EXPORT_SYMBOL(inet_csk_clear_xmit_timers);
void inet_csk_delete_keepalive_timer(struct sock *sk)
EXPORT_SYMBOL(inet_csk_delete_keepalive_timer);
void inet_csk_reset_keepalive_timer(struct sock *sk, unsigned long len)
EXPORT_SYMBOL(inet_csk_reset_keepalive_timer);
struct dst_entry *inet_csk_route_req(struct sock *sk,
struct flowi4 *fl4,
const struct request_sock *req)
EXPORT_SYMBOL_GPL(inet_csk_route_req);
struct dst_entry *inet_csk_route_child_sock(struct sock *sk,
struct sock *newsk,
const struct request_sock *req)
EXPORT_SYMBOL_GPL(inet_csk_route_child_sock);
static inline u32 inet_synq_hash(const __be32 raddr, const __be16 rport,
const u32 rnd, const u32 synq_hsize)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
#define AF_INET_FAMILY(fam) ((fam) == AF_INET)
#define AF_INET_FAMILY(fam) 1
struct request_sock *inet_csk_search_req(const struct sock *sk,
struct request_sock ***prevp,
const __be16 rport, const __be32 raddr,
const __be32 laddr)
EXPORT_SYMBOL_GPL(inet_csk_search_req);
void inet_csk_reqsk_queue_hash_add(struct sock *sk, struct request_sock *req,
unsigned long timeout)
EXPORT_SYMBOL_GPL(inet_csk_reqsk_queue_hash_add);
extern int sysctl_tcp_synack_retries;
static inline void syn_ack_recalc(struct request_sock *req, const int thresh,
const int max_retries,
const u8 rskq_defer_accept,
int *expire, int *resend)
void inet_csk_reqsk_queue_prune(struct sock *parent,
const unsigned long interval,
const unsigned long timeout,
const unsigned long max_rto)
EXPORT_SYMBOL_GPL(inet_csk_reqsk_queue_prune);
struct sock *inet_csk_clone(struct sock *sk, const struct request_sock *req,
const gfp_t priority)
EXPORT_SYMBOL_GPL(inet_csk_clone);
void inet_csk_destroy_sock(struct sock *sk)
EXPORT_SYMBOL(inet_csk_destroy_sock);
int inet_csk_listen_start(struct sock *sk, const int nr_table_entries)
EXPORT_SYMBOL_GPL(inet_csk_listen_start);
void inet_csk_listen_stop(struct sock *sk)
EXPORT_SYMBOL_GPL(inet_csk_listen_stop);
void inet_csk_addr2sockaddr(struct sock *sk, struct sockaddr *uaddr)
EXPORT_SYMBOL_GPL(inet_csk_addr2sockaddr);
int inet_csk_compat_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL_GPL(inet_csk_compat_getsockopt);
int inet_csk_compat_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL_GPL(inet_csk_compat_setsockopt);
