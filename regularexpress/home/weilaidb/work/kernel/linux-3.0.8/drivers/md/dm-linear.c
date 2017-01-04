#define DM_MSG_PREFIX "linear"
struct linear_c ;
static int linear_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static void linear_dtr(struct dm_target *ti)
static sector_t linear_map_sector(struct dm_target *ti, sector_t bi_sector)
static void linear_map_bio(struct dm_target *ti, struct bio *bio)
static int linear_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static int linear_status(struct dm_target *ti, status_type_t type,
char *result, unsigned int maxlen)
static int linear_ioctl(struct dm_target *ti, unsigned int cmd,
unsigned long arg)
static int linear_merge(struct dm_target *ti, struct bvec_merge_data *bvm,
struct bio_vec *biovec, int max_size)
static int linear_iterate_devices(struct dm_target *ti,
iterate_devices_callout_fn fn, void *data)
static struct target_type linear_target = ;
int __init dm_linear_init(void)
void dm_linear_exit(void)
