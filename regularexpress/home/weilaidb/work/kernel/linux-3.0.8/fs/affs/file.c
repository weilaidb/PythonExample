#if PAGE_SIZE < 4096
#error PAGE_SIZE must be at least 4096
static int affs_grow_extcache(struct inode *inode, u32 lc_idx);
static struct buffer_head *affs_alloc_extblock(struct inode *inode, struct buffer_head *bh, u32 ext);
static inline struct buffer_head *affs_get_extblock(struct inode *inode, u32 ext);
static struct buffer_head *affs_get_extblock_slow(struct inode *inode, u32 ext);
static int affs_file_open(struct inode *inode, struct file *filp);
static int affs_file_release(struct inode *inode, struct file *filp);
const struct file_operations affs_file_operations = ;
const struct inode_operations affs_file_inode_operations = ;
static int
affs_file_open(struct inode *inode, struct file *filp)
static int
affs_file_release(struct inode *inode, struct file *filp)
static int
affs_grow_extcache(struct inode *inode, u32 lc_idx)
static struct buffer_head *
affs_alloc_extblock(struct inode *inode, struct buffer_head *bh, u32 ext)
static inline struct buffer_head *
affs_get_extblock(struct inode *inode, u32 ext)
static struct buffer_head *
affs_get_extblock_slow(struct inode *inode, u32 ext)
static int
affs_get_block(struct inode *inode, sector_t block, struct buffer_head *bh_result, int create)
static int affs_writepage(struct page *page, struct writeback_control *wbc)
static int affs_readpage(struct file *file, struct page *page)
static int affs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t _affs_bmap(struct address_space *mapping, sector_t block)
const struct address_space_operations affs_aops = ;
static inline struct buffer_head *
affs_bread_ino(struct inode *inode, int block, int create)
static inline struct buffer_head *
affs_getzeroblk_ino(struct inode *inode, int block)
static inline struct buffer_head *
affs_getemptyblk_ino(struct inode *inode, int block)
static int
affs_do_readpage_ofs(struct file *file, struct page *page, unsigned from, unsigned to)
static int
affs_extent_file_ofs(struct inode *inode, u32 newsize)
static int
affs_readpage_ofs(struct file *file, struct page *page)
static int affs_write_begin_ofs(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int affs_write_end_ofs(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
const struct address_space_operations affs_aops_ofs = ;
void
affs_free_prealloc(struct inode *inode)
void
affs_truncate(struct inode *inode)
int affs_file_fsync(struct file *filp, int datasync)
