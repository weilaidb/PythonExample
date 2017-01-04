#define DM_MSG_PREFIX "snapshots"
static const char dm_snapshot_merge_target_name[] = "snapshot-merge";
#define dm_target_is_snapshot_merge(ti) \
((ti)->type->name == dm_snapshot_merge_target_name)
#define WAKE_UP_PERCENT 5
#define SNAPSHOT_COPY_PRIORITY 2
#define MIN_IOS 256
#define DM_TRACKED_CHUNK_HASH_SIZE	16
#define DM_TRACKED_CHUNK_HASH(x)	((unsigned long)(x) & \
(DM_TRACKED_CHUNK_HASH_SIZE - 1))
struct dm_exception_table ;
struct dm_snapshot ;
#define RUNNING_MERGE          0
#define SHUTDOWN_MERGE         1
struct dm_dev *dm_snap_origin(struct dm_snapshot *s)
EXPORT_SYMBOL(dm_snap_origin);
struct dm_dev *dm_snap_cow(struct dm_snapshot *s)
EXPORT_SYMBOL(dm_snap_cow);
static sector_t chunk_to_sector(struct dm_exception_store *store,
chunk_t chunk)
static int bdev_equal(struct block_device *lhs, struct block_device *rhs)
struct dm_snap_pending_exception ;
static struct kmem_cache *exception_cache;
static struct kmem_cache *pending_cache;
struct dm_snap_tracked_chunk ;
static struct kmem_cache *tracked_chunk_cache;
static struct dm_snap_tracked_chunk *track_chunk(struct dm_snapshot *s,
chunk_t chunk)
static void stop_tracking_chunk(struct dm_snapshot *s,
struct dm_snap_tracked_chunk *c)
static int __chunk_is_tracked(struct dm_snapshot *s, chunk_t chunk)
static void __check_for_conflicting_io(struct dm_snapshot *s, chunk_t chunk)
struct origin ;
#define ORIGIN_HASH_SIZE 256
#define ORIGIN_MASK      0xFF
static struct list_head *_origins;
static struct rw_semaphore _origins_lock;
static DECLARE_WAIT_QUEUE_HEAD(_pending_exceptions_done);
static DEFINE_SPINLOCK(_pending_exceptions_done_spinlock);
static uint64_t _pending_exceptions_done_count;
static int init_origin_hash(void)
static void exit_origin_hash(void)
static unsigned origin_hash(struct block_device *bdev)
static struct origin *__lookup_origin(struct block_device *origin)
static void __insert_origin(struct origin *o)
static int __find_snapshots_sharing_cow(struct dm_snapshot *snap,
struct dm_snapshot **snap_src,
struct dm_snapshot **snap_dest,
struct dm_snapshot **snap_merge)
static int __validate_exception_handover(struct dm_snapshot *snap)
static void __insert_snapshot(struct origin *o, struct dm_snapshot *s)
static int register_snapshot(struct dm_snapshot *snap)
static void reregister_snapshot(struct dm_snapshot *s)
static void unregister_snapshot(struct dm_snapshot *s)
static int dm_exception_table_init(struct dm_exception_table *et,
uint32_t size, unsigned hash_shift)
static void dm_exception_table_exit(struct dm_exception_table *et,
struct kmem_cache *mem)
static uint32_t exception_hash(struct dm_exception_table *et, chunk_t chunk)
static void dm_remove_exception(struct dm_exception *e)
static struct dm_exception *dm_lookup_exception(struct dm_exception_table *et,
chunk_t chunk)
static struct dm_exception *alloc_completed_exception(void)
static void free_completed_exception(struct dm_exception *e)
static struct dm_snap_pending_exception *alloc_pending_exception(struct dm_snapshot *s)
static void free_pending_exception(struct dm_snap_pending_exception *pe)
static void dm_insert_exception(struct dm_exception_table *eh,
struct dm_exception *new_e)
static int dm_add_exception(void *context, chunk_t old, chunk_t new)
static sector_t __minimum_chunk_size(struct origin *o)
static int calc_max_buckets(void)
static int init_hash_tables(struct dm_snapshot *s)
static void merge_shutdown(struct dm_snapshot *s)
static struct bio *__release_queued_bios_after_merge(struct dm_snapshot *s)
static int __remove_single_exception_chunk(struct dm_snapshot *s,
chunk_t old_chunk)
static void flush_bios(struct bio *bio);
static int remove_single_exception_chunk(struct dm_snapshot *s)
static int origin_write_extent(struct dm_snapshot *merging_snap,
sector_t sector, unsigned chunk_size);
static void merge_callback(int read_err, unsigned long write_err,
void *context);
static uint64_t read_pending_exceptions_done_count(void)
static void increment_pending_exceptions_done_count(void)
static void snapshot_merge_next_chunks(struct dm_snapshot *s)
static void error_bios(struct bio *bio);
static void merge_callback(int read_err, unsigned long write_err, void *context)
static void start_merge(struct dm_snapshot *s)
static int wait_schedule(void *ptr)
static void stop_merge(struct dm_snapshot *s)
static int snapshot_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static void __free_exceptions(struct dm_snapshot *s)
static void __handover_exceptions(struct dm_snapshot *snap_src,
struct dm_snapshot *snap_dest)
static void snapshot_dtr(struct dm_target *ti)
static void flush_bios(struct bio *bio)
static int do_origin(struct dm_dev *origin, struct bio *bio);
static void retry_origin_bios(struct dm_snapshot *s, struct bio *bio)
static void error_bios(struct bio *bio)
static void __invalidate_snapshot(struct dm_snapshot *s, int err)
static void pending_complete(struct dm_snap_pending_exception *pe, int success)
static void commit_callback(void *context, int success)
static void copy_callback(int read_err, unsigned long write_err, void *context)
static void start_copy(struct dm_snap_pending_exception *pe)
static struct dm_snap_pending_exception *
__lookup_pending_exception(struct dm_snapshot *s, chunk_t chunk)
static struct dm_snap_pending_exception *
__find_pending_exception(struct dm_snapshot *s,
struct dm_snap_pending_exception *pe, chunk_t chunk)
static void remap_exception(struct dm_snapshot *s, struct dm_exception *e,
struct bio *bio, chunk_t chunk)
static int snapshot_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static int snapshot_merge_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static int snapshot_end_io(struct dm_target *ti, struct bio *bio,
int error, union map_info *map_context)
static void snapshot_merge_presuspend(struct dm_target *ti)
static int snapshot_preresume(struct dm_target *ti)
static void snapshot_resume(struct dm_target *ti)
static sector_t get_origin_minimum_chunksize(struct block_device *bdev)
static void snapshot_merge_resume(struct dm_target *ti)
static int snapshot_status(struct dm_target *ti, status_type_t type,
char *result, unsigned int maxlen)
static int snapshot_iterate_devices(struct dm_target *ti,
iterate_devices_callout_fn fn, void *data)
static int __origin_write(struct list_head *snapshots, sector_t sector,
struct bio *bio)
static int do_origin(struct dm_dev *origin, struct bio *bio)
static int origin_write_extent(struct dm_snapshot *merging_snap,
sector_t sector, unsigned size)
static int origin_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static void origin_dtr(struct dm_target *ti)
static int origin_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static void origin_resume(struct dm_target *ti)
static int origin_status(struct dm_target *ti, status_type_t type, char *result,
unsigned int maxlen)
static int origin_merge(struct dm_target *ti, struct bvec_merge_data *bvm,
struct bio_vec *biovec, int max_size)
static int origin_iterate_devices(struct dm_target *ti,
iterate_devices_callout_fn fn, void *data)
static struct target_type origin_target = ;
static struct target_type snapshot_target = ;
static struct target_type merge_target = ;
static int __init dm_snapshot_init(void)
static void __exit dm_snapshot_exit(void)
module_init(dm_snapshot_init);
module_exit(dm_snapshot_exit);
MODULE_DESCRIPTION(DM_NAME " snapshot target");
MODULE_AUTHOR("Joe Thornber");
MODULE_LICENSE("GPL");
