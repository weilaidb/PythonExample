static struct inode *get_inode(struct super_block *, struct dentry *);
struct hppfs_data ;
struct hppfs_private ;
struct hppfs_inode_info ;
static inline struct hppfs_inode_info *HPPFS_I(struct inode *inode)
#define HPPFS_SUPER_MAGIC 0xb00000ee
static const struct super_operations hppfs_sbops;
static int is_pid(struct dentry *dentry)
static char *dentry_name(struct dentry *dentry, int extra)
static int file_removed(struct dentry *dentry, const char *file)
static struct dentry *hppfs_lookup(struct inode *ino, struct dentry *dentry,
struct nameidata *nd)
static const struct inode_operations hppfs_file_iops = ;
static ssize_t read_proc(struct file *file, char __user *buf, ssize_t count,
loff_t *ppos, int is_user)
static ssize_t hppfs_read_file(int fd, char __user *buf, ssize_t count)
static ssize_t hppfs_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static ssize_t hppfs_write(struct file *file, const char __user *buf,
size_t len, loff_t *ppos)
static int open_host_sock(char *host_file, int *filter_out)
static void free_contents(struct hppfs_data *head)
static struct hppfs_data *hppfs_get_data(int fd, int filter,
struct file *proc_file,
struct file *hppfs_file,
loff_t *size_out)
static struct hppfs_private *hppfs_data(void)
static int file_mode(int fmode)
static int hppfs_open(struct inode *inode, struct file *file)
static int hppfs_dir_open(struct inode *inode, struct file *file)
static loff_t hppfs_llseek(struct file *file, loff_t off, int where)
static const struct file_operations hppfs_file_fops = ;
struct hppfs_dirent ;
static int hppfs_filldir(void *d, const char *name, int size,
loff_t offset, u64 inode, unsigned int type)
static int hppfs_readdir(struct file *file, void *ent, filldir_t filldir)
static int hppfs_fsync(struct file *file, int datasync)
static const struct file_operations hppfs_dir_fops = ;
static int hppfs_statfs(struct dentry *dentry, struct kstatfs *sf)
static struct inode *hppfs_alloc_inode(struct super_block *sb)
void hppfs_evict_inode(struct inode *ino)
static void hppfs_i_callback(struct rcu_head *head)
static void hppfs_destroy_inode(struct inode *inode)
static const struct super_operations hppfs_sbops = ;
static int hppfs_readlink(struct dentry *dentry, char __user *buffer,
int buflen)
static void *hppfs_follow_link(struct dentry *dentry, struct nameidata *nd)
static void hppfs_put_link(struct dentry *dentry, struct nameidata *nd,
void *cookie)
static const struct inode_operations hppfs_dir_iops = ;
static const struct inode_operations hppfs_link_iops = ;
static struct inode *get_inode(struct super_block *sb, struct dentry *dentry)
static int hppfs_fill_super(struct super_block *sb, void *d, int silent)
static struct dentry *hppfs_read_super(struct file_system_type *type,
int flags, const char *dev_name,
void *data)
static struct file_system_type hppfs_type = ;
static int __init init_hppfs(void)
static void __exit exit_hppfs(void)
module_init(init_hppfs)
module_exit(exit_hppfs)
MODULE_LICENSE("GPL");
