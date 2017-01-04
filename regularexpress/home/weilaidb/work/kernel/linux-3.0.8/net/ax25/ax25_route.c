static ax25_route *ax25_route_list;
static DEFINE_RWLOCK(ax25_route_lock);
void ax25_rt_device_down(struct net_device *dev)
static int __must_check ax25_rt_add(struct ax25_routes_struct *route)
void __ax25_put_route(ax25_route *ax25_rt)
static int ax25_rt_del(struct ax25_routes_struct *route)
static int ax25_rt_opt(struct ax25_route_opt_struct *rt_option)
int ax25_rt_ioctl(unsigned int cmd, void __user *arg)
static void *ax25_rt_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(ax25_route_lock)
static void *ax25_rt_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ax25_rt_seq_stop(struct seq_file *seq, void *v)
__releases(ax25_route_lock)
static int ax25_rt_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ax25_rt_seqops = ;
static int ax25_rt_info_open(struct inode *inode, struct file *file)
const struct file_operations ax25_route_fops = ;
ax25_route *ax25_get_route(ax25_address *addr, struct net_device *dev)
static inline void ax25_adjust_path(ax25_address *addr, ax25_digi *digipeat)
int ax25_rt_autobind(ax25_cb *ax25, ax25_address *addr)
struct sk_buff *ax25_rt_build_path(struct sk_buff *skb, ax25_address *src,
ax25_address *dest, ax25_digi *digi)
void __exit ax25_rt_free(void)
