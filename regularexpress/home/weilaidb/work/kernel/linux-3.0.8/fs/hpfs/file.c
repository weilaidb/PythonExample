#define BLOCKS(size) (((size) + 511) >> 9)
static int hpfs_file_release(struct inode *inode, struct file *file)
int hpfs_file_fsync(struct file *file, int datasync)
static secno hpfs_bmap(struct inode *inode, unsigned file_secno)
static void hpfs_truncate(struct inode *i)
static int hpfs_get_block(struct inode *inode, sector_t iblock, struct buffer_head *bh_result, int create)
static int hpfs_writepage(struct page *page, struct writeback_control *wbc)
static int hpfs_readpage(struct file *file, struct page *page)
static int hpfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t _hpfs_bmap(struct address_space *mapping, sector_t block)
const struct address_space_operations hpfs_aops = ;
static ssize_t hpfs_file_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
const struct file_operations hpfs_file_ops =
;
const struct inode_operations hpfs_file_iops =
;
