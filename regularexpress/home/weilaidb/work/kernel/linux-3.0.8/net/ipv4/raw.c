static struct raw_hashinfo raw_v4_hashinfo = ;
void raw_hash_sk(struct sock *sk)
EXPORT_SYMBOL_GPL(raw_hash_sk);
void raw_unhash_sk(struct sock *sk)
EXPORT_SYMBOL_GPL(raw_unhash_sk);
static struct sock *__raw_v4_lookup(struct net *net, struct sock *sk,
unsigned short num, __be32 raddr, __be32 laddr, int dif)
static __inline__ int icmp_filter(struct sock *sk, struct sk_buff *skb)
static int raw_v4_input(struct sk_buff *skb, const struct iphdr *iph, int hash)
int raw_local_deliver(struct sk_buff *skb, int protocol)
static void raw_err(struct sock *sk, struct sk_buff *skb, u32 info)
void raw_icmp_error(struct sk_buff *skb, int protocol, u32 info)
static int raw_rcv_skb(struct sock * sk, struct sk_buff * skb)
int raw_rcv(struct sock *sk, struct sk_buff *skb)
static int raw_send_hdrinc(struct sock *sk, struct flowi4 *fl4,
void *from, size_t length,
struct rtable **rtp,
unsigned int flags)
static int raw_probe_proto_opt(struct flowi4 *fl4, struct msghdr *msg)
static int raw_sendmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len)
static void raw_close(struct sock *sk, long timeout)
static void raw_destroy(struct sock *sk)
static int raw_bind(struct sock *sk, struct sockaddr *uaddr, int addr_len)
static int raw_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int noblock, int flags, int *addr_len)
static int raw_init(struct sock *sk)
static int raw_seticmpfilter(struct sock *sk, char __user *optval, int optlen)
static int raw_geticmpfilter(struct sock *sk, char __user *optval, int __user *optlen)
static int do_raw_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
static int raw_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
static int compat_raw_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
static int do_raw_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int raw_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int compat_raw_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int raw_ioctl(struct sock *sk, int cmd, unsigned long arg)
static int compat_raw_ioctl(struct sock *sk, unsigned int cmd, unsigned long arg)
struct proto raw_prot = ;
static struct sock *raw_get_first(struct seq_file *seq)
static struct sock *raw_get_next(struct seq_file *seq, struct sock *sk)
static struct sock *raw_get_idx(struct seq_file *seq, loff_t pos)
void *raw_seq_start(struct seq_file *seq, loff_t *pos)
EXPORT_SYMBOL_GPL(raw_seq_start);
void *raw_seq_next(struct seq_file *seq, void *v, loff_t *pos)
EXPORT_SYMBOL_GPL(raw_seq_next);
void raw_seq_stop(struct seq_file *seq, void *v)
EXPORT_SYMBOL_GPL(raw_seq_stop);
static void raw_sock_seq_show(struct seq_file *seq, struct sock *sp, int i)
static int raw_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations raw_seq_ops = ;
int raw_seq_open(struct inode *ino, struct file *file,
struct raw_hashinfo *h, const struct seq_operations *ops)
EXPORT_SYMBOL_GPL(raw_seq_open);
static int raw_v4_seq_open(struct inode *inode, struct file *file)
static const struct file_operations raw_seq_fops = ;
static __net_init int raw_init_net(struct net *net)
static __net_exit void raw_exit_net(struct net *net)
static __net_initdata struct pernet_operations raw_net_ops = ;
int __init raw_proc_init(void)
void __init raw_proc_exit(void)
