DEFINE_SPINLOCK(proc_subdir_lock);
static int proc_match(unsigned int len, const char *name, struct proc_dir_entry *de)
#define PROC_BLOCK_SIZE	(PAGE_SIZE - 1024)
static ssize_t
__proc_file_read(struct file *file, char __user *buf, size_t nbytes,
loff_t *ppos)
static ssize_t
proc_file_read(struct file *file, char __user *buf, size_t nbytes,
loff_t *ppos)
static ssize_t
proc_file_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static loff_t
proc_file_lseek(struct file *file, loff_t offset, int orig)
static const struct file_operations proc_file_operations = ;
static int proc_notify_change(struct dentry *dentry, struct iattr *iattr)
static int proc_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
static const struct inode_operations proc_file_inode_operations = ;
static int __xlate_proc_name(const char *name, struct proc_dir_entry **ret,
const char **residual)
static int xlate_proc_name(const char *name, struct proc_dir_entry **ret,
const char **residual)
static DEFINE_IDA(proc_inum_ida);
static DEFINE_SPINLOCK(proc_inum_lock);
#define PROC_DYNAMIC_FIRST 0xF0000000U
static unsigned int get_inode_number(void)
static void release_inode_number(unsigned int inum)
static void *proc_follow_link(struct dentry *dentry, struct nameidata *nd)
static const struct inode_operations proc_link_inode_operations = ;
static int proc_delete_dentry(const struct dentry * dentry)
static const struct dentry_operations proc_dentry_operations =
;
struct dentry *proc_lookup_de(struct proc_dir_entry *de, struct inode *dir,
struct dentry *dentry)
struct dentry *proc_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
int proc_readdir_de(struct proc_dir_entry *de, struct file *filp, void *dirent,
filldir_t filldir)
int proc_readdir(struct file *filp, void *dirent, filldir_t filldir)
static const struct file_operations proc_dir_operations = ;
static const struct inode_operations proc_dir_inode_operations = ;
static int proc_register(struct proc_dir_entry * dir, struct proc_dir_entry * dp)
static struct proc_dir_entry *__proc_create(struct proc_dir_entry **parent,
const char *name,
mode_t mode,
nlink_t nlink)
struct proc_dir_entry *proc_symlink(const char *name,
struct proc_dir_entry *parent, const char *dest)
EXPORT_SYMBOL(proc_symlink);
struct proc_dir_entry *proc_mkdir_mode(const char *name, mode_t mode,
struct proc_dir_entry *parent)
EXPORT_SYMBOL(proc_mkdir_mode);
struct proc_dir_entry *proc_net_mkdir(struct net *net, const char *name,
struct proc_dir_entry *parent)
EXPORT_SYMBOL_GPL(proc_net_mkdir);
struct proc_dir_entry *proc_mkdir(const char *name,
struct proc_dir_entry *parent)
EXPORT_SYMBOL(proc_mkdir);
struct proc_dir_entry *create_proc_entry(const char *name, mode_t mode,
struct proc_dir_entry *parent)
EXPORT_SYMBOL(create_proc_entry);
struct proc_dir_entry *proc_create_data(const char *name, mode_t mode,
struct proc_dir_entry *parent,
const struct file_operations *proc_fops,
void *data)
EXPORT_SYMBOL(proc_create_data);
static void free_proc_entry(struct proc_dir_entry *de)
void pde_put(struct proc_dir_entry *pde)
void remove_proc_entry(const char *name, struct proc_dir_entry *parent)
EXPORT_SYMBOL(remove_proc_entry);
