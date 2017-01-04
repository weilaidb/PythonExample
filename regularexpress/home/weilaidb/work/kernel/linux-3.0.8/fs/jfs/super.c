MODULE_DESCRIPTION("The Journaled Filesystem (JFS)");
MODULE_AUTHOR("Steve Best/Dave Kleikamp/Barry Arndt, IBM");
MODULE_LICENSE("GPL");
static struct kmem_cache * jfs_inode_cachep;
static const struct super_operations jfs_super_operations;
static const struct export_operations jfs_export_operations;
static struct file_system_type jfs_fs_type;
#define MAX_COMMIT_THREADS 64
static int commit_threads = 0;
module_param(commit_threads, int, 0);
MODULE_PARM_DESC(commit_threads, "Number of commit threads");
static struct task_struct *jfsCommitThread[MAX_COMMIT_THREADS];
struct task_struct *jfsIOthread;
struct task_struct *jfsSyncThread;
int jfsloglevel = JFS_LOGLEVEL_WARN;
module_param(jfsloglevel, int, 0644);
MODULE_PARM_DESC(jfsloglevel, "Specify JFS loglevel (0, 1 or 2)");
static void jfs_handle_error(struct super_block *sb)
void jfs_error(struct super_block *sb, const char * function, ...)
static struct inode *jfs_alloc_inode(struct super_block *sb)
static void jfs_i_callback(struct rcu_head *head)
static void jfs_destroy_inode(struct inode *inode)
static int jfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static void jfs_put_super(struct super_block *sb)
enum ;
static const match_table_t tokens = ;
static int parse_options(char *options, struct super_block *sb, s64 *newLVSize,
int *flag)
static int jfs_remount(struct super_block *sb, int *flags, char *data)
static int jfs_fill_super(struct super_block *sb, void *data, int silent)
static int jfs_freeze(struct super_block *sb)
static int jfs_unfreeze(struct super_block *sb)
static struct dentry *jfs_do_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static int jfs_sync_fs(struct super_block *sb, int wait)
static int jfs_show_options(struct seq_file *seq, struct vfsmount *vfs)
static ssize_t jfs_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off)
static ssize_t jfs_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off)
static const struct super_operations jfs_super_operations = ;
static const struct export_operations jfs_export_operations = ;
static struct file_system_type jfs_fs_type = ;
static void init_once(void *foo)
static int __init init_jfs_fs(void)
static void __exit exit_jfs_fs(void)
module_init(init_jfs_fs)
module_exit(exit_jfs_fs)
