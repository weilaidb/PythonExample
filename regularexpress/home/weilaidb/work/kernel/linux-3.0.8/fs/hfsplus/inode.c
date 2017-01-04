static int hfsplus_readpage(struct file *file, struct page *page)
static int hfsplus_writepage(struct page *page, struct writeback_control *wbc)
static int hfsplus_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t hfsplus_bmap(struct address_space *mapping, sector_t block)
static int hfsplus_releasepage(struct page *page, gfp_t mask)
static ssize_t hfsplus_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset, unsigned long nr_segs)
static int hfsplus_writepages(struct address_space *mapping,
struct writeback_control *wbc)
const struct address_space_operations hfsplus_btree_aops = ;
const struct address_space_operations hfsplus_aops = ;
const struct dentry_operations hfsplus_dentry_operations = ;
static struct dentry *hfsplus_file_lookup(struct inode *dir,
struct dentry *dentry, struct nameidata *nd)
static void hfsplus_get_perms(struct inode *inode,
struct hfsplus_perm *perms, int dir)
static int hfsplus_file_open(struct inode *inode, struct file *file)
static int hfsplus_file_release(struct inode *inode, struct file *file)
static int hfsplus_setattr(struct dentry *dentry, struct iattr *attr)
int hfsplus_file_fsync(struct file *file, int datasync)
static const struct inode_operations hfsplus_file_inode_operations = ;
static const struct file_operations hfsplus_file_operations = ;
struct inode *hfsplus_new_inode(struct super_block *sb, int mode)
void hfsplus_delete_inode(struct inode *inode)
void hfsplus_inode_read_fork(struct inode *inode, struct hfsplus_fork_raw *fork)
void hfsplus_inode_write_fork(struct inode *inode,
struct hfsplus_fork_raw *fork)
int hfsplus_cat_read_inode(struct inode *inode, struct hfs_find_data *fd)
int hfsplus_cat_write_inode(struct inode *inode)
