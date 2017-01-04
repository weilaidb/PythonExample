static int drbd_proc_open(struct inode *inode, struct file *file);
static int drbd_proc_release(struct inode *inode, struct file *file);
struct proc_dir_entry *drbd_proc;
const struct file_operations drbd_proc_fops = ;
void seq_printf_with_thousands_grouping(struct seq_file *seq, long v)
static void drbd_syncer_progress(struct drbd_conf *mdev, struct seq_file *seq)
static void resync_dump_detail(struct seq_file *seq, struct lc_element *e)
static int drbd_seq_show(struct seq_file *seq, void *v)
static int drbd_proc_open(struct inode *inode, struct file *file)
static int drbd_proc_release(struct inode *inode, struct file *file)
