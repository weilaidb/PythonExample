static int
adfs_get_block(struct inode *inode, sector_t block, struct buffer_head *bh,
int create)
static int adfs_writepage(struct page *page, struct writeback_control *wbc)
static int adfs_readpage(struct file *file, struct page *page)
static int adfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t _adfs_bmap(struct address_space *mapping, sector_t block)
static const struct address_space_operations adfs_aops = ;
static umode_t
adfs_atts2mode(struct super_block *sb, struct inode *inode)
static int
adfs_mode2atts(struct super_block *sb, struct inode *inode)
static void
adfs_adfs2unix_time(struct timespec *tv, struct inode *inode)
static void
adfs_unix2adfs_time(struct inode *inode, unsigned int secs)
struct inode *
adfs_iget(struct super_block *sb, struct object_info *obj)
int
adfs_notify_change(struct dentry *dentry, struct iattr *attr)
int adfs_write_inode(struct inode *inode, struct writeback_control *wbc)
