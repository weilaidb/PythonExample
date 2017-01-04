static HLIST_HEAD(ax25_uid_list);
static DEFINE_RWLOCK(ax25_uid_lock);
int ax25_uid_policy;
EXPORT_SYMBOL(ax25_uid_policy);
ax25_uid_assoc *ax25_findbyuid(uid_t uid)
EXPORT_SYMBOL(ax25_findbyuid);
int ax25_uid_ioctl(int cmd, struct sockaddr_ax25 *sax)
static void *ax25_uid_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(ax25_uid_lock)
static void *ax25_uid_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ax25_uid_seq_stop(struct seq_file *seq, void *v)
__releases(ax25_uid_lock)
static int ax25_uid_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ax25_uid_seqops = ;
static int ax25_uid_info_open(struct inode *inode, struct file *file)
const struct file_operations ax25_uid_fops = ;
void __exit ax25_uid_free(void)
