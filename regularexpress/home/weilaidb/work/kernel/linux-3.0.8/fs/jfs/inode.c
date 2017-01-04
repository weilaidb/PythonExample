struct inode *jfs_iget(struct super_block *sb, unsigned long ino)
int jfs_commit_inode(struct inode *inode, int wait)
int jfs_write_inode(struct inode *inode, struct writeback_control *wbc)
void jfs_evict_inode(struct inode *inode)
void jfs_dirty_inode(struct inode *inode, int flags)
int jfs_get_block(struct inode *ip, sector_t lblock,
struct buffer_head *bh_result, int create)
static int jfs_writepage(struct page *page, struct writeback_control *wbc)
static int jfs_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int jfs_readpage(struct file *file, struct page *page)
static int jfs_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int jfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t jfs_bmap(struct address_space *mapping, sector_t block)
static ssize_t jfs_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset, unsigned long nr_segs)
const struct address_space_operations jfs_aops = ;
void jfs_truncate_nolock(struct inode *ip, loff_t length)
void jfs_truncate(struct inode *ip)
