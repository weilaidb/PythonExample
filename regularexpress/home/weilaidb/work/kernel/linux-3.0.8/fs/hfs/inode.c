static const struct file_operations hfs_file_operations;
static const struct inode_operations hfs_file_inode_operations;
#define HFS_VALID_MODE_BITS  (S_IFREG | S_IFDIR | S_IRWXUGO)
static int hfs_writepage(struct page *page, struct writeback_control *wbc)
static int hfs_readpage(struct file *file, struct page *page)
static int hfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t hfs_bmap(struct address_space *mapping, sector_t block)
static int hfs_releasepage(struct page *page, gfp_t mask)
static ssize_t hfs_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset, unsigned long nr_segs)
static int hfs_writepages(struct address_space *mapping,
struct writeback_control *wbc)
const struct address_space_operations hfs_btree_aops = ;
const struct address_space_operations hfs_aops = ;
struct inode *hfs_new_inode(struct inode *dir, struct qstr *name, int mode)
void hfs_delete_inode(struct inode *inode)
void hfs_inode_read_fork(struct inode *inode, struct hfs_extent *ext,
__be32 __log_size, __be32 phys_size, u32 clump_size)
struct hfs_iget_data ;
static int hfs_test_inode(struct inode *inode, void *data)
static int hfs_read_inode(struct inode *inode, void *data)
struct inode *hfs_iget(struct super_block *sb, struct hfs_cat_key *key, hfs_cat_rec *rec)
void hfs_inode_write_fork(struct inode *inode, struct hfs_extent *ext,
__be32 *log_size, __be32 *phys_size)
int hfs_write_inode(struct inode *inode, struct writeback_control *wbc)
static struct dentry *hfs_file_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
void hfs_evict_inode(struct inode *inode)
static int hfs_file_open(struct inode *inode, struct file *file)
static int hfs_file_release(struct inode *inode, struct file *file)
int hfs_inode_setattr(struct dentry *dentry, struct iattr * attr)
static int hfs_file_fsync(struct file *filp, int datasync)
static const struct file_operations hfs_file_operations = ;
static const struct inode_operations hfs_file_inode_operations = ;
