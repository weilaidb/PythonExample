#define DM_MSG_PREFIX "raid1"
#define MAX_RECOVERY 1
#define DM_RAID1_HANDLE_ERRORS 0x01
#define errors_handled(p)	((p)->features & DM_RAID1_HANDLE_ERRORS)
static DECLARE_WAIT_QUEUE_HEAD(_kmirrord_recovery_stopped);
enum dm_raid1_error ;
struct mirror ;
struct mirror_set ;
static void wakeup_mirrord(void *context)
static void delayed_wake_fn(unsigned long data)
static void delayed_wake(struct mirror_set *ms)
static void wakeup_all_recovery_waiters(void *context)
static void queue_bio(struct mirror_set *ms, struct bio *bio, int rw)
static void dispatch_bios(void *context, struct bio_list *bio_list)
#define MIN_READ_RECORDS 20
struct dm_raid1_read_record ;
static struct kmem_cache *_dm_raid1_read_record_cache;
#define DEFAULT_MIRROR 0
static struct mirror *bio_get_m(struct bio *bio)
static void bio_set_m(struct bio *bio, struct mirror *m)
static struct mirror *get_default_mirror(struct mirror_set *ms)
static void set_default_mirror(struct mirror *m)
static struct mirror *get_valid_mirror(struct mirror_set *ms)
static void fail_mirror(struct mirror *m, enum dm_raid1_error error_type)
static int mirror_flush(struct dm_target *ti)
static void recovery_complete(int read_err, unsigned long write_err,
void *context)
static int recover(struct mirror_set *ms, struct dm_region *reg)
static void do_recovery(struct mirror_set *ms)
static struct mirror *choose_mirror(struct mirror_set *ms, sector_t sector)
static int default_ok(struct mirror *m)
static int mirror_available(struct mirror_set *ms, struct bio *bio)
static sector_t map_sector(struct mirror *m, struct bio *bio)
static void map_bio(struct mirror *m, struct bio *bio)
static void map_region(struct dm_io_region *io, struct mirror *m,
struct bio *bio)
static void hold_bio(struct mirror_set *ms, struct bio *bio)
static void read_callback(unsigned long error, void *context)
static void read_async_bio(struct mirror *m, struct bio *bio)
static inline int region_in_sync(struct mirror_set *ms, region_t region,
int may_block)
static void do_reads(struct mirror_set *ms, struct bio_list *reads)
static void write_callback(unsigned long error, void *context)
static void do_write(struct mirror_set *ms, struct bio *bio)
static void do_writes(struct mirror_set *ms, struct bio_list *writes)
static void do_failures(struct mirror_set *ms, struct bio_list *failures)
static void trigger_event(struct work_struct *work)
static void do_mirror(struct work_struct *work)
static struct mirror_set *alloc_context(unsigned int nr_mirrors,
uint32_t region_size,
struct dm_target *ti,
struct dm_dirty_log *dl)
static void free_context(struct mirror_set *ms, struct dm_target *ti,
unsigned int m)
static int get_mirror(struct mirror_set *ms, struct dm_target *ti,
unsigned int mirror, char **argv)
static struct dm_dirty_log *create_dirty_log(struct dm_target *ti,
unsigned argc, char **argv,
unsigned *args_used)
static int parse_features(struct mirror_set *ms, unsigned argc, char **argv,
unsigned *args_used)
static int mirror_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static void mirror_dtr(struct dm_target *ti)
static int mirror_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static int mirror_end_io(struct dm_target *ti, struct bio *bio,
int error, union map_info *map_context)
static void mirror_presuspend(struct dm_target *ti)
static void mirror_postsuspend(struct dm_target *ti)
static void mirror_resume(struct dm_target *ti)
static char device_status_char(struct mirror *m)
static int mirror_status(struct dm_target *ti, status_type_t type,
char *result, unsigned int maxlen)
static int mirror_iterate_devices(struct dm_target *ti,
iterate_devices_callout_fn fn, void *data)
static struct target_type mirror_target = ;
static int __init dm_mirror_init(void)
static void __exit dm_mirror_exit(void)
module_init(dm_mirror_init);
module_exit(dm_mirror_exit);
MODULE_DESCRIPTION(DM_NAME " mirror target");
MODULE_AUTHOR("Joe Thornber");
MODULE_LICENSE("GPL");
