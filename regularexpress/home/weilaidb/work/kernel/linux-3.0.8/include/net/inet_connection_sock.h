#define _INET_CONNECTION_SOCK_H
#define INET_CSK_DEBUG 1
#undef INET_CSK_CLEAR_TIMERS
struct inet_bind_bucket;
struct tcp_congestion_ops;
struct inet_connection_sock_af_ops ;
struct inet_connection_sock ;
#define ICSK_TIME_RETRANS	1
#define ICSK_TIME_DACK		2
#define ICSK_TIME_PROBE0	3
static inline struct inet_connection_sock *inet_csk(const struct sock *sk)
static inline void *inet_csk_ca(const struct sock *sk)
extern struct sock *inet_csk_clone(struct sock *sk,
const struct request_sock *req,
const gfp_t priority);
enum inet_csk_ack_state_t ;
extern void inet_csk_init_xmit_timers(struct sock *sk,
void (*retransmit_handler)(unsigned long),
void (*delack_handler)(unsigned long),
void (*keepalive_handler)(unsigned long));
extern void inet_csk_clear_xmit_timers(struct sock *sk);
static inline void inet_csk_schedule_ack(struct sock *sk)
static inline int inet_csk_ack_scheduled(const struct sock *sk)
static inline void inet_csk_delack_init(struct sock *sk)
extern void inet_csk_delete_keepalive_timer(struct sock *sk);
extern void inet_csk_reset_keepalive_timer(struct sock *sk, unsigned long timeout);
extern const char inet_csk_timer_bug_msg[];
static inline void inet_csk_clear_xmit_timer(struct sock *sk, const int what)
static inline void inet_csk_reset_xmit_timer(struct sock *sk, const int what,
unsigned long when,
const unsigned long max_when)
extern struct sock *inet_csk_accept(struct sock *sk, int flags, int *err);
extern struct request_sock *inet_csk_search_req(const struct sock *sk,
struct request_sock ***prevp,
const __be16 rport,
const __be32 raddr,
const __be32 laddr);
extern int inet_csk_bind_conflict(const struct sock *sk,
const struct inet_bind_bucket *tb);
extern int inet_csk_get_port(struct sock *sk, unsigned short snum);
extern struct dst_entry* inet_csk_route_req(struct sock *sk,
struct flowi4 *fl4,
const struct request_sock *req);
extern struct dst_entry* inet_csk_route_child_sock(struct sock *sk,
struct sock *newsk,
const struct request_sock *req);
static inline void inet_csk_reqsk_queue_add(struct sock *sk,
struct request_sock *req,
struct sock *child)
extern void inet_csk_reqsk_queue_hash_add(struct sock *sk,
struct request_sock *req,
unsigned long timeout);
static inline void inet_csk_reqsk_queue_removed(struct sock *sk,
struct request_sock *req)
static inline void inet_csk_reqsk_queue_added(struct sock *sk,
const unsigned long timeout)
static inline int inet_csk_reqsk_queue_len(const struct sock *sk)
static inline int inet_csk_reqsk_queue_young(const struct sock *sk)
static inline int inet_csk_reqsk_queue_is_full(const struct sock *sk)
static inline void inet_csk_reqsk_queue_unlink(struct sock *sk,
struct request_sock *req,
struct request_sock **prev)
static inline void inet_csk_reqsk_queue_drop(struct sock *sk,
struct request_sock *req,
struct request_sock **prev)
extern void inet_csk_reqsk_queue_prune(struct sock *parent,
const unsigned long interval,
const unsigned long timeout,
const unsigned long max_rto);
extern void inet_csk_destroy_sock(struct sock *sk);
static inline unsigned int inet_csk_listen_poll(const struct sock *sk)
extern int  inet_csk_listen_start(struct sock *sk, const int nr_table_entries);
extern void inet_csk_listen_stop(struct sock *sk);
extern void inet_csk_addr2sockaddr(struct sock *sk, struct sockaddr *uaddr);
extern int inet_csk_compat_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen);
extern int inet_csk_compat_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen);
