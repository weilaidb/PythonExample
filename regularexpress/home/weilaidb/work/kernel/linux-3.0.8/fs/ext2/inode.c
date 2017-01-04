MODULE_AUTHOR("Remy Card and others");
MODULE_DESCRIPTION("Second Extended Filesystem");
MODULE_LICENSE("GPL");
static int __ext2_write_inode(struct inode *inode, int do_sync);
static inline int ext2_inode_is_fast_symlink(struct inode *inode)
static void ext2_truncate_blocks(struct inode *inode, loff_t offset);
static void ext2_write_failed(struct address_space *mapping, loff_t to)
void ext2_evict_inode(struct inode * inode)
typedef struct  Indirect;
static inline void add_chain(Indirect *p, struct buffer_head *bh, __le32 *v)
static inline int verify_chain(Indirect *from, Indirect *to)
static int ext2_block_to_path(struct inode *inode,
long i_block, int offsets[4], int *boundary)
static Indirect *ext2_get_branch(struct inode *inode,
int depth,
int *offsets,
Indirect chain[4],
int *err)
static ext2_fsblk_t ext2_find_near(struct inode *inode, Indirect *ind)
static inline ext2_fsblk_t ext2_find_goal(struct inode *inode, long block,
Indirect *partial)
static int
ext2_blks_to_allocate(Indirect * branch, int k, unsigned long blks,
int blocks_to_boundary)
static int ext2_alloc_blocks(struct inode *inode,
ext2_fsblk_t goal, int indirect_blks, int blks,
ext2_fsblk_t new_blocks[4], int *err)
static int ext2_alloc_branch(struct inode *inode,
int indirect_blks, int *blks, ext2_fsblk_t goal,
int *offsets, Indirect *branch)
static void ext2_splice_branch(struct inode *inode,
long block, Indirect *where, int num, int blks)
static int ext2_get_blocks(struct inode *inode,
sector_t iblock, unsigned long maxblocks,
struct buffer_head *bh_result,
int create)
int ext2_get_block(struct inode *inode, sector_t iblock, struct buffer_head *bh_result, int create)
int ext2_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
u64 start, u64 len)
static int ext2_writepage(struct page *page, struct writeback_control *wbc)
static int ext2_readpage(struct file *file, struct page *page)
static int
ext2_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int
ext2_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int ext2_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int
ext2_nobh_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int ext2_nobh_writepage(struct page *page,
struct writeback_control *wbc)
static sector_t ext2_bmap(struct address_space *mapping, sector_t block)
static ssize_t
ext2_direct_IO(int rw, struct kiocb *iocb, const struct iovec *iov,
loff_t offset, unsigned long nr_segs)
static int
ext2_writepages(struct address_space *mapping, struct writeback_control *wbc)
const struct address_space_operations ext2_aops = ;
const struct address_space_operations ext2_aops_xip = ;
const struct address_space_operations ext2_nobh_aops = ;
static inline int all_zeroes(__le32 *p, __le32 *q)
static Indirect *ext2_find_shared(struct inode *inode,
int depth,
int offsets[4],
Indirect chain[4],
__le32 *top)
static inline void ext2_free_data(struct inode *inode, __le32 *p, __le32 *q)
static void ext2_free_branches(struct inode *inode, __le32 *p, __le32 *q, int depth)
static void __ext2_truncate_blocks(struct inode *inode, loff_t offset)
static void ext2_truncate_blocks(struct inode *inode, loff_t offset)
static int ext2_setsize(struct inode *inode, loff_t newsize)
static struct ext2_inode *ext2_get_inode(struct super_block *sb, ino_t ino,
struct buffer_head **p)
void ext2_set_inode_flags(struct inode *inode)
void ext2_get_inode_flags(struct ext2_inode_info *ei)
struct inode *ext2_iget (struct super_block *sb, unsigned long ino)
static int __ext2_write_inode(struct inode *inode, int do_sync)
int ext2_write_inode(struct inode *inode, struct writeback_control *wbc)
int ext2_setattr(struct dentry *dentry, struct iattr *iattr)
