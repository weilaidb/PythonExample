#define FL_MIN_LINGER	6
#define FL_MAX_LINGER	60
#define FL_MAX_PER_SOCK	32
#define FL_MAX_SIZE	4096
#define FL_HASH_MASK	255
#define FL_HASH(l)	(ntohl(l)&FL_HASH_MASK)
static atomic_t fl_size = ATOMIC_INIT(0);
static struct ip6_flowlabel *fl_ht[FL_HASH_MASK+1];
static void ip6_fl_gc(unsigned long dummy);
static DEFINE_TIMER(ip6_fl_gc_timer, ip6_fl_gc, 0, 0);
static DEFINE_RWLOCK(ip6_fl_lock);
static DEFINE_RWLOCK(ip6_sk_fl_lock);
static inline struct ip6_flowlabel *__fl_lookup(struct net *net, __be32 label)
static struct ip6_flowlabel *fl_lookup(struct net *net, __be32 label)
static void fl_free(struct ip6_flowlabel *fl)
static void fl_release(struct ip6_flowlabel *fl)
static void ip6_fl_gc(unsigned long dummy)
static void __net_exit ip6_fl_purge(struct net *net)
static struct ip6_flowlabel *fl_intern(struct net *net,
struct ip6_flowlabel *fl, __be32 label)
struct ip6_flowlabel * fl6_sock_lookup(struct sock *sk, __be32 label)
EXPORT_SYMBOL_GPL(fl6_sock_lookup);
void fl6_free_socklist(struct sock *sk)
struct ipv6_txoptions *fl6_merge_options(struct ipv6_txoptions * opt_space,
struct ip6_flowlabel * fl,
struct ipv6_txoptions * fopt)
static unsigned long check_linger(unsigned long ttl)
static int fl6_renew(struct ip6_flowlabel *fl, unsigned long linger, unsigned long expires)
static struct ip6_flowlabel *
fl_create(struct net *net, struct in6_flowlabel_req *freq, char __user *optval,
int optlen, int *err_p)
static int mem_check(struct sock *sk)
static int ipv6_hdr_cmp(struct ipv6_opt_hdr *h1, struct ipv6_opt_hdr *h2)
static int ipv6_opt_cmp(struct ipv6_txoptions *o1, struct ipv6_txoptions *o2)
static inline void fl_link(struct ipv6_pinfo *np, struct ipv6_fl_socklist *sfl,
struct ip6_flowlabel *fl)
int ipv6_flowlabel_opt(struct sock *sk, char __user *optval, int optlen)
struct ip6fl_iter_state ;
#define ip6fl_seq_private(seq)	((struct ip6fl_iter_state *)(seq)->private)
static struct ip6_flowlabel *ip6fl_get_first(struct seq_file *seq)
static struct ip6_flowlabel *ip6fl_get_next(struct seq_file *seq, struct ip6_flowlabel *fl)
static struct ip6_flowlabel *ip6fl_get_idx(struct seq_file *seq, loff_t pos)
static void *ip6fl_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(ip6_fl_lock)
static void *ip6fl_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ip6fl_seq_stop(struct seq_file *seq, void *v)
__releases(ip6_fl_lock)
static int ip6fl_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ip6fl_seq_ops = ;
static int ip6fl_seq_open(struct inode *inode, struct file *file)
static const struct file_operations ip6fl_seq_fops = ;
static int __net_init ip6_flowlabel_proc_init(struct net *net)
static void __net_exit ip6_flowlabel_proc_fini(struct net *net)
static inline int ip6_flowlabel_proc_init(struct net *net)
static inline void ip6_flowlabel_proc_fini(struct net *net)
static void __net_exit ip6_flowlabel_net_exit(struct net *net)
static struct pernet_operations ip6_flowlabel_net_ops = ;
int ip6_flowlabel_init(void)
void ip6_flowlabel_cleanup(void)
