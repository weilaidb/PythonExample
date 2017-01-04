static int ipv6_dev_ac_dec(struct net_device *dev, const struct in6_addr *addr);
static DEFINE_RWLOCK(ipv6_sk_ac_lock);
int ipv6_sock_ac_join(struct sock *sk, int ifindex, const struct in6_addr *addr)
int ipv6_sock_ac_drop(struct sock *sk, int ifindex, const struct in6_addr *addr)
void ipv6_sock_ac_close(struct sock *sk)
static void aca_put(struct ifacaddr6 *ac)
int ipv6_dev_ac_inc(struct net_device *dev, const struct in6_addr *addr)
int __ipv6_dev_ac_dec(struct inet6_dev *idev, const struct in6_addr *addr)
static int ipv6_dev_ac_dec(struct net_device *dev, const struct in6_addr *addr)
static int ipv6_chk_acast_dev(struct net_device *dev, const struct in6_addr *addr)
int ipv6_chk_acast_addr(struct net *net, struct net_device *dev,
const struct in6_addr *addr)
struct ac6_iter_state ;
#define ac6_seq_private(seq)	((struct ac6_iter_state *)(seq)->private)
static inline struct ifacaddr6 *ac6_get_first(struct seq_file *seq)
static struct ifacaddr6 *ac6_get_next(struct seq_file *seq, struct ifacaddr6 *im)
static struct ifacaddr6 *ac6_get_idx(struct seq_file *seq, loff_t pos)
static void *ac6_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *ac6_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ac6_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static int ac6_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ac6_seq_ops = ;
static int ac6_seq_open(struct inode *inode, struct file *file)
static const struct file_operations ac6_seq_fops = ;
int __net_init ac6_proc_init(struct net *net)
void ac6_proc_exit(struct net *net)
