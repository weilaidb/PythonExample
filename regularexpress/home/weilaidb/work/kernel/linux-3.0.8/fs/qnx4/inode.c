#define QNX4_VERSION  4
#define QNX4_BMNAME   ".bitmap"
static const struct super_operations qnx4_sops;
static void qnx4_put_super(struct super_block *sb);
static struct inode *qnx4_alloc_inode(struct super_block *sb);
static void qnx4_destroy_inode(struct inode *inode);
static int qnx4_remount(struct super_block *sb, int *flags, char *data);
static int qnx4_statfs(struct dentry *, struct kstatfs *);
static const struct super_operations qnx4_sops =
;
static int qnx4_remount(struct super_block *sb, int *flags, char *data)
static struct buffer_head *qnx4_getblk(struct inode *inode, int nr,
int create)
struct buffer_head *qnx4_bread(struct inode *inode, int block, int create)
static int qnx4_get_block( struct inode *inode, sector_t iblock, struct buffer_head *bh, int create )
unsigned long qnx4_block_map( struct inode *inode, long iblock )
static int qnx4_statfs(struct dentry *dentry, struct kstatfs *buf)
static const char *qnx4_checkroot(struct super_block *sb)
static int qnx4_fill_super(struct super_block *s, void *data, int silent)
static void qnx4_put_super(struct super_block *sb)
static int qnx4_writepage(struct page *page, struct writeback_control *wbc)
static int qnx4_readpage(struct file *file, struct page *page)
static int qnx4_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t qnx4_bmap(struct address_space *mapping, sector_t block)
static const struct address_space_operations qnx4_aops = ;
struct inode *qnx4_iget(struct super_block *sb, unsigned long ino)
static struct kmem_cache *qnx4_inode_cachep;
static struct inode *qnx4_alloc_inode(struct super_block *sb)
static void qnx4_i_callback(struct rcu_head *head)
static void qnx4_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static struct dentry *qnx4_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type qnx4_fs_type = ;
static int __init init_qnx4_fs(void)
static void __exit exit_qnx4_fs(void)
module_init(init_qnx4_fs)
module_exit(exit_qnx4_fs)
MODULE_LICENSE("GPL");
