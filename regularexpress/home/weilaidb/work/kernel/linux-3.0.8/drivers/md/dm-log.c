#define DM_MSG_PREFIX "dirty region log"
static LIST_HEAD(_log_types);
static DEFINE_SPINLOCK(_lock);
static struct dm_dirty_log_type *__find_dirty_log_type(const char *name)
static struct dm_dirty_log_type *_get_dirty_log_type(const char *name)
static struct dm_dirty_log_type *get_type(const char *type_name)
static void put_type(struct dm_dirty_log_type *type)
int dm_dirty_log_type_register(struct dm_dirty_log_type *type)
EXPORT_SYMBOL(dm_dirty_log_type_register);
int dm_dirty_log_type_unregister(struct dm_dirty_log_type *type)
EXPORT_SYMBOL(dm_dirty_log_type_unregister);
struct dm_dirty_log *dm_dirty_log_create(const char *type_name,
struct dm_target *ti,
int (*flush_callback_fn)(struct dm_target *ti),
unsigned int argc, char **argv)
EXPORT_SYMBOL(dm_dirty_log_create);
void dm_dirty_log_destroy(struct dm_dirty_log *log)
EXPORT_SYMBOL(dm_dirty_log_destroy);
#define MIRROR_MAGIC 0x4D695272
#define MIRROR_DISK_VERSION 2
#define LOG_OFFSET 2
struct log_header ;
struct log_c ;
static inline int log_test_bit(uint32_t *bs, unsigned bit)
static inline void log_set_bit(struct log_c *l,
uint32_t *bs, unsigned bit)
static inline void log_clear_bit(struct log_c *l,
uint32_t *bs, unsigned bit)
static void header_to_disk(struct log_header *core, struct log_header *disk)
static void header_from_disk(struct log_header *core, struct log_header *disk)
static int rw_header(struct log_c *lc, int rw)
static int flush_header(struct log_c *lc)
static int read_header(struct log_c *log)
static int _check_region_size(struct dm_target *ti, uint32_t region_size)
#define BYTE_SHIFT 3
static int create_log_context(struct dm_dirty_log *log, struct dm_target *ti,
unsigned int argc, char **argv,
struct dm_dev *dev)
static int core_ctr(struct dm_dirty_log *log, struct dm_target *ti,
unsigned int argc, char **argv)
static void destroy_log_context(struct log_c *lc)
static void core_dtr(struct dm_dirty_log *log)
static int disk_ctr(struct dm_dirty_log *log, struct dm_target *ti,
unsigned int argc, char **argv)
static void disk_dtr(struct dm_dirty_log *log)
static int count_bits32(uint32_t *addr, unsigned size)
static void fail_log_device(struct log_c *lc)
static int disk_resume(struct dm_dirty_log *log)
static uint32_t core_get_region_size(struct dm_dirty_log *log)
static int core_resume(struct dm_dirty_log *log)
static int core_is_clean(struct dm_dirty_log *log, region_t region)
static int core_in_sync(struct dm_dirty_log *log, region_t region, int block)
static int core_flush(struct dm_dirty_log *log)
static int disk_flush(struct dm_dirty_log *log)
static void core_mark_region(struct dm_dirty_log *log, region_t region)
static void core_clear_region(struct dm_dirty_log *log, region_t region)
static int core_get_resync_work(struct dm_dirty_log *log, region_t *region)
static void core_set_region_sync(struct dm_dirty_log *log, region_t region,
int in_sync)
static region_t core_get_sync_count(struct dm_dirty_log *log)
#define	DMEMIT_SYNC \
if (lc->sync != DEFAULTSYNC) \
DMEMIT("%ssync ", lc->sync == NOSYNC ? "no" : "")
static int core_status(struct dm_dirty_log *log, status_type_t status,
char *result, unsigned int maxlen)
static int disk_status(struct dm_dirty_log *log, status_type_t status,
char *result, unsigned int maxlen)
static struct dm_dirty_log_type _core_type = ;
static struct dm_dirty_log_type _disk_type = ;
static int __init dm_dirty_log_init(void)
static void __exit dm_dirty_log_exit(void)
module_init(dm_dirty_log_init);
module_exit(dm_dirty_log_exit);
MODULE_DESCRIPTION(DM_NAME " dirty region log");
MODULE_AUTHOR("Joe Thornber, Heinz Mauelshagen <dm-devel@redhat.com>");
MODULE_LICENSE("GPL");
