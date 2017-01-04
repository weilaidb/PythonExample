struct wb_writeback_work ;
#define CREATE_TRACE_POINTS
int nr_pdflush_threads;
int writeback_in_progress(struct backing_dev_info *bdi)
static inline struct backing_dev_info *inode_to_bdi(struct inode *inode)
static inline struct inode *wb_inode(struct list_head *head)
static void bdi_wakeup_flusher(struct backing_dev_info *bdi)
static void bdi_queue_work(struct backing_dev_info *bdi,
struct wb_writeback_work *work)
static void
__bdi_start_writeback(struct backing_dev_info *bdi, long nr_pages,
bool range_cyclic)
void bdi_start_writeback(struct backing_dev_info *bdi, long nr_pages)
void bdi_start_background_writeback(struct backing_dev_info *bdi)
void inode_wb_list_del(struct inode *inode)
static void redirty_tail(struct inode *inode)
static void requeue_io(struct inode *inode)
static void inode_sync_complete(struct inode *inode)
static bool inode_dirtied_after(struct inode *inode, unsigned long t)
static void move_expired_inodes(struct list_head *delaying_queue,
struct list_head *dispatch_queue,
unsigned long *older_than_this)
static void queue_io(struct bdi_writeback *wb, unsigned long *older_than_this)
static int write_inode(struct inode *inode, struct writeback_control *wbc)
static void inode_wait_for_writeback(struct inode *inode)
static int
writeback_single_inode(struct inode *inode, struct writeback_control *wbc)
static bool pin_sb_for_writeback(struct super_block *sb)
static int writeback_sb_inodes(struct super_block *sb, struct bdi_writeback *wb,
struct writeback_control *wbc, bool only_this_sb)
void writeback_inodes_wb(struct bdi_writeback *wb,
struct writeback_control *wbc)
static void __writeback_inodes_sb(struct super_block *sb,
struct bdi_writeback *wb, struct writeback_control *wbc)
#define MAX_WRITEBACK_PAGES     1024
static inline bool over_bground_thresh(void)
static long wb_writeback(struct bdi_writeback *wb,
struct wb_writeback_work *work)
static struct wb_writeback_work *
get_next_work_item(struct backing_dev_info *bdi)
static unsigned long get_nr_dirty_pages(void)
static long wb_check_background_flush(struct bdi_writeback *wb)
static long wb_check_old_data_flush(struct bdi_writeback *wb)
long wb_do_writeback(struct bdi_writeback *wb, int force_wait)
int bdi_writeback_thread(void *data)
void wakeup_flusher_threads(long nr_pages)
static noinline void block_dump___mark_inode_dirty(struct inode *inode)
void __mark_inode_dirty(struct inode *inode, int flags)
EXPORT_SYMBOL(__mark_inode_dirty);
static void wait_sb_inodes(struct super_block *sb)
void writeback_inodes_sb_nr(struct super_block *sb, unsigned long nr)
EXPORT_SYMBOL(writeback_inodes_sb_nr);
void writeback_inodes_sb(struct super_block *sb)
EXPORT_SYMBOL(writeback_inodes_sb);
int writeback_inodes_sb_if_idle(struct super_block *sb)
EXPORT_SYMBOL(writeback_inodes_sb_if_idle);
int writeback_inodes_sb_nr_if_idle(struct super_block *sb,
unsigned long nr)
EXPORT_SYMBOL(writeback_inodes_sb_nr_if_idle);
void sync_inodes_sb(struct super_block *sb)
EXPORT_SYMBOL(sync_inodes_sb);
int write_inode_now(struct inode *inode, int sync)
EXPORT_SYMBOL(write_inode_now);
int sync_inode(struct inode *inode, struct writeback_control *wbc)
EXPORT_SYMBOL(sync_inode);
int sync_inode_metadata(struct inode *inode, int wait)
EXPORT_SYMBOL(sync_inode_metadata);
