static struct dentry *dbgfs_root;
static struct dentry *dbgfs_file_io;
static struct dentry *dbgfs_file_info;
static struct dentry *dbgfs_file_board;
#define print_ns(x) ((x) / 10), ((x) % 10)
static void show_max(struct seq_file *seq, struct s3c_freq *f)
static int board_show(struct seq_file *seq, void *p)
static int fops_board_open(struct inode *inode, struct file *file)
static const struct file_operations fops_board = ;
static int info_show(struct seq_file *seq, void *p)
static int fops_info_open(struct inode *inode, struct file *file)
static const struct file_operations fops_info = ;
static int io_show(struct seq_file *seq, void *p)
static int fops_io_open(struct inode *inode, struct file *file)
static const struct file_operations fops_io = ;
static int __init s3c_freq_debugfs_init(void)
late_initcall(s3c_freq_debugfs_init);
