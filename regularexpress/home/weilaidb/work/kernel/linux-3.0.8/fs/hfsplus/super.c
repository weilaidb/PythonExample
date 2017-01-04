static struct inode *hfsplus_alloc_inode(struct super_block *sb);
static void hfsplus_destroy_inode(struct inode *inode);
static int hfsplus_system_read_inode(struct inode *inode)
struct inode *hfsplus_iget(struct super_block *sb, unsigned long ino)
static int hfsplus_system_write_inode(struct inode *inode)
static int hfsplus_write_inode(struct inode *inode,
struct writeback_control *wbc)
static void hfsplus_evict_inode(struct inode *inode)
int hfsplus_sync_fs(struct super_block *sb, int wait)
static void hfsplus_write_super(struct super_block *sb)
static void hfsplus_put_super(struct super_block *sb)
static int hfsplus_statfs(struct dentry *dentry, struct kstatfs *buf)
static int hfsplus_remount(struct super_block *sb, int *flags, char *data)
static const struct super_operations hfsplus_sops = ;
static int hfsplus_fill_super(struct super_block *sb, void *data, int silent)
MODULE_AUTHOR("Brad Boyer");
MODULE_DESCRIPTION("Extended Macintosh Filesystem");
MODULE_LICENSE("GPL");
static struct kmem_cache *hfsplus_inode_cachep;
static struct inode *hfsplus_alloc_inode(struct super_block *sb)
static void hfsplus_i_callback(struct rcu_head *head)
static void hfsplus_destroy_inode(struct inode *inode)
#define HFSPLUS_INODE_SIZE	sizeof(struct hfsplus_inode_info)
static struct dentry *hfsplus_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type hfsplus_fs_type = ;
static void hfsplus_init_once(void *p)
static int __init init_hfsplus_fs(void)
static void __exit exit_hfsplus_fs(void)
module_init(init_hfsplus_fs)
module_exit(exit_hfsplus_fs)
