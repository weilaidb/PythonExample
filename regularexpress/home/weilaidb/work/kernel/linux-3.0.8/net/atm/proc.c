static ssize_t proc_dev_atm_read(struct file *file, char __user *buf,
size_t count, loff_t *pos);
static const struct file_operations proc_atm_dev_ops = ;
static void add_stats(struct seq_file *seq, const char *aal,
const struct k_atm_aal_stats *stats)
static void atm_dev_info(struct seq_file *seq, const struct atm_dev *dev)
struct vcc_state ;
static inline int compare_family(struct sock *sk, int family)
static int __vcc_walk(struct sock **sock, int family, int *bucket, loff_t l)
static inline void *vcc_walk(struct vcc_state *state, loff_t l)
static int __vcc_seq_open(struct inode *inode, struct file *file,
int family, const struct seq_operations *ops)
static void *vcc_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(vcc_sklist_lock)
static void vcc_seq_stop(struct seq_file *seq, void *v)
__releases(vcc_sklist_lock)
static void *vcc_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void pvc_info(struct seq_file *seq, struct atm_vcc *vcc)
static const char *vcc_state(struct atm_vcc *vcc)
static void vcc_info(struct seq_file *seq, struct atm_vcc *vcc)
static void svc_info(struct seq_file *seq, struct atm_vcc *vcc)
static int atm_dev_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations atm_dev_seq_ops = ;
static int atm_dev_seq_open(struct inode *inode, struct file *file)
static const struct file_operations devices_seq_fops = ;
static int pvc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations pvc_seq_ops = ;
static int pvc_seq_open(struct inode *inode, struct file *file)
static const struct file_operations pvc_seq_fops = ;
static int vcc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations vcc_seq_ops = ;
static int vcc_seq_open(struct inode *inode, struct file *file)
static const struct file_operations vcc_seq_fops = ;
static int svc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations svc_seq_ops = ;
static int svc_seq_open(struct inode *inode, struct file *file)
static const struct file_operations svc_seq_fops = ;
static ssize_t proc_dev_atm_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
struct proc_dir_entry *atm_proc_root;
EXPORT_SYMBOL(atm_proc_root);
int atm_proc_dev_register(struct atm_dev *dev)
void atm_proc_dev_deregister(struct atm_dev *dev)
static struct atm_proc_entry  atm_proc_ents[] = ;
static void atm_proc_dirs_remove(void)
int __init atm_proc_init(void)
void atm_proc_exit(void)
