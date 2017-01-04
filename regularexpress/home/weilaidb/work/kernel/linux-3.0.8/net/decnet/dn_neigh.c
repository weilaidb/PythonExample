static int dn_neigh_construct(struct neighbour *);
static void dn_long_error_report(struct neighbour *, struct sk_buff *);
static void dn_short_error_report(struct neighbour *, struct sk_buff *);
static int dn_long_output(struct sk_buff *);
static int dn_short_output(struct sk_buff *);
static int dn_phase3_output(struct sk_buff *);
static const struct neigh_ops dn_long_ops = ;
static const struct neigh_ops dn_short_ops = ;
static const struct neigh_ops dn_phase3_ops = ;
static u32 dn_neigh_hash(const void *pkey,
const struct net_device *dev,
__u32 hash_rnd)
struct neigh_table dn_neigh_table = ;
static int dn_neigh_construct(struct neighbour *neigh)
static void dn_long_error_report(struct neighbour *neigh, struct sk_buff *skb)
static void dn_short_error_report(struct neighbour *neigh, struct sk_buff *skb)
static int dn_neigh_output_packet(struct sk_buff *skb)
static int dn_long_output(struct sk_buff *skb)
static int dn_short_output(struct sk_buff *skb)
static int dn_phase3_output(struct sk_buff *skb)
void dn_neigh_pointopoint_hello(struct sk_buff *skb)
int dn_neigh_router_hello(struct sk_buff *skb)
int dn_neigh_endnode_hello(struct sk_buff *skb)
static char *dn_find_slot(char *base, int max, int priority)
struct elist_cb_state ;
static void neigh_elist_cb(struct neighbour *neigh, void *_info)
int dn_neigh_elist(struct net_device *dev, unsigned char *ptr, int n)
static inline void dn_neigh_format_entry(struct seq_file *seq,
struct neighbour *n)
static int dn_neigh_seq_show(struct seq_file *seq, void *v)
static void *dn_neigh_seq_start(struct seq_file *seq, loff_t *pos)
static const struct seq_operations dn_neigh_seq_ops = ;
static int dn_neigh_seq_open(struct inode *inode, struct file *file)
static const struct file_operations dn_neigh_seq_fops = ;
void __init dn_neigh_init(void)
void __exit dn_neigh_cleanup(void)
