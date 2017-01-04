#define DEBUG 0
#if DEBUG
#define INJECT_FAULTS_1 0
#define INJECT_FAULTS_2 0
#define INJECT_FAULTS_3 0
#define INJECT_FAULTS_4 0
#define INJECT_FAULTS_5 0
#define INJECT_FAULTS_6 0
#define INJECT_FATAL_FAULT_1 0
#define INJECT_FATAL_FAULT_2 0
#define INJECT_FATAL_FAULT_3 0
#  if DEBUG > 0
#    define PRINTK(x...) printk(KERN_DEBUG x)
#  else
#    define PRINTK(x...)
#  endif
static inline char *bmname(struct bitmap *bitmap)
static unsigned char *bitmap_alloc_page(struct bitmap *bitmap)
static void bitmap_free_page(struct bitmap *bitmap, unsigned char *page)
static int bitmap_checkpage(struct bitmap *bitmap,
unsigned long page, int create)
__releases(bitmap->lock)
__acquires(bitmap->lock)
static void bitmap_checkfree(struct bitmap *bitmap, unsigned long page)
static struct page *read_sb_page(mddev_t *mddev, loff_t offset,
struct page *page,
unsigned long index, int size)
static mdk_rdev_t *next_active_rdev(mdk_rdev_t *rdev, mddev_t *mddev)
static int write_sb_page(struct bitmap *bitmap, struct page *page, int wait)
static void bitmap_file_kick(struct bitmap *bitmap);
static void write_page(struct bitmap *bitmap, struct page *page, int wait)
static void end_bitmap_write(struct buffer_head *bh, int uptodate)
static void
__clear_page_buffers(struct page *page)
static void free_buffers(struct page *page)
static struct page *read_page(struct file *file, unsigned long index,
struct bitmap *bitmap,
unsigned long count)
void bitmap_update_sb(struct bitmap *bitmap)
void bitmap_print_sb(struct bitmap *bitmap)
static int bitmap_new_disk_sb(struct bitmap *bitmap)
static int bitmap_read_sb(struct bitmap *bitmap)
enum bitmap_mask_op ;
static int bitmap_mask_state(struct bitmap *bitmap, enum bitmap_state bits,
enum bitmap_mask_op op)
static inline unsigned long file_page_index(struct bitmap *bitmap, unsigned long chunk)
static inline unsigned long file_page_offset(struct bitmap *bitmap, unsigned long chunk)
static inline struct page *filemap_get_page(struct bitmap *bitmap,
unsigned long chunk)
static void bitmap_file_unmap(struct bitmap *bitmap)
static void bitmap_file_put(struct bitmap *bitmap)
static void bitmap_file_kick(struct bitmap *bitmap)
enum bitmap_page_attr ;
static inline void set_page_attr(struct bitmap *bitmap, struct page *page,
enum bitmap_page_attr attr)
static inline void clear_page_attr(struct bitmap *bitmap, struct page *page,
enum bitmap_page_attr attr)
static inline unsigned long test_page_attr(struct bitmap *bitmap, struct page *page,
enum bitmap_page_attr attr)
static void bitmap_file_set_bit(struct bitmap *bitmap, sector_t block)
void bitmap_unplug(struct bitmap *bitmap)
EXPORT_SYMBOL(bitmap_unplug);
static void bitmap_set_memory_bits(struct bitmap *bitmap, sector_t offset, int needed);
static int bitmap_init_from_disk(struct bitmap *bitmap, sector_t start)
void bitmap_write_all(struct bitmap *bitmap)
static void bitmap_count_page(struct bitmap *bitmap, sector_t offset, int inc)
static bitmap_counter_t *bitmap_get_counter(struct bitmap *bitmap,
sector_t offset, sector_t *blocks,
int create);
void bitmap_daemon_work(mddev_t *mddev)
static bitmap_counter_t *bitmap_get_counter(struct bitmap *bitmap,
sector_t offset, sector_t *blocks,
int create)
__releases(bitmap->lock)
__acquires(bitmap->lock)
int bitmap_startwrite(struct bitmap *bitmap, sector_t offset, unsigned long sectors, int behind)
EXPORT_SYMBOL(bitmap_startwrite);
void bitmap_endwrite(struct bitmap *bitmap, sector_t offset, unsigned long sectors,
int success, int behind)
EXPORT_SYMBOL(bitmap_endwrite);
static int __bitmap_start_sync(struct bitmap *bitmap, sector_t offset, sector_t *blocks,
int degraded)
int bitmap_start_sync(struct bitmap *bitmap, sector_t offset, sector_t *blocks,
int degraded)
EXPORT_SYMBOL(bitmap_start_sync);
void bitmap_end_sync(struct bitmap *bitmap, sector_t offset, sector_t *blocks, int aborted)
EXPORT_SYMBOL(bitmap_end_sync);
void bitmap_close_sync(struct bitmap *bitmap)
EXPORT_SYMBOL(bitmap_close_sync);
void bitmap_cond_end_sync(struct bitmap *bitmap, sector_t sector)
EXPORT_SYMBOL(bitmap_cond_end_sync);
static void bitmap_set_memory_bits(struct bitmap *bitmap, sector_t offset, int needed)
void bitmap_dirty_bits(struct bitmap *bitmap, unsigned long s, unsigned long e)
void bitmap_flush(mddev_t *mddev)
static void bitmap_free(struct bitmap *bitmap)
void bitmap_destroy(mddev_t *mddev)
int bitmap_create(mddev_t *mddev)
int bitmap_load(mddev_t *mddev)
EXPORT_SYMBOL_GPL(bitmap_load);
static ssize_t
location_show(mddev_t *mddev, char *page)
static ssize_t
location_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry bitmap_location =
__ATTR(location, S_IRUGO|S_IWUSR, location_show, location_store);
static ssize_t
timeout_show(mddev_t *mddev, char *page)
static ssize_t
timeout_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry bitmap_timeout =
__ATTR(time_base, S_IRUGO|S_IWUSR, timeout_show, timeout_store);
static ssize_t
backlog_show(mddev_t *mddev, char *page)
static ssize_t
backlog_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry bitmap_backlog =
__ATTR(backlog, S_IRUGO|S_IWUSR, backlog_show, backlog_store);
static ssize_t
chunksize_show(mddev_t *mddev, char *page)
static ssize_t
chunksize_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry bitmap_chunksize =
__ATTR(chunksize, S_IRUGO|S_IWUSR, chunksize_show, chunksize_store);
static ssize_t metadata_show(mddev_t *mddev, char *page)
static ssize_t metadata_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry bitmap_metadata =
__ATTR(metadata, S_IRUGO|S_IWUSR, metadata_show, metadata_store);
static ssize_t can_clear_show(mddev_t *mddev, char *page)
static ssize_t can_clear_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry bitmap_can_clear =
__ATTR(can_clear, S_IRUGO|S_IWUSR, can_clear_show, can_clear_store);
static ssize_t
behind_writes_used_show(mddev_t *mddev, char *page)
static ssize_t
behind_writes_used_reset(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry max_backlog_used =
__ATTR(max_backlog_used, S_IRUGO | S_IWUSR,
behind_writes_used_show, behind_writes_used_reset);
static struct attribute *md_bitmap_attrs[] = ;
struct attribute_group md_bitmap_group = ;
