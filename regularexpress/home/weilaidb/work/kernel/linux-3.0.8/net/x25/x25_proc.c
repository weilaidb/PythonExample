static void *x25_seq_route_start(struct seq_file *seq, loff_t *pos)
__acquires(x25_route_list_lock)
static void *x25_seq_route_next(struct seq_file *seq, void *v, loff_t *pos)
static void x25_seq_route_stop(struct seq_file *seq, void *v)
__releases(x25_route_list_lock)
static int x25_seq_route_show(struct seq_file *seq, void *v)
static void *x25_seq_socket_start(struct seq_file *seq, loff_t *pos)
__acquires(x25_list_lock)
static void *x25_seq_socket_next(struct seq_file *seq, void *v, loff_t *pos)
static void x25_seq_socket_stop(struct seq_file *seq, void *v)
__releases(x25_list_lock)
static int x25_seq_socket_show(struct seq_file *seq, void *v)
static void *x25_seq_forward_start(struct seq_file *seq, loff_t *pos)
__acquires(x25_forward_list_lock)
static void *x25_seq_forward_next(struct seq_file *seq, void *v, loff_t *pos)
static void x25_seq_forward_stop(struct seq_file *seq, void *v)
__releases(x25_forward_list_lock)
static int x25_seq_forward_show(struct seq_file *seq, void *v)
static const struct seq_operations x25_seq_route_ops = ;
static const struct seq_operations x25_seq_socket_ops = ;
static const struct seq_operations x25_seq_forward_ops = ;
static int x25_seq_socket_open(struct inode *inode, struct file *file)
static int x25_seq_route_open(struct inode *inode, struct file *file)
static int x25_seq_forward_open(struct inode *inode, struct file *file)
static const struct file_operations x25_seq_socket_fops = ;
static const struct file_operations x25_seq_route_fops = ;
static const struct file_operations x25_seq_forward_fops = ;
static struct proc_dir_entry *x25_proc_dir;
int __init x25_proc_init(void)
void __exit x25_proc_exit(void)
int __init x25_proc_init(void)
void __exit x25_proc_exit(void)
