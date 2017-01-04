DEFINE_SNMP_STAT(struct dccp_mib, dccp_statistics) __read_mostly;
EXPORT_SYMBOL_GPL(dccp_statistics);
struct percpu_counter dccp_orphan_count;
EXPORT_SYMBOL_GPL(dccp_orphan_count);
struct inet_hashinfo dccp_hashinfo;
EXPORT_SYMBOL_GPL(dccp_hashinfo);
int sysctl_dccp_tx_qlen __read_mostly = 5;
static const char *dccp_state_name(const int state)
void dccp_set_state(struct sock *sk, const int state)
EXPORT_SYMBOL_GPL(dccp_set_state);
static void dccp_finish_passive_close(struct sock *sk)
void dccp_done(struct sock *sk)
EXPORT_SYMBOL_GPL(dccp_done);
const char *dccp_packet_name(const int type)
EXPORT_SYMBOL_GPL(dccp_packet_name);
int dccp_init_sock(struct sock *sk, const __u8 ctl_sock_initialized)
EXPORT_SYMBOL_GPL(dccp_init_sock);
void dccp_destroy_sock(struct sock *sk)
EXPORT_SYMBOL_GPL(dccp_destroy_sock);
static inline int dccp_listen_start(struct sock *sk, int backlog)
static inline int dccp_need_reset(int state)
int dccp_disconnect(struct sock *sk, int flags)
EXPORT_SYMBOL_GPL(dccp_disconnect);
unsigned int dccp_poll(struct file *file, struct socket *sock,
poll_table *wait)
EXPORT_SYMBOL_GPL(dccp_poll);
int dccp_ioctl(struct sock *sk, int cmd, unsigned long arg)
EXPORT_SYMBOL_GPL(dccp_ioctl);
static int dccp_setsockopt_service(struct sock *sk, const __be32 service,
char __user *optval, unsigned int optlen)
static int dccp_setsockopt_cscov(struct sock *sk, int cscov, bool rx)
static int dccp_setsockopt_ccid(struct sock *sk, int type,
char __user *optval, unsigned int optlen)
static int do_dccp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
int dccp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL_GPL(dccp_setsockopt);
int compat_dccp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL_GPL(compat_dccp_setsockopt);
static int dccp_getsockopt_service(struct sock *sk, int len,
__be32 __user *optval,
int __user *optlen)
static int do_dccp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
int dccp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL_GPL(dccp_getsockopt);
int compat_dccp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL_GPL(compat_dccp_getsockopt);
static int dccp_msghdr_parse(struct msghdr *msg, struct sk_buff *skb)
int dccp_sendmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len)
EXPORT_SYMBOL_GPL(dccp_sendmsg);
int dccp_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int nonblock, int flags, int *addr_len)
EXPORT_SYMBOL_GPL(dccp_recvmsg);
int inet_dccp_listen(struct socket *sock, int backlog)
EXPORT_SYMBOL_GPL(inet_dccp_listen);
static void dccp_terminate_connection(struct sock *sk)
void dccp_close(struct sock *sk, long timeout)
EXPORT_SYMBOL_GPL(dccp_close);
void dccp_shutdown(struct sock *sk, int how)
EXPORT_SYMBOL_GPL(dccp_shutdown);
static inline int dccp_mib_init(void)
static inline void dccp_mib_exit(void)
static int thash_entries;
module_param(thash_entries, int, 0444);
MODULE_PARM_DESC(thash_entries, "Number of ehash buckets");
int dccp_debug;
module_param(dccp_debug, bool, 0644);
MODULE_PARM_DESC(dccp_debug, "Enable debug messages");
EXPORT_SYMBOL_GPL(dccp_debug);
static int __init dccp_init(void)
static void __exit dccp_fini(void)
module_init(dccp_init);
module_exit(dccp_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnaldo Carvalho de Melo <acme@conectiva.com.br>");
MODULE_DESCRIPTION("DCCP - Datagram Congestion Controlled Protocol");
