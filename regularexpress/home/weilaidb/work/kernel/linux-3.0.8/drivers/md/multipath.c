#define MAX_WORK_PER_DISK 128
#define	NR_RESERVED_BUFS	32
static int multipath_map (multipath_conf_t *conf)
static void multipath_reschedule_retry (struct multipath_bh *mp_bh)
static void multipath_end_bh_io (struct multipath_bh *mp_bh, int err)
static void multipath_end_request(struct bio *bio, int error)
static int multipath_make_request(mddev_t *mddev, struct bio * bio)
static void multipath_status (struct seq_file *seq, mddev_t *mddev)
static int multipath_congested(void *data, int bits)
static void multipath_error (mddev_t *mddev, mdk_rdev_t *rdev)
static void print_multipath_conf (multipath_conf_t *conf)
static int multipath_add_disk(mddev_t *mddev, mdk_rdev_t *rdev)
static int multipath_remove_disk(mddev_t *mddev, int number)
static void multipathd (mddev_t *mddev)
static sector_t multipath_size(mddev_t *mddev, sector_t sectors, int raid_disks)
static int multipath_run (mddev_t *mddev)
static int multipath_stop (mddev_t *mddev)
static struct mdk_personality multipath_personality =
;
static int __init multipath_init (void)
static void __exit multipath_exit (void)
module_init(multipath_init);
module_exit(multipath_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("simple multi-path personality for MD");
MODULE_ALIAS("md-personality-7");
MODULE_ALIAS("md-multipath");
MODULE_ALIAS("md-level--4");
