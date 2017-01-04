static void *ipx_seq_interface_start(struct seq_file *seq, loff_t *pos)
static void *ipx_seq_interface_next(struct seq_file *seq, void *v, loff_t *pos)
static void ipx_seq_interface_stop(struct seq_file *seq, void *v)
static int ipx_seq_interface_show(struct seq_file *seq, void *v)
static void *ipx_seq_route_start(struct seq_file *seq, loff_t *pos)
static void *ipx_seq_route_next(struct seq_file *seq, void *v, loff_t *pos)
static void ipx_seq_route_stop(struct seq_file *seq, void *v)
static int ipx_seq_route_show(struct seq_file *seq, void *v)
static __inline__ struct sock *ipx_get_socket_idx(loff_t pos)
static void *ipx_seq_socket_start(struct seq_file *seq, loff_t *pos)
static void *ipx_seq_socket_next(struct seq_file *seq, void *v, loff_t *pos)
static int ipx_seq_socket_show(struct seq_file *seq, void *v)
static const struct seq_operations ipx_seq_interface_ops = ;
static const struct seq_operations ipx_seq_route_ops = ;
static const struct seq_operations ipx_seq_socket_ops = ;
static int ipx_seq_route_open(struct inode *inode, struct file *file)
static int ipx_seq_interface_open(struct inode *inode, struct file *file)
static int ipx_seq_socket_open(struct inode *inode, struct file *file)
static const struct file_operations ipx_seq_interface_fops = ;
static const struct file_operations ipx_seq_route_fops = ;
static const struct file_operations ipx_seq_socket_fops = ;
static struct proc_dir_entry *ipx_proc_dir;
int __init ipx_proc_init(void)
void __exit ipx_proc_exit(void)
int __init ipx_proc_init(void)
void __exit ipx_proc_exit(void)
