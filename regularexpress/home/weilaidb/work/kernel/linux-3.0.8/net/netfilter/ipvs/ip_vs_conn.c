#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define CONFIG_IP_VS_TAB_BITS	12
static int ip_vs_conn_tab_bits = CONFIG_IP_VS_TAB_BITS;
module_param_named(conn_tab_bits, ip_vs_conn_tab_bits, int, 0444);
MODULE_PARM_DESC(conn_tab_bits, "Set connections' hash size");
int ip_vs_conn_tab_size __read_mostly;
static int ip_vs_conn_tab_mask __read_mostly;
static struct hlist_head *ip_vs_conn_tab __read_mostly;
static struct kmem_cache *ip_vs_conn_cachep __read_mostly;
static atomic_t ip_vs_conn_no_cport_cnt = ATOMIC_INIT(0);
static unsigned int ip_vs_conn_rnd __read_mostly;
#define CT_LOCKARRAY_BITS  5
#define CT_LOCKARRAY_SIZE  (1<<CT_LOCKARRAY_BITS)
#define CT_LOCKARRAY_MASK  (CT_LOCKARRAY_SIZE-1)
struct ip_vs_aligned_lock
__attribute__((__aligned__(SMP_CACHE_BYTES)));
static struct ip_vs_aligned_lock
__ip_vs_conntbl_lock_array[CT_LOCKARRAY_SIZE] __cacheline_aligned;
static inline void ct_read_lock(unsigned key)
static inline void ct_read_unlock(unsigned key)
static inline void ct_write_lock(unsigned key)
static inline void ct_write_unlock(unsigned key)
static inline void ct_read_lock_bh(unsigned key)
static inline void ct_read_unlock_bh(unsigned key)
static inline void ct_write_lock_bh(unsigned key)
static inline void ct_write_unlock_bh(unsigned key)
static unsigned int ip_vs_conn_hashkey(struct net *net, int af, unsigned proto,
const union nf_inet_addr *addr,
__be16 port)
static unsigned int ip_vs_conn_hashkey_param(const struct ip_vs_conn_param *p,
bool inverse)
static unsigned int ip_vs_conn_hashkey_conn(const struct ip_vs_conn *cp)
static inline int ip_vs_conn_hash(struct ip_vs_conn *cp)
static inline int ip_vs_conn_unhash(struct ip_vs_conn *cp)
static inline struct ip_vs_conn *
__ip_vs_conn_in_get(const struct ip_vs_conn_param *p)
struct ip_vs_conn *ip_vs_conn_in_get(const struct ip_vs_conn_param *p)
static int
ip_vs_conn_fill_param_proto(int af, const struct sk_buff *skb,
const struct ip_vs_iphdr *iph,
unsigned int proto_off, int inverse,
struct ip_vs_conn_param *p)
struct ip_vs_conn *
ip_vs_conn_in_get_proto(int af, const struct sk_buff *skb,
const struct ip_vs_iphdr *iph,
unsigned int proto_off, int inverse)
EXPORT_SYMBOL_GPL(ip_vs_conn_in_get_proto);
struct ip_vs_conn *ip_vs_ct_in_get(const struct ip_vs_conn_param *p)
struct ip_vs_conn *ip_vs_conn_out_get(const struct ip_vs_conn_param *p)
struct ip_vs_conn *
ip_vs_conn_out_get_proto(int af, const struct sk_buff *skb,
const struct ip_vs_iphdr *iph,
unsigned int proto_off, int inverse)
EXPORT_SYMBOL_GPL(ip_vs_conn_out_get_proto);
void ip_vs_conn_put(struct ip_vs_conn *cp)
void ip_vs_conn_fill_cport(struct ip_vs_conn *cp, __be16 cport)
static inline void ip_vs_bind_xmit(struct ip_vs_conn *cp)
static inline void ip_vs_bind_xmit_v6(struct ip_vs_conn *cp)
static inline int ip_vs_dest_totalconns(struct ip_vs_dest *dest)
static inline void
ip_vs_bind_dest(struct ip_vs_conn *cp, struct ip_vs_dest *dest)
struct ip_vs_dest *ip_vs_try_bind_dest(struct ip_vs_conn *cp)
static inline void ip_vs_unbind_dest(struct ip_vs_conn *cp)
static int expire_quiescent_template(struct netns_ipvs *ipvs,
struct ip_vs_dest *dest)
int ip_vs_check_template(struct ip_vs_conn *ct)
static void ip_vs_conn_expire(unsigned long data)
void ip_vs_conn_expire_now(struct ip_vs_conn *cp)
struct ip_vs_conn *
ip_vs_conn_new(const struct ip_vs_conn_param *p,
const union nf_inet_addr *daddr, __be16 dport, unsigned flags,
struct ip_vs_dest *dest, __u32 fwmark)
struct ip_vs_iter_state ;
static void *ip_vs_conn_array(struct seq_file *seq, loff_t pos)
static void *ip_vs_conn_seq_start(struct seq_file *seq, loff_t *pos)
static void *ip_vs_conn_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ip_vs_conn_seq_stop(struct seq_file *seq, void *v)
static int ip_vs_conn_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ip_vs_conn_seq_ops = ;
static int ip_vs_conn_open(struct inode *inode, struct file *file)
static const struct file_operations ip_vs_conn_fops = ;
static const char *ip_vs_origin_name(unsigned flags)
static int ip_vs_conn_sync_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ip_vs_conn_sync_seq_ops = ;
static int ip_vs_conn_sync_open(struct inode *inode, struct file *file)
static const struct file_operations ip_vs_conn_sync_fops = ;
static inline int todrop_entry(struct ip_vs_conn *cp)
void ip_vs_random_dropentry(struct net *net)
static void ip_vs_conn_flush(struct net *net)
int __net_init __ip_vs_conn_init(struct net *net)
void __net_exit __ip_vs_conn_cleanup(struct net *net)
int __init ip_vs_conn_init(void)
void ip_vs_conn_cleanup(void)
