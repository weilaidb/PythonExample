static int logfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int logfs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied, struct page *page,
void *fsdata)
int logfs_readpage(struct file *file, struct page *page)
static void clear_radix_tree_dirty(struct page *page)
static int __logfs_writepage(struct page *page)
static int logfs_writepage(struct page *page, struct writeback_control *wbc)
static void logfs_invalidatepage(struct page *page, unsigned long offset)
static int logfs_releasepage(struct page *page, gfp_t only_xfs_uses_this)
long logfs_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
int logfs_fsync(struct file *file, int datasync)
static int logfs_setattr(struct dentry *dentry, struct iattr *attr)
const struct inode_operations logfs_reg_iops = ;
const struct file_operations logfs_reg_fops = ;
const struct address_space_operations logfs_reg_aops = ;
