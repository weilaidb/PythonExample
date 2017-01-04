static __inline__ struct atalk_iface *atalk_get_interface_idx(loff_t pos)
static void *atalk_seq_interface_start(struct seq_file *seq, loff_t *pos)
__acquires(atalk_interfaces_lock)
static void *atalk_seq_interface_next(struct seq_file *seq, void *v, loff_t *pos)
static void atalk_seq_interface_stop(struct seq_file *seq, void *v)
__releases(atalk_interfaces_lock)
static int atalk_seq_interface_show(struct seq_file *seq, void *v)
static __inline__ struct atalk_route *atalk_get_route_idx(loff_t pos)
static void *atalk_seq_route_start(struct seq_file *seq, loff_t *pos)
__acquires(atalk_routes_lock)
static void *atalk_seq_route_next(struct seq_file *seq, void *v, loff_t *pos)
static void atalk_seq_route_stop(struct seq_file *seq, void *v)
__releases(atalk_routes_lock)
static int atalk_seq_route_show(struct seq_file *seq, void *v)
static void *atalk_seq_socket_start(struct seq_file *seq, loff_t *pos)
__acquires(atalk_sockets_lock)
static void *atalk_seq_socket_next(struct seq_file *seq, void *v, loff_t *pos)
static void atalk_seq_socket_stop(struct seq_file *seq, void *v)
__releases(atalk_sockets_lock)
static int atalk_seq_socket_show(struct seq_file *seq, void *v)
static const struct seq_operations atalk_seq_interface_ops = ;
static const struct seq_operations atalk_seq_route_ops = ;
static const struct seq_operations atalk_seq_socket_ops = ;
static int atalk_seq_interface_open(struct inode *inode, struct file *file)
static int atalk_seq_route_open(struct inode *inode, struct file *file)
static int atalk_seq_socket_open(struct inode *inode, struct file *file)
static const struct file_operations atalk_seq_interface_fops = ;
static const struct file_operations atalk_seq_route_fops = ;
static const struct file_operations atalk_seq_socket_fops = ;
static struct proc_dir_entry *atalk_proc_dir;
int __init atalk_proc_init(void)
void __exit atalk_proc_exit(void)
