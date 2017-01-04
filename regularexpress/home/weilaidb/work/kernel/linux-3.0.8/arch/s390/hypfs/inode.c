#define KMSG_COMPONENT "hypfs"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define HYPFS_MAGIC 0x687970
#define TMP_SIZE 64
static struct dentry *hypfs_create_update_file(struct super_block *sb,
struct dentry *dir);
struct hypfs_sb_info ;
static const struct file_operations hypfs_file_ops;
static struct file_system_type hypfs_type;
static const struct super_operations hypfs_s_ops;
static struct dentry *hypfs_last_dentry;
static void hypfs_update_update(struct super_block *sb)
static void hypfs_add_dentry(struct dentry *dentry)
static inline int hypfs_positive(struct dentry *dentry)
static void hypfs_remove(struct dentry *dentry)
static void hypfs_delete_tree(struct dentry *root)
static struct inode *hypfs_make_inode(struct super_block *sb, int mode)
static void hypfs_evict_inode(struct inode *inode)
static int hypfs_open(struct inode *inode, struct file *filp)
static ssize_t hypfs_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t offset)
static ssize_t hypfs_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t offset)
static int hypfs_release(struct inode *inode, struct file *filp)
enum ;
static const match_table_t hypfs_tokens = ;
static int hypfs_parse_options(char *options, struct super_block *sb)
static int hypfs_show_options(struct seq_file *s, struct vfsmount *mnt)
static int hypfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *hypfs_mount(struct file_system_type *fst, int flags,
const char *devname, void *data)
static void hypfs_kill_super(struct super_block *sb)
static struct dentry *hypfs_create_file(struct super_block *sb,
struct dentry *parent, const char *name,
char *data, mode_t mode)
struct dentry *hypfs_mkdir(struct super_block *sb, struct dentry *parent,
const char *name)
static struct dentry *hypfs_create_update_file(struct super_block *sb,
struct dentry *dir)
struct dentry *hypfs_create_u64(struct super_block *sb, struct dentry *dir,
const char *name, __u64 value)
struct dentry *hypfs_create_str(struct super_block *sb, struct dentry *dir,
const char *name, char *string)
static const struct file_operations hypfs_file_ops = ;
static struct file_system_type hypfs_type = ;
static const struct super_operations hypfs_s_ops = ;
static struct kobject *s390_kobj;
static int __init hypfs_init(void)
static void __exit hypfs_exit(void)
module_init(hypfs_init)
module_exit(hypfs_exit)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael Holzheu <holzheu@de.ibm.com>");
MODULE_DESCRIPTION("s390 Hypervisor Filesystem");
