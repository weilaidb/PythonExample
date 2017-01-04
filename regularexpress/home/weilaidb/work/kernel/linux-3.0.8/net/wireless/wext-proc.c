static void wireless_seq_printf_stats(struct seq_file *seq,
struct net_device *dev)
static int wireless_dev_seq_show(struct seq_file *seq, void *v)
static void *wireless_dev_seq_start(struct seq_file *seq, loff_t *pos)
static void *wireless_dev_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void wireless_dev_seq_stop(struct seq_file *seq, void *v)
static const struct seq_operations wireless_seq_ops = ;
static int seq_open_wireless(struct inode *inode, struct file *file)
static const struct file_operations wireless_seq_fops = ;
int __net_init wext_proc_init(struct net *net)
void __net_exit wext_proc_exit(struct net *net)
