#define MPAGE_DA_EXTENT_TAIL 0x01
static inline int ext4_begin_ordered_truncate(struct inode *inode,
loff_t new_size)
static void ext4_invalidatepage(struct page *page, unsigned long offset);
static int noalloc_get_block_write(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create);
static int ext4_set_bh_endio(struct buffer_head *bh, struct inode *inode);
static void ext4_end_io_buffer_write(struct buffer_head *bh, int uptodate);
static int __ext4_journalled_writepage(struct page *page, unsigned int len);
static int ext4_bh_delay_or_unwritten(handle_t *handle, struct buffer_head *bh);
static int ext4_inode_is_fast_symlink(struct inode *inode)
static unsigned long blocks_for_truncate(struct inode *inode)
static handle_t *start_transaction(struct inode *inode)
static int try_to_extend_transaction(handle_t *handle, struct inode *inode)
int ext4_truncate_restart_trans(handle_t *handle, struct inode *inode,
int nblocks)
void ext4_evict_inode(struct inode *inode)
typedef struct  Indirect;
static inline void add_chain(Indirect *p, struct buffer_head *bh, __le32 *v)
static int ext4_block_to_path(struct inode *inode,
ext4_lblk_t i_block,
ext4_lblk_t offsets[4], int *boundary)
static int __ext4_check_blockref(const char *function, unsigned int line,
struct inode *inode,
__le32 *p, unsigned int max)
#define ext4_check_indirect_blockref(inode, bh)                         \
__ext4_check_blockref(__func__, __LINE__, inode,		\
(__le32 *)(bh)->b_data,			\
EXT4_ADDR_PER_BLOCK((inode)->i_sb))
#define ext4_check_inode_blockref(inode)                                \
__ext4_check_blockref(__func__, __LINE__, inode,		\
EXT4_I(inode)->i_data,			\
EXT4_NDIR_BLOCKS)
static Indirect *ext4_get_branch(struct inode *inode, int depth,
ext4_lblk_t  *offsets,
Indirect chain[4], int *err)
static ext4_fsblk_t ext4_find_near(struct inode *inode, Indirect *ind)
static ext4_fsblk_t ext4_find_goal(struct inode *inode, ext4_lblk_t block,
Indirect *partial)
static int ext4_blks_to_allocate(Indirect *branch, int k, unsigned int blks,
int blocks_to_boundary)
static int ext4_alloc_blocks(handle_t *handle, struct inode *inode,
ext4_lblk_t iblock, ext4_fsblk_t goal,
int indirect_blks, int blks,
ext4_fsblk_t new_blocks[4], int *err)
static int ext4_alloc_branch(handle_t *handle, struct inode *inode,
ext4_lblk_t iblock, int indirect_blks,
int *blks, ext4_fsblk_t goal,
ext4_lblk_t *offsets, Indirect *branch)
static int ext4_splice_branch(handle_t *handle, struct inode *inode,
ext4_lblk_t block, Indirect *where, int num,
int blks)
static int ext4_ind_map_blocks(handle_t *handle, struct inode *inode,
struct ext4_map_blocks *map,
int flags)
qsize_t *ext4_get_reserved_space(struct inode *inode)
static int ext4_indirect_calc_metadata_amount(struct inode *inode,
sector_t lblock)
static int ext4_calc_metadata_amount(struct inode *inode, ext4_lblk_t lblock)
void ext4_da_update_reserve_space(struct inode *inode,
int used, int quota_claim)
static int __check_block_validity(struct inode *inode, const char *func,
unsigned int line,
struct ext4_map_blocks *map)
#define check_block_validity(inode, map)	\
__check_block_validity((inode), __func__, __LINE__, (map))
static pgoff_t ext4_num_dirty_pages(struct inode *inode, pgoff_t idx,
unsigned int max_pages)
int ext4_map_blocks(handle_t *handle, struct inode *inode,
struct ext4_map_blocks *map, int flags)
#define DIO_MAX_BLOCKS 4096
static int _ext4_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh, int flags)
int ext4_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh, int create)
struct buffer_head *ext4_getblk(handle_t *handle, struct inode *inode,
ext4_lblk_t block, int create, int *errp)
struct buffer_head *ext4_bread(handle_t *handle, struct inode *inode,
ext4_lblk_t block, int create, int *err)
static int walk_page_buffers(handle_t *handle,
struct buffer_head *head,
unsigned from,
unsigned to,
int *partial,
int (*fn)(handle_t *handle,
struct buffer_head *bh))
static int do_journal_get_write_access(handle_t *handle,
struct buffer_head *bh)
static void ext4_truncate_failed_write(struct inode *inode)
static int ext4_get_block_write(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create);
static int ext4_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int write_end_fn(handle_t *handle, struct buffer_head *bh)
static int ext4_generic_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int ext4_ordered_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int ext4_writeback_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int ext4_journalled_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int ext4_da_reserve_space(struct inode *inode, ext4_lblk_t lblock)
static void ext4_da_release_space(struct inode *inode, int to_free)
static void ext4_da_page_release_reservation(struct page *page,
unsigned long offset)
static int mpage_da_submit_io(struct mpage_da_data *mpd,
struct ext4_map_blocks *map)
static void ext4_da_block_invalidatepages(struct mpage_da_data *mpd)
static void ext4_print_free_blocks(struct inode *inode)
static void mpage_da_map_and_submit(struct mpage_da_data *mpd)
#define BH_FLAGS ((1 << BH_Uptodate) | (1 << BH_Mapped) | \
(1 << BH_Delay) | (1 << BH_Unwritten))
static void mpage_add_bh_to_extent(struct mpage_da_data *mpd,
sector_t logical, size_t b_size,
unsigned long b_state)
static int ext4_bh_delay_or_unwritten(handle_t *handle, struct buffer_head *bh)
static int ext4_da_get_block_prep(struct inode *inode, sector_t iblock,
struct buffer_head *bh, int create)
static int noalloc_get_block_write(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
static int bget_one(handle_t *handle, struct buffer_head *bh)
static int bput_one(handle_t *handle, struct buffer_head *bh)
static int __ext4_journalled_writepage(struct page *page,
unsigned int len)
static int ext4_set_bh_endio(struct buffer_head *bh, struct inode *inode);
static void ext4_end_io_buffer_write(struct buffer_head *bh, int uptodate);
static int ext4_writepage(struct page *page,
struct writeback_control *wbc)
static int ext4_da_writepages_trans_blocks(struct inode *inode)
static int write_cache_pages_da(struct address_space *mapping,
struct writeback_control *wbc,
struct mpage_da_data *mpd,
pgoff_t *done_index)
static int ext4_da_writepages(struct address_space *mapping,
struct writeback_control *wbc)
#define FALL_BACK_TO_NONDELALLOC 1
static int ext4_nonda_switch(struct super_block *sb)
static int ext4_da_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int ext4_da_should_update_i_disksize(struct page *page,
unsigned long offset)
static int ext4_da_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static void ext4_da_invalidatepage(struct page *page, unsigned long offset)
int ext4_alloc_da_blocks(struct inode *inode)
static sector_t ext4_bmap(struct address_space *mapping, sector_t block)
static int ext4_readpage(struct file *file, struct page *page)
static int
ext4_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static void ext4_invalidatepage_free_endio(struct page *page, unsigned long offset)
static void ext4_invalidatepage(struct page *page, unsigned long offset)
static int ext4_releasepage(struct page *page, gfp_t wait)
static ssize_t ext4_ind_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset,
unsigned long nr_segs)
static int ext4_get_block_write(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
static void ext4_end_io_dio(struct kiocb *iocb, loff_t offset,
ssize_t size, void *private, int ret,
bool is_async)
static void ext4_end_io_buffer_write(struct buffer_head *bh, int uptodate)
static int ext4_set_bh_endio(struct buffer_head *bh, struct inode *inode)
static ssize_t ext4_ext_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset,
unsigned long nr_segs)
static ssize_t ext4_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset,
unsigned long nr_segs)
static int ext4_journalled_set_page_dirty(struct page *page)
static const struct address_space_operations ext4_ordered_aops = ;
static const struct address_space_operations ext4_writeback_aops = ;
static const struct address_space_operations ext4_journalled_aops = ;
static const struct address_space_operations ext4_da_aops = ;
void ext4_set_aops(struct inode *inode)
int ext4_block_truncate_page(handle_t *handle,
struct address_space *mapping, loff_t from)
int ext4_block_zero_page_range(handle_t *handle,
struct address_space *mapping, loff_t from, loff_t length)
static inline int all_zeroes(__le32 *p, __le32 *q)
static Indirect *ext4_find_shared(struct inode *inode, int depth,
ext4_lblk_t offsets[4], Indirect chain[4],
__le32 *top)
static int ext4_clear_blocks(handle_t *handle, struct inode *inode,
struct buffer_head *bh,
ext4_fsblk_t block_to_free,
unsigned long count, __le32 *first,
__le32 *last)
static void ext4_free_data(handle_t *handle, struct inode *inode,
struct buffer_head *this_bh,
__le32 *first, __le32 *last)
static void ext4_free_branches(handle_t *handle, struct inode *inode,
struct buffer_head *parent_bh,
__le32 *first, __le32 *last, int depth)
int ext4_can_truncate(struct inode *inode)
int ext4_punch_hole(struct file *file, loff_t offset, loff_t length)
void ext4_truncate(struct inode *inode)
static int __ext4_get_inode_loc(struct inode *inode,
struct ext4_iloc *iloc, int in_mem)
int ext4_get_inode_loc(struct inode *inode, struct ext4_iloc *iloc)
void ext4_set_inode_flags(struct inode *inode)
void ext4_get_inode_flags(struct ext4_inode_info *ei)
static blkcnt_t ext4_inode_blocks(struct ext4_inode *raw_inode,
struct ext4_inode_info *ei)
struct inode *ext4_iget(struct super_block *sb, unsigned long ino)
static int ext4_inode_blocks_set(handle_t *handle,
struct ext4_inode *raw_inode,
struct ext4_inode_info *ei)
static int ext4_do_update_inode(handle_t *handle,
struct inode *inode,
struct ext4_iloc *iloc)
int ext4_write_inode(struct inode *inode, struct writeback_control *wbc)
int ext4_setattr(struct dentry *dentry, struct iattr *attr)
int ext4_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
static int ext4_indirect_trans_blocks(struct inode *inode, int nrblocks,
int chunk)
static int ext4_index_trans_blocks(struct inode *inode, int nrblocks, int chunk)
static int ext4_meta_trans_blocks(struct inode *inode, int nrblocks, int chunk)
int ext4_writepage_trans_blocks(struct inode *inode)
int ext4_chunk_trans_blocks(struct inode *inode, int nrblocks)
int ext4_mark_iloc_dirty(handle_t *handle,
struct inode *inode, struct ext4_iloc *iloc)
int
ext4_reserve_inode_write(handle_t *handle, struct inode *inode,
struct ext4_iloc *iloc)
static int ext4_expand_extra_isize(struct inode *inode,
unsigned int new_extra_isize,
struct ext4_iloc iloc,
handle_t *handle)
int ext4_mark_inode_dirty(handle_t *handle, struct inode *inode)
void ext4_dirty_inode(struct inode *inode, int flags)
int ext4_change_inode_journal_flag(struct inode *inode, int val)
static int ext4_bh_unmapped(handle_t *handle, struct buffer_head *bh)
int ext4_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
