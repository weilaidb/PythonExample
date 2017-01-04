static unsigned int rose_neigh_no = 1;
static struct rose_node  *rose_node_list;
static DEFINE_SPINLOCK(rose_node_list_lock);
static struct rose_neigh *rose_neigh_list;
static DEFINE_SPINLOCK(rose_neigh_list_lock);
static struct rose_route *rose_route_list;
static DEFINE_SPINLOCK(rose_route_list_lock);
struct rose_neigh *rose_loopback_neigh;
static int __must_check rose_add_node(struct rose_route_struct *rose_route,
struct net_device *dev)
static void rose_remove_node(struct rose_node *rose_node)
static void rose_remove_neigh(struct rose_neigh *rose_neigh)
static void rose_remove_route(struct rose_route *rose_route)
static int rose_del_node(struct rose_route_struct *rose_route,
struct net_device *dev)
void rose_add_loopback_neigh(void)
int rose_add_loopback_node(rose_address *address)
void rose_del_loopback_node(rose_address *address)
void rose_rt_device_down(struct net_device *dev)
static int rose_clear_routes(void)
static struct net_device *rose_ax25_dev_find(char *devname)
struct net_device *rose_dev_first(void)
struct net_device *rose_dev_get(rose_address *addr)
static int rose_dev_exists(rose_address *addr)
struct rose_route *rose_route_free_lci(unsigned int lci, struct rose_neigh *neigh)
struct rose_neigh *rose_get_neigh(rose_address *addr, unsigned char *cause,
unsigned char *diagnostic, int route_frame)
int rose_rt_ioctl(unsigned int cmd, void __user *arg)
static void rose_del_route_by_neigh(struct rose_neigh *rose_neigh)
void rose_link_failed(ax25_cb *ax25, int reason)
void rose_link_device_down(struct net_device *dev)
int rose_route_frame(struct sk_buff *skb, ax25_cb *ax25)
static void *rose_node_start(struct seq_file *seq, loff_t *pos)
__acquires(rose_node_list_lock)
static void *rose_node_next(struct seq_file *seq, void *v, loff_t *pos)
static void rose_node_stop(struct seq_file *seq, void *v)
__releases(rose_node_list_lock)
static int rose_node_show(struct seq_file *seq, void *v)
static const struct seq_operations rose_node_seqops = ;
static int rose_nodes_open(struct inode *inode, struct file *file)
const struct file_operations rose_nodes_fops = ;
static void *rose_neigh_start(struct seq_file *seq, loff_t *pos)
__acquires(rose_neigh_list_lock)
static void *rose_neigh_next(struct seq_file *seq, void *v, loff_t *pos)
static void rose_neigh_stop(struct seq_file *seq, void *v)
__releases(rose_neigh_list_lock)
static int rose_neigh_show(struct seq_file *seq, void *v)
static const struct seq_operations rose_neigh_seqops = ;
static int rose_neigh_open(struct inode *inode, struct file *file)
const struct file_operations rose_neigh_fops = ;
static void *rose_route_start(struct seq_file *seq, loff_t *pos)
__acquires(rose_route_list_lock)
static void *rose_route_next(struct seq_file *seq, void *v, loff_t *pos)
static void rose_route_stop(struct seq_file *seq, void *v)
__releases(rose_route_list_lock)
static int rose_route_show(struct seq_file *seq, void *v)
static const struct seq_operations rose_route_seqops = ;
static int rose_route_open(struct inode *inode, struct file *file)
const struct file_operations rose_routes_fops = ;
void __exit rose_rt_free(void)
