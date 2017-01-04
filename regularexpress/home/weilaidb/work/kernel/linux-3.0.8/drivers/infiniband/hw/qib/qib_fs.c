#define QIBFS_MAGIC 0x726a77
static struct super_block *qib_super;
#define private2dd(file) ((file)->f_dentry->d_inode->i_private)
static int qibfs_mknod(struct inode *dir, struct dentry *dentry,
int mode, const struct file_operations *fops,
void *data)
static int create_file(const char *name, mode_t mode,
struct dentry *parent, struct dentry **dentry,
const struct file_operations *fops, void *data)
static ssize_t driver_stats_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const char qib_statnames[] =
"KernIntr\n"
"ErrorIntr\n"
"Tx_Errs\n"
"Rcv_Errs\n"
"H/W_Errs\n"
"NoPIOBufs\n"
"CtxtsOpen\n"
"RcvLen_Errs\n"
"EgrBufFull\n"
"EgrHdrFull\n"
;
static ssize_t driver_names_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations driver_ops[] = ;
static ssize_t dev_counters_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t dev_names_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations cntr_ops[] = ;
static ssize_t portnames_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t portcntrs_1_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t portcntrs_2_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations portcntr_ops[] = ;
static ssize_t qsfp_1_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t qsfp_2_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations qsfp_ops[] = ;
static ssize_t flash_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t flash_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations flash_ops = ;
static int add_cntr_files(struct super_block *sb, struct qib_devdata *dd)
static int remove_file(struct dentry *parent, char *name)
static int remove_device_files(struct super_block *sb,
struct qib_devdata *dd)
static int qibfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *qibfs_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data)
static void qibfs_kill_super(struct super_block *s)
int qibfs_add(struct qib_devdata *dd)
int qibfs_remove(struct qib_devdata *dd)
static struct file_system_type qibfs_fs_type = ;
int __init qib_init_qibfs(void)
int __exit qib_exit_qibfs(void)
