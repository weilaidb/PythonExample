static void llc_ui_format_mac(struct seq_file *seq, u8 *addr)
static struct sock *llc_get_sk_idx(loff_t pos)
static void *llc_seq_start(struct seq_file *seq, loff_t *pos)
static struct sock *laddr_hash_next(struct llc_sap *sap, int bucket)
static void *llc_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void llc_seq_stop(struct seq_file *seq, void *v)
static int llc_seq_socket_show(struct seq_file *seq, void *v)
static const char *const llc_conn_state_names[] = ;
static int llc_seq_core_show(struct seq_file *seq, void *v)
static const struct seq_operations llc_seq_socket_ops = ;
static const struct seq_operations llc_seq_core_ops = ;
static int llc_seq_socket_open(struct inode *inode, struct file *file)
static int llc_seq_core_open(struct inode *inode, struct file *file)
static const struct file_operations llc_seq_socket_fops = ;
static const struct file_operations llc_seq_core_fops = ;
static struct proc_dir_entry *llc_proc_dir;
int __init llc_proc_init(void)
void llc_proc_exit(void)
