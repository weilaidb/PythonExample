#undef DEBUG
#define dprintf(x...)	printf(x)
#define dprintf(x...)
const struct file_operations bfs_file_operations = ;
static int bfs_move_block(unsigned long from, unsigned long to,
struct super_block *sb)
static int bfs_move_blocks(struct super_block *sb, unsigned long start,
unsigned long end, unsigned long where)
static int bfs_get_block(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create)
static int bfs_writepage(struct page *page, struct writeback_control *wbc)
static int bfs_readpage(struct file *file, struct page *page)
static int bfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t bfs_bmap(struct address_space *mapping, sector_t block)
const struct address_space_operations bfs_aops = ;
const struct inode_operations bfs_file_inops;
