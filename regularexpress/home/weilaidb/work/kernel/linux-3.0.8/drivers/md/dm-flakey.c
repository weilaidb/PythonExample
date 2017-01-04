#define DM_MSG_PREFIX "flakey"
struct flakey_c ;
static int flakey_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static void flakey_dtr(struct dm_target *ti)
static sector_t flakey_map_sector(struct dm_target *ti, sector_t bi_sector)
static void flakey_map_bio(struct dm_target *ti, struct bio *bio)
static int flakey_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static int flakey_status(struct dm_target *ti, status_type_t type,
char *result, unsigned int maxlen)
static int flakey_ioctl(struct dm_target *ti, unsigned int cmd, unsigned long arg)
static int flakey_merge(struct dm_target *ti, struct bvec_merge_data *bvm,
struct bio_vec *biovec, int max_size)
static int flakey_iterate_devices(struct dm_target *ti, iterate_devices_callout_fn fn, void *data)
static struct target_type flakey_target = ;
static int __init dm_flakey_init(void)
static void __exit dm_flakey_exit(void)
module_init(dm_flakey_init);
module_exit(dm_flakey_exit);
MODULE_DESCRIPTION(DM_NAME " flakey target");
MODULE_AUTHOR("Joe Thornber <dm-devel@redhat.com>");
MODULE_LICENSE("GPL");
