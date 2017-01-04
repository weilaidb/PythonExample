static char *policycap_names[] = ;
unsigned int selinux_checkreqprot = CONFIG_SECURITY_SELINUX_CHECKREQPROT_VALUE;
static int __init checkreqprot_setup(char *str)
__setup("checkreqprot=", checkreqprot_setup);
static DEFINE_MUTEX(sel_mutex);
static struct dentry *bool_dir;
static int bool_num;
static char **bool_pending_names;
static int *bool_pending_values;
static struct dentry *class_dir;
static unsigned long last_class_ino;
static char policy_opened;
static struct dentry *policycap_dir;
extern void selnl_notify_setenforce(int val);
static int task_has_security(struct task_struct *tsk,
u32 perms)
enum sel_inos ;
static unsigned long sel_last_ino = SEL_INO_NEXT - 1;
#define SEL_INITCON_INO_OFFSET		0x01000000
#define SEL_BOOL_INO_OFFSET		0x02000000
#define SEL_CLASS_INO_OFFSET		0x04000000
#define SEL_POLICYCAP_INO_OFFSET	0x08000000
#define SEL_INO_MASK			0x00ffffff
#define TMPBUFLEN	12
static ssize_t sel_read_enforce(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t sel_write_enforce(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
#define sel_write_enforce NULL
static const struct file_operations sel_enforce_ops = ;
static ssize_t sel_read_handle_unknown(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_handle_unknown_ops = ;
static int sel_open_handle_status(struct inode *inode, struct file *filp)
static ssize_t sel_read_handle_status(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static int sel_mmap_handle_status(struct file *filp,
struct vm_area_struct *vma)
static const struct file_operations sel_handle_status_ops = ;
static ssize_t sel_write_disable(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
#define sel_write_disable NULL
static const struct file_operations sel_disable_ops = ;
static ssize_t sel_read_policyvers(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_policyvers_ops = ;
static int sel_make_bools(void);
static int sel_make_classes(void);
static int sel_make_policycap(void);
static int sel_make_dir(struct inode *dir, struct dentry *dentry,
unsigned long *ino);
static ssize_t sel_read_mls(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_mls_ops = ;
struct policy_load_memory ;
static int sel_open_policy(struct inode *inode, struct file *filp)
static int sel_release_policy(struct inode *inode, struct file *filp)
static ssize_t sel_read_policy(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static int sel_mmap_policy_fault(struct vm_area_struct *vma,
struct vm_fault *vmf)
static struct vm_operations_struct sel_mmap_policy_ops = ;
int sel_mmap_policy(struct file *filp, struct vm_area_struct *vma)
static const struct file_operations sel_policy_ops = ;
static ssize_t sel_write_load(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_load_ops = ;
static ssize_t sel_write_context(struct file *file, char *buf, size_t size)
static ssize_t sel_read_checkreqprot(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t sel_write_checkreqprot(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_checkreqprot_ops = ;
static ssize_t sel_write_access(struct file *file, char *buf, size_t size);
static ssize_t sel_write_create(struct file *file, char *buf, size_t size);
static ssize_t sel_write_relabel(struct file *file, char *buf, size_t size);
static ssize_t sel_write_user(struct file *file, char *buf, size_t size);
static ssize_t sel_write_member(struct file *file, char *buf, size_t size);
static ssize_t (*write_op[])(struct file *, char *, size_t) = ;
static ssize_t selinux_transaction_write(struct file *file, const char __user *buf, size_t size, loff_t *pos)
static const struct file_operations transaction_ops = ;
static ssize_t sel_write_access(struct file *file, char *buf, size_t size)
static inline int hexcode_to_int(int code)
static ssize_t sel_write_create(struct file *file, char *buf, size_t size)
static ssize_t sel_write_relabel(struct file *file, char *buf, size_t size)
static ssize_t sel_write_user(struct file *file, char *buf, size_t size)
static ssize_t sel_write_member(struct file *file, char *buf, size_t size)
static struct inode *sel_make_inode(struct super_block *sb, int mode)
static ssize_t sel_read_bool(struct file *filep, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t sel_write_bool(struct file *filep, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_bool_ops = ;
static ssize_t sel_commit_bools_write(struct file *filep,
const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_commit_bools_ops = ;
static void sel_remove_entries(struct dentry *de)
#define BOOL_DIR_NAME "booleans"
static int sel_make_bools(void)
#define NULL_FILE_NAME "null"
struct dentry *selinux_null;
static ssize_t sel_read_avc_cache_threshold(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t sel_write_avc_cache_threshold(struct file *file,
const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t sel_read_avc_hash_stats(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_avc_cache_threshold_ops = ;
static const struct file_operations sel_avc_hash_stats_ops = ;
static struct avc_cache_stats *sel_avc_get_stat_idx(loff_t *idx)
static void *sel_avc_stats_seq_start(struct seq_file *seq, loff_t *pos)
static void *sel_avc_stats_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static int sel_avc_stats_seq_show(struct seq_file *seq, void *v)
static void sel_avc_stats_seq_stop(struct seq_file *seq, void *v)
static const struct seq_operations sel_avc_cache_stats_seq_ops = ;
static int sel_open_avc_cache_stats(struct inode *inode, struct file *file)
static const struct file_operations sel_avc_cache_stats_ops = ;
static int sel_make_avc_files(struct dentry *dir)
static ssize_t sel_read_initcon(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_initcon_ops = ;
static int sel_make_initcon_files(struct dentry *dir)
static inline unsigned int sel_div(unsigned long a, unsigned long b)
static inline unsigned long sel_class_to_ino(u16 class)
static inline u16 sel_ino_to_class(unsigned long ino)
static inline unsigned long sel_perm_to_ino(u16 class, u32 perm)
static inline u32 sel_ino_to_perm(unsigned long ino)
static ssize_t sel_read_class(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_class_ops = ;
static ssize_t sel_read_perm(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_perm_ops = ;
static ssize_t sel_read_policycap(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations sel_policycap_ops = ;
static int sel_make_perm_files(char *objclass, int classvalue,
struct dentry *dir)
static int sel_make_class_dir_entries(char *classname, int index,
struct dentry *dir)
static void sel_remove_classes(void)
static int sel_make_classes(void)
static int sel_make_policycap(void)
static int sel_make_dir(struct inode *dir, struct dentry *dentry,
unsigned long *ino)
static int sel_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *sel_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type sel_fs_type = ;
struct vfsmount *selinuxfs_mount;
static struct kobject *selinuxfs_kobj;
static int __init init_sel_fs(void)
__initcall(init_sel_fs);
void exit_sel_fs(void)
