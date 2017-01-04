static unsigned int nr_neigh_no = 1;
static HLIST_HEAD(nr_node_list);
static DEFINE_SPINLOCK(nr_node_list_lock);
static HLIST_HEAD(nr_neigh_list);
static DEFINE_SPINLOCK(nr_neigh_list_lock);
static struct nr_node *nr_node_get(ax25_address *callsign)
static struct nr_neigh *nr_neigh_get_dev(ax25_address *callsign,
struct net_device *dev)
static void nr_remove_neigh(struct nr_neigh *);
static int __must_check nr_add_node(ax25_address *nr, const char *mnemonic,
ax25_address *ax25, ax25_digi *ax25_digi, struct net_device *dev,
int quality, int obs_count)
static inline void __nr_remove_node(struct nr_node *nr_node)
#define nr_remove_node_locked(__node) \
__nr_remove_node(__node)
static void nr_remove_node(struct nr_node *nr_node)
static inline void __nr_remove_neigh(struct nr_neigh *nr_neigh)
#define nr_remove_neigh_locked(__neigh) \
__nr_remove_neigh(__neigh)
static void nr_remove_neigh(struct nr_neigh *nr_neigh)
static int nr_del_node(ax25_address *callsign, ax25_address *neighbour, struct net_device *dev)
static int __must_check nr_add_neigh(ax25_address *callsign,
ax25_digi *ax25_digi, struct net_device *dev, unsigned int quality)
static int nr_del_neigh(ax25_address *callsign, struct net_device *dev, unsigned int quality)
static int nr_dec_obs(void)
void nr_rt_device_down(struct net_device *dev)
static struct net_device *nr_ax25_dev_get(char *devname)
struct net_device *nr_dev_first(void)
struct net_device *nr_dev_get(ax25_address *addr)
static ax25_digi *nr_call_to_digi(ax25_digi *digi, int ndigis,
ax25_address *digipeaters)
int nr_rt_ioctl(unsigned int cmd, void __user *arg)
void nr_link_failed(ax25_cb *ax25, int reason)
int nr_route_frame(struct sk_buff *skb, ax25_cb *ax25)
static void *nr_node_start(struct seq_file *seq, loff_t *pos)
static void *nr_node_next(struct seq_file *seq, void *v, loff_t *pos)
static void nr_node_stop(struct seq_file *seq, void *v)
static int nr_node_show(struct seq_file *seq, void *v)
static const struct seq_operations nr_node_seqops = ;
static int nr_node_info_open(struct inode *inode, struct file *file)
const struct file_operations nr_nodes_fops = ;
static void *nr_neigh_start(struct seq_file *seq, loff_t *pos)
static void *nr_neigh_next(struct seq_file *seq, void *v, loff_t *pos)
static void nr_neigh_stop(struct seq_file *seq, void *v)
static int nr_neigh_show(struct seq_file *seq, void *v)
static const struct seq_operations nr_neigh_seqops = ;
static int nr_neigh_info_open(struct inode *inode, struct file *file)
const struct file_operations nr_neigh_fops = ;
void __exit nr_rt_free(void)
