static int raid0_congested(void *data, int bits)
static void dump_zones(mddev_t *mddev)
static int create_strip_zones(mddev_t *mddev, raid0_conf_t **private_conf)
static int raid0_mergeable_bvec(struct request_queue *q,
struct bvec_merge_data *bvm,
struct bio_vec *biovec)
static sector_t raid0_size(mddev_t *mddev, sector_t sectors, int raid_disks)
static int raid0_run(mddev_t *mddev)
static int raid0_stop(mddev_t *mddev)
static struct strip_zone *find_zone(struct raid0_private_data *conf,
sector_t *sectorp)
static mdk_rdev_t *map_sector(mddev_t *mddev, struct strip_zone *zone,
sector_t sector, sector_t *sector_offset)
static inline int is_io_in_chunk_boundary(mddev_t *mddev,
unsigned int chunk_sects, struct bio *bio)
static int raid0_make_request(mddev_t *mddev, struct bio *bio)
static void raid0_status(struct seq_file *seq, mddev_t *mddev)
static void *raid0_takeover_raid45(mddev_t *mddev)
static void *raid0_takeover_raid10(mddev_t *mddev)
static void *raid0_takeover_raid1(mddev_t *mddev)
static void *raid0_takeover(mddev_t *mddev)
static void raid0_quiesce(mddev_t *mddev, int state)
static struct mdk_personality raid0_personality=
;
static int __init raid0_init (void)
static void raid0_exit (void)
module_init(raid0_init);
module_exit(raid0_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RAID0 (striping) personality for MD");
MODULE_ALIAS("md-personality-2");
MODULE_ALIAS("md-raid0");
MODULE_ALIAS("md-level-0");
