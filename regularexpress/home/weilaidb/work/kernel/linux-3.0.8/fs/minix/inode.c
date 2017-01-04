static int minix_write_inode(struct inode *inode,
struct writeback_control *wbc);
static int minix_statfs(struct dentry *dentry, struct kstatfs *buf);
static int minix_remount (struct super_block * sb, int * flags, char * data);
static void minix_evict_inode(struct inode *inode)
static void minix_put_super(struct super_block *sb)
static struct kmem_cache * minix_inode_cachep;
static struct inode *minix_alloc_inode(struct super_block *sb)
static void minix_i_callback(struct rcu_head *head)
static void minix_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static const struct super_operations minix_sops = ;
static int minix_remount (struct super_block * sb, int * flags, char * data)
static int minix_fill_super(struct super_block *s, void *data, int silent)
static int minix_statfs(struct dentry *dentry, struct kstatfs *buf)
static int minix_get_block(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create)
static int minix_writepage(struct page *page, struct writeback_control *wbc)
static int minix_readpage(struct file *file, struct page *page)
int minix_prepare_chunk(struct page *page, loff_t pos, unsigned len)
static int minix_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t minix_bmap(struct address_space *mapping, sector_t block)
static const struct address_space_operations minix_aops = ;
static const struct inode_operations minix_symlink_inode_operations = ;
void minix_set_inode(struct inode *inode, dev_t rdev)
static struct inode *V1_minix_iget(struct inode *inode)
static struct inode *V2_minix_iget(struct inode *inode)
struct inode *minix_iget(struct super_block *sb, unsigned long ino)
static struct buffer_head * V1_minix_update_inode(struct inode * inode)
static struct buffer_head * V2_minix_update_inode(struct inode * inode)
static int minix_write_inode(struct inode *inode, struct writeback_control *wbc)
int minix_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
void minix_truncate(struct inode * inode)
static struct dentry *minix_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type minix_fs_type = ;
static int __init init_minix_fs(void)
static void __exit exit_minix_fs(void)
module_init(init_minix_fs)
module_exit(exit_minix_fs)
MODULE_LICENSE("GPL");
