#define	PSTORE_NAMELEN	64
struct pstore_private ;
static int pstore_file_open(struct inode *inode, struct file *file)
static ssize_t pstore_file_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations pstore_file_operations = ;
static int pstore_unlink(struct inode *dir, struct dentry *dentry)
static void pstore_evict_inode(struct inode *inode)
static const struct inode_operations pstore_dir_inode_operations = ;
static struct inode *pstore_get_inode(struct super_block *sb,
const struct inode *dir, int mode, dev_t dev)
enum ;
static const match_table_t tokens = ;
static void parse_options(char *options)
static int pstore_remount(struct super_block *sb, int *flags, char *data)
static const struct super_operations pstore_ops = ;
static struct super_block *pstore_sb;
int pstore_is_mounted(void)
int pstore_mkfile(enum pstore_type_id type, char *psname, u64 id,
char *data, size_t size,
struct timespec time, int (*erase)(u64))
int pstore_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *pstore_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static void pstore_kill_sb(struct super_block *sb)
static struct file_system_type pstore_fs_type = ;
static int __init init_pstore_fs(void)
module_init(init_pstore_fs)
MODULE_AUTHOR("Tony Luck <tony.luck@intel.com>");
MODULE_LICENSE("GPL");
