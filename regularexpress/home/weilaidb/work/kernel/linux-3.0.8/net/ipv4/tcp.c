int sysctl_tcp_fin_timeout __read_mostly = TCP_FIN_TIMEOUT;
struct percpu_counter tcp_orphan_count;
EXPORT_SYMBOL_GPL(tcp_orphan_count);
long sysctl_tcp_mem[3] __read_mostly;
int sysctl_tcp_wmem[3] __read_mostly;
int sysctl_tcp_rmem[3] __read_mostly;
EXPORT_SYMBOL(sysctl_tcp_mem);
EXPORT_SYMBOL(sysctl_tcp_rmem);
EXPORT_SYMBOL(sysctl_tcp_wmem);
atomic_long_t tcp_memory_allocated;
EXPORT_SYMBOL(tcp_memory_allocated);
struct percpu_counter tcp_sockets_allocated;
EXPORT_SYMBOL(tcp_sockets_allocated);
struct tcp_splice_state ;
int tcp_memory_pressure __read_mostly;
EXPORT_SYMBOL(tcp_memory_pressure);
void tcp_enter_memory_pressure(struct sock *sk)
EXPORT_SYMBOL(tcp_enter_memory_pressure);
static u8 secs_to_retrans(int seconds, int timeout, int rto_max)
static int retrans_to_secs(u8 retrans, int timeout, int rto_max)
unsigned int tcp_poll(struct file *file, struct socket *sock, poll_table *wait)
EXPORT_SYMBOL(tcp_poll);
int tcp_ioctl(struct sock *sk, int cmd, unsigned long arg)
EXPORT_SYMBOL(tcp_ioctl);
static inline void tcp_mark_push(struct tcp_sock *tp, struct sk_buff *skb)
static inline int forced_push(struct tcp_sock *tp)
static inline void skb_entail(struct sock *sk, struct sk_buff *skb)
static inline void tcp_mark_urg(struct tcp_sock *tp, int flags)
static inline void tcp_push(struct sock *sk, int flags, int mss_now,
int nonagle)
static int tcp_splice_data_recv(read_descriptor_t *rd_desc, struct sk_buff *skb,
unsigned int offset, size_t len)
static int __tcp_splice_read(struct sock *sk, struct tcp_splice_state *tss)
ssize_t tcp_splice_read(struct socket *sock, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags)
EXPORT_SYMBOL(tcp_splice_read);
struct sk_buff *sk_stream_alloc_skb(struct sock *sk, int size, gfp_t gfp)
static unsigned int tcp_xmit_size_goal(struct sock *sk, u32 mss_now,
int large_allowed)
static int tcp_send_mss(struct sock *sk, int *size_goal, int flags)
static ssize_t do_tcp_sendpages(struct sock *sk, struct page **pages, int poffset,
size_t psize, int flags)
int tcp_sendpage(struct sock *sk, struct page *page, int offset,
size_t size, int flags)
EXPORT_SYMBOL(tcp_sendpage);
#define TCP_PAGE(sk)	(sk->sk_sndmsg_page)
#define TCP_OFF(sk)	(sk->sk_sndmsg_off)
static inline int select_size(struct sock *sk, int sg)
int tcp_sendmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t size)
EXPORT_SYMBOL(tcp_sendmsg);
static int tcp_recv_urg(struct sock *sk, struct msghdr *msg, int len, int flags)
void tcp_cleanup_rbuf(struct sock *sk, int copied)
static void tcp_prequeue_process(struct sock *sk)
static void tcp_service_net_dma(struct sock *sk, bool wait)
static inline struct sk_buff *tcp_recv_skb(struct sock *sk, u32 seq, u32 *off)
int tcp_read_sock(struct sock *sk, read_descriptor_t *desc,
sk_read_actor_t recv_actor)
EXPORT_SYMBOL(tcp_read_sock);
int tcp_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int nonblock, int flags, int *addr_len)
EXPORT_SYMBOL(tcp_recvmsg);
void tcp_set_state(struct sock *sk, int state)
EXPORT_SYMBOL_GPL(tcp_set_state);
static const unsigned char new_state[16] = ;
static int tcp_close_state(struct sock *sk)
void tcp_shutdown(struct sock *sk, int how)
EXPORT_SYMBOL(tcp_shutdown);
void tcp_close(struct sock *sk, long timeout)
EXPORT_SYMBOL(tcp_close);
static inline int tcp_need_reset(int state)
int tcp_disconnect(struct sock *sk, int flags)
EXPORT_SYMBOL(tcp_disconnect);
static int do_tcp_setsockopt(struct sock *sk, int level,
int optname, char __user *optval, unsigned int optlen)
int tcp_setsockopt(struct sock *sk, int level, int optname, char __user *optval,
unsigned int optlen)
EXPORT_SYMBOL(tcp_setsockopt);
int compat_tcp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(compat_tcp_setsockopt);
void tcp_get_info(struct sock *sk, struct tcp_info *info)
EXPORT_SYMBOL_GPL(tcp_get_info);
static int do_tcp_getsockopt(struct sock *sk, int level,
int optname, char __user *optval, int __user *optlen)
int tcp_getsockopt(struct sock *sk, int level, int optname, char __user *optval,
int __user *optlen)
EXPORT_SYMBOL(tcp_getsockopt);
int compat_tcp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL(compat_tcp_getsockopt);
struct sk_buff *tcp_tso_segment(struct sk_buff *skb, u32 features)
EXPORT_SYMBOL(tcp_tso_segment);
struct sk_buff **tcp_gro_receive(struct sk_buff **head, struct sk_buff *skb)
EXPORT_SYMBOL(tcp_gro_receive);
int tcp_gro_complete(struct sk_buff *skb)
EXPORT_SYMBOL(tcp_gro_complete);
static unsigned long tcp_md5sig_users;
static struct tcp_md5sig_pool * __percpu *tcp_md5sig_pool;
static DEFINE_SPINLOCK(tcp_md5sig_pool_lock);
static void __tcp_free_md5sig_pool(struct tcp_md5sig_pool * __percpu *pool)
void tcp_free_md5sig_pool(void)
EXPORT_SYMBOL(tcp_free_md5sig_pool);
static struct tcp_md5sig_pool * __percpu *
__tcp_alloc_md5sig_pool(struct sock *sk)
struct tcp_md5sig_pool * __percpu *tcp_alloc_md5sig_pool(struct sock *sk)
EXPORT_SYMBOL(tcp_alloc_md5sig_pool);
struct tcp_md5sig_pool *tcp_get_md5sig_pool(void)
EXPORT_SYMBOL(tcp_get_md5sig_pool);
void tcp_put_md5sig_pool(void)
EXPORT_SYMBOL(tcp_put_md5sig_pool);
int tcp_md5_hash_header(struct tcp_md5sig_pool *hp,
struct tcphdr *th)
EXPORT_SYMBOL(tcp_md5_hash_header);
int tcp_md5_hash_skb_data(struct tcp_md5sig_pool *hp,
struct sk_buff *skb, unsigned header_len)
EXPORT_SYMBOL(tcp_md5_hash_skb_data);
int tcp_md5_hash_key(struct tcp_md5sig_pool *hp, struct tcp_md5sig_key *key)
EXPORT_SYMBOL(tcp_md5_hash_key);
struct tcp_cookie_secret ;
#define TCP_SECRET_1MSL (HZ * TCP_PAWS_MSL)
#define TCP_SECRET_2MSL (HZ * TCP_PAWS_MSL * 2)
#define TCP_SECRET_LIFE (HZ * 600)
static struct tcp_cookie_secret tcp_secret_one;
static struct tcp_cookie_secret tcp_secret_two;
static struct tcp_cookie_secret *tcp_secret_generating;
static struct tcp_cookie_secret *tcp_secret_primary;
static struct tcp_cookie_secret *tcp_secret_retiring;
static struct tcp_cookie_secret *tcp_secret_secondary;
static DEFINE_SPINLOCK(tcp_secret_locker);
static inline u32 tcp_cookie_work(const u32 *ws, const int n)
int tcp_cookie_generator(u32 *bakery)
EXPORT_SYMBOL(tcp_cookie_generator);
void tcp_done(struct sock *sk)
EXPORT_SYMBOL_GPL(tcp_done);
extern struct tcp_congestion_ops tcp_reno;
static __initdata unsigned long thash_entries;
static int __init set_thash_entries(char *str)
__setup("thash_entries=", set_thash_entries);
void __init tcp_init(void)
