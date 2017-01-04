void irlmp_add_discovery(hashbin_t *cachelog, discovery_t *new)
void irlmp_add_discovery_log(hashbin_t *cachelog, hashbin_t *log)
void irlmp_expire_discoveries(hashbin_t *log, __u32 saddr, int force)
struct irda_device_info *irlmp_copy_discoveries(hashbin_t *log, int *pn,
__u16 mask, int old_entries)
static inline discovery_t *discovery_seq_idx(loff_t pos)
static void *discovery_seq_start(struct seq_file *seq, loff_t *pos)
static void *discovery_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void discovery_seq_stop(struct seq_file *seq, void *v)
static int discovery_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations discovery_seq_ops = ;
static int discovery_seq_open(struct inode *inode, struct file *file)
const struct file_operations discovery_seq_fops = ;
