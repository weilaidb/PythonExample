#define WRITEBACK_H
struct backing_dev_info;
extern spinlock_t inode_wb_list_lock;
enum writeback_sync_modes ;
struct writeback_control ;
struct bdi_writeback;
int inode_wait(void *);
void writeback_inodes_sb(struct super_block *);
void writeback_inodes_sb_nr(struct super_block *, unsigned long nr);
int writeback_inodes_sb_if_idle(struct super_block *);
int writeback_inodes_sb_nr_if_idle(struct super_block *, unsigned long nr);
void sync_inodes_sb(struct super_block *);
void writeback_inodes_wb(struct bdi_writeback *wb,
struct writeback_control *wbc);
long wb_do_writeback(struct bdi_writeback *wb, int force_wait);
void wakeup_flusher_threads(long nr_pages);
static inline void wait_on_inode(struct inode *inode)
static inline void inode_sync_wait(struct inode *inode)
void laptop_io_completion(struct backing_dev_info *info);
void laptop_sync_completion(void);
void laptop_mode_sync(struct work_struct *work);
void laptop_mode_timer_fn(unsigned long data);
static inline void laptop_sync_completion(void)
void throttle_vm_writeout(gfp_t gfp_mask);
extern int dirty_background_ratio;
extern unsigned long dirty_background_bytes;
extern int vm_dirty_ratio;
extern unsigned long vm_dirty_bytes;
extern unsigned int dirty_writeback_interval;
extern unsigned int dirty_expire_interval;
extern int vm_highmem_is_dirtyable;
extern int block_dump;
extern int laptop_mode;
extern unsigned long determine_dirtyable_memory(void);
extern int dirty_background_ratio_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos);
extern int dirty_background_bytes_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos);
extern int dirty_ratio_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos);
extern int dirty_bytes_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos);
struct ctl_table;
int dirty_writeback_centisecs_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
void global_dirty_limits(unsigned long *pbackground, unsigned long *pdirty);
unsigned long bdi_dirty_limit(struct backing_dev_info *bdi,
unsigned long dirty);
void page_writeback_init(void);
void balance_dirty_pages_ratelimited_nr(struct address_space *mapping,
unsigned long nr_pages_dirtied);
static inline void
balance_dirty_pages_ratelimited(struct address_space *mapping)
typedef int (*writepage_t)(struct page *page, struct writeback_control *wbc,
void *data);
int generic_writepages(struct address_space *mapping,
struct writeback_control *wbc);
void tag_pages_for_writeback(struct address_space *mapping,
pgoff_t start, pgoff_t end);
int write_cache_pages(struct address_space *mapping,
struct writeback_control *wbc, writepage_t writepage,
void *data);
int do_writepages(struct address_space *mapping, struct writeback_control *wbc);
void set_page_dirty_balance(struct page *page, int page_mkwrite);
void writeback_set_ratelimit(void);
void tag_pages_for_writeback(struct address_space *mapping,
pgoff_t start, pgoff_t end);
extern int nr_pdflush_threads;
