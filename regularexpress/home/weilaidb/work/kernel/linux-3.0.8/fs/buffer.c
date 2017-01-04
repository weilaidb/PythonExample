static int fsync_buffers_list(spinlock_t *lock, struct list_head *list);
#define BH_ENTRY(list) list_entry((list), struct buffer_head, b_assoc_buffers)
inline void
init_buffer(struct buffer_head *bh, bh_end_io_t *handler, void *private)
EXPORT_SYMBOL(init_buffer);
static int sleep_on_buffer(void *word)
void __lock_buffer(struct buffer_head *bh)
EXPORT_SYMBOL(__lock_buffer);
void unlock_buffer(struct buffer_head *bh)
EXPORT_SYMBOL(unlock_buffer);
void __wait_on_buffer(struct buffer_head * bh)
EXPORT_SYMBOL(__wait_on_buffer);
static void
__clear_page_buffers(struct page *page)
static int quiet_error(struct buffer_head *bh)
static void buffer_io_error(struct buffer_head *bh)
static void __end_buffer_read_notouch(struct buffer_head *bh, int uptodate)
void end_buffer_read_sync(struct buffer_head *bh, int uptodate)
EXPORT_SYMBOL(end_buffer_read_sync);
void end_buffer_write_sync(struct buffer_head *bh, int uptodate)
EXPORT_SYMBOL(end_buffer_write_sync);
static struct buffer_head *
__find_get_block_slow(struct block_device *bdev, sector_t block)
void invalidate_bdev(struct block_device *bdev)
EXPORT_SYMBOL(invalidate_bdev);
static void free_more_memory(void)
static void end_buffer_async_read(struct buffer_head *bh, int uptodate)
void end_buffer_async_write(struct buffer_head *bh, int uptodate)
EXPORT_SYMBOL(end_buffer_async_write);
static void mark_buffer_async_read(struct buffer_head *bh)
static void mark_buffer_async_write_endio(struct buffer_head *bh,
bh_end_io_t *handler)
void mark_buffer_async_write(struct buffer_head *bh)
EXPORT_SYMBOL(mark_buffer_async_write);
static void __remove_assoc_queue(struct buffer_head *bh)
int inode_has_buffers(struct inode *inode)
static int osync_buffers_list(spinlock_t *lock, struct list_head *list)
static void do_thaw_one(struct super_block *sb, void *unused)
static void do_thaw_all(struct work_struct *work)
void emergency_thaw_all(void)
int sync_mapping_buffers(struct address_space *mapping)
EXPORT_SYMBOL(sync_mapping_buffers);
void write_boundary_block(struct block_device *bdev,
sector_t bblock, unsigned blocksize)
void mark_buffer_dirty_inode(struct buffer_head *bh, struct inode *inode)
EXPORT_SYMBOL(mark_buffer_dirty_inode);
static void __set_page_dirty(struct page *page,
struct address_space *mapping, int warn)
int __set_page_dirty_buffers(struct page *page)
EXPORT_SYMBOL(__set_page_dirty_buffers);
static int fsync_buffers_list(spinlock_t *lock, struct list_head *list)
void invalidate_inode_buffers(struct inode *inode)
EXPORT_SYMBOL(invalidate_inode_buffers);
int remove_inode_buffers(struct inode *inode)
struct buffer_head *alloc_page_buffers(struct page *page, unsigned long size,
int retry)
EXPORT_SYMBOL_GPL(alloc_page_buffers);
static inline void
link_dev_buffers(struct page *page, struct buffer_head *head)
static void
init_page_buffers(struct page *page, struct block_device *bdev,
sector_t block, int size)
static struct page *
grow_dev_page(struct block_device *bdev, sector_t block,
pgoff_t index, int size)
static int
grow_buffers(struct block_device *bdev, sector_t block, int size)
static struct buffer_head *
__getblk_slow(struct block_device *bdev, sector_t block, int size)
void mark_buffer_dirty(struct buffer_head *bh)
EXPORT_SYMBOL(mark_buffer_dirty);
void __brelse(struct buffer_head * buf)
EXPORT_SYMBOL(__brelse);
void __bforget(struct buffer_head *bh)
EXPORT_SYMBOL(__bforget);
static struct buffer_head *__bread_slow(struct buffer_head *bh)
#define BH_LRU_SIZE	8
struct bh_lru ;
static DEFINE_PER_CPU(struct bh_lru, bh_lrus) = ;
#define bh_lru_lock()	local_irq_disable()
#define bh_lru_unlock()	local_irq_enable()
#define bh_lru_lock()	preempt_disable()
#define bh_lru_unlock()	preempt_enable()
static inline void check_irqs_on(void)
static void bh_lru_install(struct buffer_head *bh)
static struct buffer_head *
lookup_bh_lru(struct block_device *bdev, sector_t block, unsigned size)
struct buffer_head *
__find_get_block(struct block_device *bdev, sector_t block, unsigned size)
EXPORT_SYMBOL(__find_get_block);
struct buffer_head *
__getblk(struct block_device *bdev, sector_t block, unsigned size)
EXPORT_SYMBOL(__getblk);
void __breadahead(struct block_device *bdev, sector_t block, unsigned size)
EXPORT_SYMBOL(__breadahead);
struct buffer_head *
__bread(struct block_device *bdev, sector_t block, unsigned size)
EXPORT_SYMBOL(__bread);
static void invalidate_bh_lru(void *arg)
void invalidate_bh_lrus(void)
EXPORT_SYMBOL_GPL(invalidate_bh_lrus);
void set_bh_page(struct buffer_head *bh,
struct page *page, unsigned long offset)
EXPORT_SYMBOL(set_bh_page);
static void discard_buffer(struct buffer_head * bh)
void block_invalidatepage(struct page *page, unsigned long offset)
EXPORT_SYMBOL(block_invalidatepage);
void create_empty_buffers(struct page *page,
unsigned long blocksize, unsigned long b_state)
EXPORT_SYMBOL(create_empty_buffers);
void unmap_underlying_metadata(struct block_device *bdev, sector_t block)
EXPORT_SYMBOL(unmap_underlying_metadata);
static int __block_write_full_page(struct inode *inode, struct page *page,
get_block_t *get_block, struct writeback_control *wbc,
bh_end_io_t *handler)
void page_zero_new_buffers(struct page *page, unsigned from, unsigned to)
EXPORT_SYMBOL(page_zero_new_buffers);
int __block_write_begin(struct page *page, loff_t pos, unsigned len,
get_block_t *get_block)
EXPORT_SYMBOL(__block_write_begin);
static int __block_commit_write(struct inode *inode, struct page *page,
unsigned from, unsigned to)
int block_write_begin(struct address_space *mapping, loff_t pos, unsigned len,
unsigned flags, struct page **pagep, get_block_t *get_block)
EXPORT_SYMBOL(block_write_begin);
int block_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
EXPORT_SYMBOL(block_write_end);
int generic_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
EXPORT_SYMBOL(generic_write_end);
int block_is_partially_uptodate(struct page *page, read_descriptor_t *desc,
unsigned long from)
EXPORT_SYMBOL(block_is_partially_uptodate);
int block_read_full_page(struct page *page, get_block_t *get_block)
EXPORT_SYMBOL(block_read_full_page);
int generic_cont_expand_simple(struct inode *inode, loff_t size)
EXPORT_SYMBOL(generic_cont_expand_simple);
static int cont_expand_zero(struct file *file, struct address_space *mapping,
loff_t pos, loff_t *bytes)
int cont_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata,
get_block_t *get_block, loff_t *bytes)
EXPORT_SYMBOL(cont_write_begin);
int block_commit_write(struct page *page, unsigned from, unsigned to)
EXPORT_SYMBOL(block_commit_write);
int __block_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf,
get_block_t get_block)
EXPORT_SYMBOL(__block_page_mkwrite);
int block_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf,
get_block_t get_block)
EXPORT_SYMBOL(block_page_mkwrite);
static void end_buffer_read_nobh(struct buffer_head *bh, int uptodate)
static void attach_nobh_buffers(struct page *page, struct buffer_head *head)
int nobh_write_begin(struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata,
get_block_t *get_block)
EXPORT_SYMBOL(nobh_write_begin);
int nobh_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
EXPORT_SYMBOL(nobh_write_end);
int nobh_writepage(struct page *page, get_block_t *get_block,
struct writeback_control *wbc)
EXPORT_SYMBOL(nobh_writepage);
int nobh_truncate_page(struct address_space *mapping,
loff_t from, get_block_t *get_block)
EXPORT_SYMBOL(nobh_truncate_page);
int block_truncate_page(struct address_space *mapping,
loff_t from, get_block_t *get_block)
EXPORT_SYMBOL(block_truncate_page);
int block_write_full_page_endio(struct page *page, get_block_t *get_block,
struct writeback_control *wbc, bh_end_io_t *handler)
EXPORT_SYMBOL(block_write_full_page_endio);
int block_write_full_page(struct page *page, get_block_t *get_block,
struct writeback_control *wbc)
EXPORT_SYMBOL(block_write_full_page);
sector_t generic_block_bmap(struct address_space *mapping, sector_t block,
get_block_t *get_block)
EXPORT_SYMBOL(generic_block_bmap);
static void end_bio_bh_io_sync(struct bio *bio, int err)
int submit_bh(int rw, struct buffer_head * bh)
EXPORT_SYMBOL(submit_bh);
void ll_rw_block(int rw, int nr, struct buffer_head *bhs[])
EXPORT_SYMBOL(ll_rw_block);
void write_dirty_buffer(struct buffer_head *bh, int rw)
EXPORT_SYMBOL(write_dirty_buffer);
int __sync_dirty_buffer(struct buffer_head *bh, int rw)
EXPORT_SYMBOL(__sync_dirty_buffer);
int sync_dirty_buffer(struct buffer_head *bh)
EXPORT_SYMBOL(sync_dirty_buffer);
static inline int buffer_busy(struct buffer_head *bh)
static int
drop_buffers(struct page *page, struct buffer_head **buffers_to_free)
int try_to_free_buffers(struct page *page)
EXPORT_SYMBOL(try_to_free_buffers);
SYSCALL_DEFINE2(bdflush, int, func, long, data)
static struct kmem_cache *bh_cachep;
static int max_buffer_heads;
int buffer_heads_over_limit;
struct bh_accounting ;
static DEFINE_PER_CPU(struct bh_accounting, bh_accounting) = ;
static void recalc_bh_state(void)
struct buffer_head *alloc_buffer_head(gfp_t gfp_flags)
EXPORT_SYMBOL(alloc_buffer_head);
void free_buffer_head(struct buffer_head *bh)
EXPORT_SYMBOL(free_buffer_head);
static void buffer_exit_cpu(int cpu)
static int buffer_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
int bh_uptodate_or_lock(struct buffer_head *bh)
EXPORT_SYMBOL(bh_uptodate_or_lock);
int bh_submit_read(struct buffer_head *bh)
EXPORT_SYMBOL(bh_submit_read);
void __init buffer_init(void)
