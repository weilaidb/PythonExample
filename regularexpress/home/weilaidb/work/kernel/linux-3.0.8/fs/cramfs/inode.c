static const struct super_operations cramfs_ops;
static const struct inode_operations cramfs_dir_inode_operations;
static const struct file_operations cramfs_directory_operations;
static const struct address_space_operations cramfs_aops;
static DEFINE_MUTEX(read_mutex);
#define OFFSET(x)	((x)->i_ino)
static unsigned long cramino(const struct cramfs_inode *cino, unsigned int offset)
static struct inode *get_cramfs_inode(struct super_block *sb,
const struct cramfs_inode *cramfs_inode, unsigned int offset)
#define READ_BUFFERS (2)
#define NEXT_BUFFER(_ix) ((_ix) ^ 1)
#define BLKS_PER_BUF_SHIFT	(2)
#define BLKS_PER_BUF		(1 << BLKS_PER_BUF_SHIFT)
#define BUFFER_SIZE		(BLKS_PER_BUF*PAGE_CACHE_SIZE)
static unsigned char read_buffers[READ_BUFFERS][BUFFER_SIZE];
static unsigned buffer_blocknr[READ_BUFFERS];
static struct super_block * buffer_dev[READ_BUFFERS];
static int next_buffer;
static void *cramfs_read(struct super_block *sb, unsigned int offset, unsigned int len)
static void cramfs_put_super(struct super_block *sb)
static int cramfs_remount(struct super_block *sb, int *flags, char *data)
static int cramfs_fill_super(struct super_block *sb, void *data, int silent)
static int cramfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int cramfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
static struct dentry * cramfs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static int cramfs_readpage(struct file *file, struct page * page)
static const struct address_space_operations cramfs_aops = ;
static const struct file_operations cramfs_directory_operations = ;
static const struct inode_operations cramfs_dir_inode_operations = ;
static const struct super_operations cramfs_ops = ;
static struct dentry *cramfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type cramfs_fs_type = ;
static int __init init_cramfs_fs(void)
static void __exit exit_cramfs_fs(void)
module_init(init_cramfs_fs)
module_exit(exit_cramfs_fs)
MODULE_LICENSE("GPL");
