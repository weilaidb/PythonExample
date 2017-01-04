#define DM_MSG_PREFIX "striped"
#define DM_IO_ERROR_THRESHOLD 15
struct stripe ;
struct stripe_c ;
static void trigger_event(struct work_struct *work)
static inline struct stripe_c *alloc_context(unsigned int stripes)
static int get_stripe(struct dm_target *ti, struct stripe_c *sc,
unsigned int stripe, char **argv)
static int stripe_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static void stripe_dtr(struct dm_target *ti)
static void stripe_map_sector(struct stripe_c *sc, sector_t sector,
uint32_t *stripe, sector_t *result)
static void stripe_map_range_sector(struct stripe_c *sc, sector_t sector,
uint32_t target_stripe, sector_t *result)
static int stripe_map_discard(struct stripe_c *sc, struct bio *bio,
uint32_t target_stripe)
static int stripe_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static int stripe_status(struct dm_target *ti,
status_type_t type, char *result, unsigned int maxlen)
static int stripe_end_io(struct dm_target *ti, struct bio *bio,
int error, union map_info *map_context)
static int stripe_iterate_devices(struct dm_target *ti,
iterate_devices_callout_fn fn, void *data)
static void stripe_io_hints(struct dm_target *ti,
struct queue_limits *limits)
static int stripe_merge(struct dm_target *ti, struct bvec_merge_data *bvm,
struct bio_vec *biovec, int max_size)
static struct target_type stripe_target = ;
int __init dm_stripe_init(void)
void dm_stripe_exit(void)
