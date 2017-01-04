#define DM_LOG_USERSPACE_VSN "1.1.0"
struct flush_entry ;
#define MAX_FLUSH_GROUP_COUNT 32
struct log_c ;
static mempool_t *flush_entry_pool;
static void *flush_entry_alloc(gfp_t gfp_mask, void *pool_data)
static void flush_entry_free(void *element, void *pool_data)
static int userspace_do_request(struct log_c *lc, const char *uuid,
int request_type, char *data, size_t data_size,
char *rdata, size_t *rdata_size)
static int build_constructor_string(struct dm_target *ti,
unsigned argc, char **argv,
char **ctr_str)
static int userspace_ctr(struct dm_dirty_log *log, struct dm_target *ti,
unsigned argc, char **argv)
static void userspace_dtr(struct dm_dirty_log *log)
static int userspace_presuspend(struct dm_dirty_log *log)
static int userspace_postsuspend(struct dm_dirty_log *log)
static int userspace_resume(struct dm_dirty_log *log)
static uint32_t userspace_get_region_size(struct dm_dirty_log *log)
static int userspace_is_clean(struct dm_dirty_log *log, region_t region)
static int userspace_in_sync(struct dm_dirty_log *log, region_t region,
int can_block)
static int flush_one_by_one(struct log_c *lc, struct list_head *flush_list)
static int flush_by_group(struct log_c *lc, struct list_head *flush_list)
static int userspace_flush(struct dm_dirty_log *log)
static void userspace_mark_region(struct dm_dirty_log *log, region_t region)
static void userspace_clear_region(struct dm_dirty_log *log, region_t region)
static int userspace_get_resync_work(struct dm_dirty_log *log, region_t *region)
static void userspace_set_region_sync(struct dm_dirty_log *log,
region_t region, int in_sync)
static region_t userspace_get_sync_count(struct dm_dirty_log *log)
static int userspace_status(struct dm_dirty_log *log, status_type_t status_type,
char *result, unsigned maxlen)
static int userspace_is_remote_recovering(struct dm_dirty_log *log,
region_t region)
static struct dm_dirty_log_type _userspace_type = ;
static int __init userspace_dirty_log_init(void)
static void __exit userspace_dirty_log_exit(void)
module_init(userspace_dirty_log_init);
module_exit(userspace_dirty_log_exit);
MODULE_DESCRIPTION(DM_NAME " userspace dirty log link");
MODULE_AUTHOR("Jonathan Brassow <dm-devel@redhat.com>");
MODULE_LICENSE("GPL");
