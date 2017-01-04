static int ext3_writepage_trans_blocks(struct inode *inode);
static int ext3_inode_is_fast_symlink(struct inode *inode)
int ext3_forget(handle_t *handle, int is_metadata, struct inode *inode,
struct buffer_head *bh, ext3_fsblk_t blocknr)
static unsigned long blocks_for_truncate(struct inode *inode)
static handle_t *start_transaction(struct inode *inode)
static int try_to_extend_transaction(handle_t *handle, struct inode *inode)
static int truncate_restart_transaction(handle_t *handle, struct inode *inode)
void ext3_evict_inode (struct inode *inode)
typedef struct  Indirect;
static inline void add_chain(Indirect *p, struct buffer_head *bh, __le32 *v)
static int verify_chain(Indirect *from, Indirect *to)
static int ext3_block_to_path(struct inode *inode,
long i_block, int offsets[4], int *boundary)
static Indirect *ext3_get_branch(struct inode *inode, int depth, int *offsets,
Indirect chain[4], int *err)
static ext3_fsblk_t ext3_find_near(struct inode *inode, Indirect *ind)
static ext3_fsblk_t ext3_find_goal(struct inode *inode, long block,
Indirect *partial)
static int ext3_blks_to_allocate(Indirect *branch, int k, unsigned long blks,
int blocks_to_boundary)
static int ext3_alloc_blocks(handle_t *handle, struct inode *inode,
ext3_fsblk_t goal, int indirect_blks, int blks,
ext3_fsblk_t new_blocks[4], int *err)
static int ext3_alloc_branch(handle_t *handle, struct inode *inode,
int indirect_blks, int *blks, ext3_fsblk_t goal,
int *offsets, Indirect *branch)
static int ext3_splice_branch(handle_t *handle, struct inode *inode,
long block, Indirect *where, int num, int blks)
int ext3_get_blocks_handle(handle_t *handle, struct inode *inode,
sector_t iblock, unsigned long maxblocks,
struct buffer_head *bh_result,
int create)
#define DIO_MAX_BLOCKS 4096
#define DIO_CREDITS 25
static int ext3_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
int ext3_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
u64 start, u64 len)
struct buffer_head *ext3_getblk(handle_t *handle, struct inode *inode,
long block, int create, int *errp)
struct buffer_head *ext3_bread(handle_t *handle, struct inode *inode,
int block, int create, int *err)
static int walk_page_buffers(	handle_t *handle,
struct buffer_head *head,
unsigned from,
unsigned to,
int *partial,
int (*fn)(	handle_t *handle,
struct buffer_head *bh))
static int do_journal_get_write_access(handle_t *handle,
struct buffer_head *bh)
static void ext3_truncate_failed_write(struct inode *inode)
static int ext3_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
int ext3_journal_dirty_data(handle_t *handle, struct buffer_head *bh)
static int journal_dirty_data_fn(handle_t *handle, struct buffer_head *bh)
static int write_end_fn(handle_t *handle, struct buffer_head *bh)
static void update_file_sizes(struct inode *inode, loff_t pos, unsigned copied)
static int ext3_ordered_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int ext3_writeback_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int ext3_journalled_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static sector_t ext3_bmap(struct address_space *mapping, sector_t block)
static int bget_one(handle_t *handle, struct buffer_head *bh)
static int bput_one(handle_t *handle, struct buffer_head *bh)
static int buffer_unmapped(handle_t *handle, struct buffer_head *bh)
static int ext3_ordered_writepage(struct page *page,
struct writeback_control *wbc)
static int ext3_writeback_writepage(struct page *page,
struct writeback_control *wbc)
static int ext3_journalled_writepage(struct page *page,
struct writeback_control *wbc)
static int ext3_readpage(struct file *file, struct page *page)
static int
ext3_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static void ext3_invalidatepage(struct page *page, unsigned long offset)
static int ext3_releasepage(struct page *page, gfp_t wait)
static ssize_t ext3_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset,
unsigned long nr_segs)
static int ext3_journalled_set_page_dirty(struct page *page)
static const struct address_space_operations ext3_ordered_aops = ;
static const struct address_space_operations ext3_writeback_aops = ;
static const struct address_space_operations ext3_journalled_aops = ;
void ext3_set_aops(struct inode *inode)
static int ext3_block_truncate_page(handle_t *handle, struct page *page,
struct address_space *mapping, loff_t from)
static inline int all_zeroes(__le32 *p, __le32 *q)
static Indirect *ext3_find_shared(struct inode *inode, int depth,
int offsets[4], Indirect chain[4], __le32 *top)
static void ext3_clear_blocks(handle_t *handle, struct inode *inode,
struct buffer_head *bh, ext3_fsblk_t block_to_free,
unsigned long count, __le32 *first, __le32 *last)
static void ext3_free_data(handle_t *handle, struct inode *inode,
struct buffer_head *this_bh,
__le32 *first, __le32 *last)
static void ext3_free_branches(handle_t *handle, struct inode *inode,
struct buffer_head *parent_bh,
__le32 *first, __le32 *last, int depth)
int ext3_can_truncate(struct inode *inode)
void ext3_truncate(struct inode *inode)
static ext3_fsblk_t ext3_get_inode_block(struct super_block *sb,
unsigned long ino, struct ext3_iloc *iloc)
static int __ext3_get_inode_loc(struct inode *inode,
struct ext3_iloc *iloc, int in_mem)
int ext3_get_inode_loc(struct inode *inode, struct ext3_iloc *iloc)
void ext3_set_inode_flags(struct inode *inode)
void ext3_get_inode_flags(struct ext3_inode_info *ei)
struct inode *ext3_iget(struct super_block *sb, unsigned long ino)
static int ext3_do_update_inode(handle_t *handle,
struct inode *inode,
struct ext3_iloc *iloc)
int ext3_write_inode(struct inode *inode, struct writeback_control *wbc)
int ext3_setattr(struct dentry *dentry, struct iattr *attr)
static int ext3_writepage_trans_blocks(struct inode *inode)
int ext3_mark_iloc_dirty(handle_t *handle,
struct inode *inode, struct ext3_iloc *iloc)
int
ext3_reserve_inode_write(handle_t *handle, struct inode *inode,
struct ext3_iloc *iloc)
int ext3_mark_inode_dirty(handle_t *handle, struct inode *inode)
void ext3_dirty_inode(struct inode *inode, int flags)
int ext3_change_inode_journal_flag(struct inode *inode, int val)
