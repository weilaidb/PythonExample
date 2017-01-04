static u32 omfs_max_extents(struct omfs_sb_info *sbi, int offset)
void omfs_make_empty_table(struct buffer_head *bh, int offset)
int omfs_shrink_inode(struct inode *inode)
static void omfs_truncate(struct inode *inode)
static int omfs_grow_extent(struct inode *inode, struct omfs_extent *oe,
u64 *ret_block)
static sector_t find_block(struct inode *inode, struct omfs_extent_entry *ent,
sector_t block, int count, int *left)
static int omfs_get_block(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create)
static int omfs_readpage(struct file *file, struct page *page)
static int omfs_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int omfs_writepage(struct page *page, struct writeback_control *wbc)
static int
omfs_writepages(struct address_space *mapping, struct writeback_control *wbc)
static int omfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static sector_t omfs_bmap(struct address_space *mapping, sector_t block)
const struct file_operations omfs_file_operations = ;
static int omfs_setattr(struct dentry *dentry, struct iattr *attr)
const struct inode_operations omfs_file_inops = ;
const struct address_space_operations omfs_aops = ;
