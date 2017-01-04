static inline dev_info_t *which_dev(mddev_t *mddev, sector_t sector)
static int linear_mergeable_bvec(struct request_queue *q,
struct bvec_merge_data *bvm,
struct bio_vec *biovec)
static int linear_congested(void *data, int bits)
static sector_t linear_size(mddev_t *mddev, sector_t sectors, int raid_disks)
static linear_conf_t *linear_conf(mddev_t *mddev, int raid_disks)
static int linear_run (mddev_t *mddev)
static void free_conf(struct rcu_head *head)
static int linear_add(mddev_t *mddev, mdk_rdev_t *rdev)
static int linear_stop (mddev_t *mddev)
static int linear_make_request (mddev_t *mddev, struct bio *bio)
static void linear_status (struct seq_file *seq, mddev_t *mddev)
static struct mdk_personality linear_personality =
;
static int __init linear_init (void)
static void linear_exit (void)
module_init(linear_init);
module_exit(linear_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Linear device concatenation personality for MD");
MODULE_ALIAS("md-personality-1");
MODULE_ALIAS("md-linear");
MODULE_ALIAS("md-level--1");
