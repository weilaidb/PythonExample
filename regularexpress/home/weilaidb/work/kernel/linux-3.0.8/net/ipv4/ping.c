static struct ping_table ping_table;
static u16 ping_port_rover;
static inline int ping_hashfn(struct net *net, unsigned num, unsigned mask)
static inline struct hlist_nulls_head *ping_hashslot(struct ping_table *table,
struct net *net, unsigned num)
static int ping_v4_get_port(struct sock *sk, unsigned short ident)
static void ping_v4_hash(struct sock *sk)
static void ping_v4_unhash(struct sock *sk)
static struct sock *ping_v4_lookup(struct net *net, u32 saddr, u32 daddr,
u16 ident, int dif)
static void inet_get_ping_group_range_net(struct net *net, gid_t *low,
gid_t *high)
static int ping_init_sock(struct sock *sk)
static void ping_close(struct sock *sk, long timeout)
static int ping_bind(struct sock *sk, struct sockaddr *uaddr, int addr_len)
static inline int ping_supported(int type, int code)
static int ping_queue_rcv_skb(struct sock *sk, struct sk_buff *skb);
void ping_err(struct sk_buff *skb, u32 info)
struct pingfakehdr ;
static int ping_getfrag(void *from, char * to,
int offset, int fraglen, int odd, struct sk_buff *skb)
static int ping_push_pending_frames(struct sock *sk, struct pingfakehdr *pfh,
struct flowi4 *fl4)
static int ping_sendmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len)
static int ping_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int noblock, int flags, int *addr_len)
static int ping_queue_rcv_skb(struct sock *sk, struct sk_buff *skb)
void ping_rcv(struct sk_buff *skb)
struct proto ping_prot = ;
EXPORT_SYMBOL(ping_prot);
static struct sock *ping_get_first(struct seq_file *seq, int start)
static struct sock *ping_get_next(struct seq_file *seq, struct sock *sk)
static struct sock *ping_get_idx(struct seq_file *seq, loff_t pos)
static void *ping_seq_start(struct seq_file *seq, loff_t *pos)
static void *ping_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ping_seq_stop(struct seq_file *seq, void *v)
static void ping_format_sock(struct sock *sp, struct seq_file *f,
int bucket, int *len)
static int ping_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ping_seq_ops = ;
static int ping_seq_open(struct inode *inode, struct file *file)
static const struct file_operations ping_seq_fops = ;
static int ping_proc_register(struct net *net)
static void ping_proc_unregister(struct net *net)
static int __net_init ping_proc_init_net(struct net *net)
static void __net_exit ping_proc_exit_net(struct net *net)
static struct pernet_operations ping_net_ops = ;
int __init ping_proc_init(void)
void ping_proc_exit(void)
void __init ping_init(void)
