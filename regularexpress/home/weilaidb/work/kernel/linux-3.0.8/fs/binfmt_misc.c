enum ;
static LIST_HEAD(entries);
static int enabled = 1;
enum ;
#define MISC_FMT_PRESERVE_ARGV0 (1<<31)
#define MISC_FMT_OPEN_BINARY (1<<30)
#define MISC_FMT_CREDENTIALS (1<<29)
typedef struct  Node;
static DEFINE_RWLOCK(entries_lock);
static struct file_system_type bm_fs_type;
static struct vfsmount *bm_mnt;
static int entry_count;
static Node *check_file(struct linux_binprm *bprm)
static int load_misc_binary(struct linux_binprm *bprm, struct pt_regs *regs)
static char *scanarg(char *s, char del)
static int unquote(char *from)
static char * check_special_flags (char * sfs, Node * e)
static Node *create_entry(const char __user *buffer, size_t count)
static int parse_command(const char __user *buffer, size_t count)
static void entry_status(Node *e, char *page)
static struct inode *bm_get_inode(struct super_block *sb, int mode)
static void bm_evict_inode(struct inode *inode)
static void kill_node(Node *e)
static ssize_t
bm_entry_read(struct file * file, char __user * buf, size_t nbytes, loff_t *ppos)
static ssize_t bm_entry_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations bm_entry_operations = ;
static ssize_t bm_register_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations bm_register_operations = ;
static ssize_t
bm_status_read(struct file *file, char __user *buf, size_t nbytes, loff_t *ppos)
static ssize_t bm_status_write(struct file * file, const char __user * buffer,
size_t count, loff_t *ppos)
static const struct file_operations bm_status_operations = ;
static const struct super_operations s_ops = ;
static int bm_fill_super(struct super_block * sb, void * data, int silent)
static struct dentry *bm_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct linux_binfmt misc_format = ;
static struct file_system_type bm_fs_type = ;
static int __init init_misc_binfmt(void)
static void __exit exit_misc_binfmt(void)
core_initcall(init_misc_binfmt);
module_exit(exit_misc_binfmt);
MODULE_LICENSE("GPL");
