#define	DM_MSG_PREFIX	"region hash"
struct dm_region_hash ;
struct dm_region ;
static region_t dm_rh_sector_to_region(struct dm_region_hash *rh, sector_t sector)
sector_t dm_rh_region_to_sector(struct dm_region_hash *rh, region_t region)
EXPORT_SYMBOL_GPL(dm_rh_region_to_sector);
region_t dm_rh_bio_to_region(struct dm_region_hash *rh, struct bio *bio)
EXPORT_SYMBOL_GPL(dm_rh_bio_to_region);
void *dm_rh_region_context(struct dm_region *reg)
EXPORT_SYMBOL_GPL(dm_rh_region_context);
region_t dm_rh_get_region_key(struct dm_region *reg)
EXPORT_SYMBOL_GPL(dm_rh_get_region_key);
sector_t dm_rh_get_region_size(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_rh_get_region_size);
#define RH_HASH_MULT 2654435387U
#define RH_HASH_SHIFT 12
#define MIN_REGIONS 64
struct dm_region_hash *dm_region_hash_create(
void *context, void (*dispatch_bios)(void *context,
struct bio_list *bios),
void (*wakeup_workers)(void *context),
void (*wakeup_all_recovery_waiters)(void *context),
sector_t target_begin, unsigned max_recovery,
struct dm_dirty_log *log, uint32_t region_size,
region_t nr_regions)
EXPORT_SYMBOL_GPL(dm_region_hash_create);
void dm_region_hash_destroy(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_region_hash_destroy);
struct dm_dirty_log *dm_rh_dirty_log(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_rh_dirty_log);
static unsigned rh_hash(struct dm_region_hash *rh, region_t region)
static struct dm_region *__rh_lookup(struct dm_region_hash *rh, region_t region)
static void __rh_insert(struct dm_region_hash *rh, struct dm_region *reg)
static struct dm_region *__rh_alloc(struct dm_region_hash *rh, region_t region)
static struct dm_region *__rh_find(struct dm_region_hash *rh, region_t region)
int dm_rh_get_state(struct dm_region_hash *rh, region_t region, int may_block)
EXPORT_SYMBOL_GPL(dm_rh_get_state);
static void complete_resync_work(struct dm_region *reg, int success)
void dm_rh_mark_nosync(struct dm_region_hash *rh, struct bio *bio)
EXPORT_SYMBOL_GPL(dm_rh_mark_nosync);
void dm_rh_update_states(struct dm_region_hash *rh, int errors_handled)
EXPORT_SYMBOL_GPL(dm_rh_update_states);
static void rh_inc(struct dm_region_hash *rh, region_t region)
void dm_rh_inc_pending(struct dm_region_hash *rh, struct bio_list *bios)
EXPORT_SYMBOL_GPL(dm_rh_inc_pending);
void dm_rh_dec(struct dm_region_hash *rh, region_t region)
EXPORT_SYMBOL_GPL(dm_rh_dec);
static int __rh_recovery_prepare(struct dm_region_hash *rh)
void dm_rh_recovery_prepare(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_rh_recovery_prepare);
struct dm_region *dm_rh_recovery_start(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_rh_recovery_start);
void dm_rh_recovery_end(struct dm_region *reg, int success)
EXPORT_SYMBOL_GPL(dm_rh_recovery_end);
int dm_rh_recovery_in_flight(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_rh_recovery_in_flight);
int dm_rh_flush(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_rh_flush);
void dm_rh_delay(struct dm_region_hash *rh, struct bio *bio)
EXPORT_SYMBOL_GPL(dm_rh_delay);
void dm_rh_stop_recovery(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_rh_stop_recovery);
void dm_rh_start_recovery(struct dm_region_hash *rh)
EXPORT_SYMBOL_GPL(dm_rh_start_recovery);
MODULE_DESCRIPTION(DM_NAME " region hash");
MODULE_AUTHOR("Joe Thornber/Heinz Mauelshagen <dm-devel@redhat.com>");
MODULE_LICENSE("GPL");
