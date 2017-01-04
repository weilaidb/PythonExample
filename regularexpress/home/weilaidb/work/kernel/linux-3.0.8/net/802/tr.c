static void tr_add_rif_info(struct trh_hdr *trh, struct net_device *dev);
static void rif_check_expire(unsigned long dummy);
#define TR_SR_DEBUG 0
struct rif_cache ;
#define RIF_TABLE_SIZE 32
static struct rif_cache *rif_table[RIF_TABLE_SIZE];
static DEFINE_SPINLOCK(rif_lock);
static struct timer_list rif_timer;
static int sysctl_tr_rif_timeout = 60*10*HZ;
static inline unsigned long rif_hash(const unsigned char *addr)
static int tr_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len)
static int tr_rebuild_header(struct sk_buff *skb)
__be16 tr_type_trans(struct sk_buff *skb, struct net_device *dev)
void tr_source_route(struct sk_buff *skb,struct trh_hdr *trh,
struct net_device *dev)
static void tr_add_rif_info(struct trh_hdr *trh, struct net_device *dev)
static void rif_check_expire(unsigned long dummy)
static struct rif_cache *rif_get_idx(loff_t pos)
static void *rif_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(&rif_lock)
static void *rif_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void rif_seq_stop(struct seq_file *seq, void *v)
__releases(&rif_lock)
static int rif_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations rif_seq_ops = ;
static int rif_seq_open(struct inode *inode, struct file *file)
static const struct file_operations rif_seq_fops = ;
static const struct header_ops tr_header_ops = ;
static void tr_setup(struct net_device *dev)
struct net_device *alloc_trdev(int sizeof_priv)
static struct ctl_table tr_table[] = ;
static __initdata struct ctl_path tr_path[] = ;
static int __init rif_init(void)
module_init(rif_init);
EXPORT_SYMBOL(tr_type_trans);
EXPORT_SYMBOL(alloc_trdev);
MODULE_LICENSE("GPL");
