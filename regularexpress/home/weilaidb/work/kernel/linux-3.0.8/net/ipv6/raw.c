#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
static struct raw_hashinfo raw_v6_hashinfo = ;
static struct sock *__raw_v6_lookup(struct net *net, struct sock *sk,
unsigned short num, const struct in6_addr *loc_addr,
const struct in6_addr *rmt_addr, int dif)
static __inline__ int icmpv6_filter(struct sock *sk, struct sk_buff *skb)
#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
typedef int mh_filter_t(struct sock *sock, struct sk_buff *skb);
static mh_filter_t __rcu *mh_filter __read_mostly;
int rawv6_mh_filter_register(mh_filter_t filter)
EXPORT_SYMBOL(rawv6_mh_filter_register);
int rawv6_mh_filter_unregister(mh_filter_t filter)
EXPORT_SYMBOL(rawv6_mh_filter_unregister);
static int ipv6_raw_deliver(struct sk_buff *skb, int nexthdr)
int raw6_local_deliver(struct sk_buff *skb, int nexthdr)
static int rawv6_bind(struct sock *sk, struct sockaddr *uaddr, int addr_len)
static void rawv6_err(struct sock *sk, struct sk_buff *skb,
struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
void raw6_icmp_error(struct sk_buff *skb, int nexthdr,
u8 type, u8 code, int inner_offset, __be32 info)
static inline int rawv6_rcv_skb(struct sock * sk, struct sk_buff * skb)
int rawv6_rcv(struct sock *sk, struct sk_buff *skb)
static int rawv6_recvmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len,
int noblock, int flags, int *addr_len)
static int rawv6_push_pending_frames(struct sock *sk, struct flowi6 *fl6,
struct raw6_sock *rp)
static int rawv6_send_hdrinc(struct sock *sk, void *from, int length,
struct flowi6 *fl6, struct dst_entry **dstp,
unsigned int flags)
static int rawv6_probe_proto_opt(struct flowi6 *fl6, struct msghdr *msg)
static int rawv6_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len)
static int rawv6_seticmpfilter(struct sock *sk, int level, int optname,
char __user *optval, int optlen)
static int rawv6_geticmpfilter(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int do_rawv6_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
static int rawv6_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
static int compat_rawv6_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
static int do_rawv6_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int rawv6_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int compat_rawv6_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int rawv6_ioctl(struct sock *sk, int cmd, unsigned long arg)
static int compat_rawv6_ioctl(struct sock *sk, unsigned int cmd, unsigned long arg)
static void rawv6_close(struct sock *sk, long timeout)
static void raw6_destroy(struct sock *sk)
static int rawv6_init_sk(struct sock *sk)
struct proto rawv6_prot = ;
static void raw6_sock_seq_show(struct seq_file *seq, struct sock *sp, int i)
static int raw6_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations raw6_seq_ops = ;
static int raw6_seq_open(struct inode *inode, struct file *file)
static const struct file_operations raw6_seq_fops = ;
static int __net_init raw6_init_net(struct net *net)
static void __net_exit raw6_exit_net(struct net *net)
static struct pernet_operations raw6_net_ops = ;
int __init raw6_proc_init(void)
void raw6_proc_exit(void)
static const struct proto_ops inet6_sockraw_ops = ;
static struct inet_protosw rawv6_protosw = ;
int __init rawv6_init(void)
void rawv6_exit(void)
