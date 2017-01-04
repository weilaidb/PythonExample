#define DEBUG 0
#if DEBUG
#define PRINTK(x...) printk(x)
#define PRINTK(x...)
#define	NR_RAID1_BIOS 256
static void allow_barrier(conf_t *conf);
static void lower_barrier(conf_t *conf);
static void * r1bio_pool_alloc(gfp_t gfp_flags, void *data)
static void r1bio_pool_free(void *r1_bio, void *data)
#define RESYNC_BLOCK_SIZE (64*1024)
#define RESYNC_SECTORS (RESYNC_BLOCK_SIZE >> 9)
#define RESYNC_PAGES ((RESYNC_BLOCK_SIZE + PAGE_SIZE-1) / PAGE_SIZE)
#define RESYNC_WINDOW (2048*1024)
static void * r1buf_pool_alloc(gfp_t gfp_flags, void *data)
static void r1buf_pool_free(void *__r1_bio, void *data)
static void put_all_bios(conf_t *conf, r1bio_t *r1_bio)
static void free_r1bio(r1bio_t *r1_bio)
static void put_buf(r1bio_t *r1_bio)
static void reschedule_retry(r1bio_t *r1_bio)
static void raid_end_bio_io(r1bio_t *r1_bio)
static inline void update_head_pos(int disk, r1bio_t *r1_bio)
static void raid1_end_read_request(struct bio *bio, int error)
static void r1_bio_write_done(r1bio_t *r1_bio)
static void raid1_end_write_request(struct bio *bio, int error)
static int read_balance(conf_t *conf, r1bio_t *r1_bio)
int md_raid1_congested(mddev_t *mddev, int bits)
EXPORT_SYMBOL_GPL(md_raid1_congested);
static int raid1_congested(void *data, int bits)
static void flush_pending_writes(conf_t *conf)
#define RESYNC_DEPTH 32
static void raise_barrier(conf_t *conf)
static void lower_barrier(conf_t *conf)
static void wait_barrier(conf_t *conf)
static void allow_barrier(conf_t *conf)
static void freeze_array(conf_t *conf)
static void unfreeze_array(conf_t *conf)
static void alloc_behind_pages(struct bio *bio, r1bio_t *r1_bio)
static int make_request(mddev_t *mddev, struct bio * bio)
static void status(struct seq_file *seq, mddev_t *mddev)
static void error(mddev_t *mddev, mdk_rdev_t *rdev)
static void print_conf(conf_t *conf)
static void close_sync(conf_t *conf)
static int raid1_spare_active(mddev_t *mddev)
static int raid1_add_disk(mddev_t *mddev, mdk_rdev_t *rdev)
static int raid1_remove_disk(mddev_t *mddev, int number)
static void end_sync_read(struct bio *bio, int error)
static void end_sync_write(struct bio *bio, int error)
static int fix_sync_read_error(r1bio_t *r1_bio)
static int process_checks(r1bio_t *r1_bio)
static void sync_request_write(mddev_t *mddev, r1bio_t *r1_bio)
static void fix_read_error(conf_t *conf, int read_disk,
sector_t sect, int sectors)
static void raid1d(mddev_t *mddev)
static int init_resync(conf_t *conf)
static sector_t sync_request(mddev_t *mddev, sector_t sector_nr, int *skipped, int go_faster)
static sector_t raid1_size(mddev_t *mddev, sector_t sectors, int raid_disks)
static conf_t *setup_conf(mddev_t *mddev)
static int run(mddev_t *mddev)
static int stop(mddev_t *mddev)
static int raid1_resize(mddev_t *mddev, sector_t sectors)
static int raid1_reshape(mddev_t *mddev)
static void raid1_quiesce(mddev_t *mddev, int state)
static void *raid1_takeover(mddev_t *mddev)
static struct mdk_personality raid1_personality =
;
static int __init raid_init(void)
static void raid_exit(void)
module_init(raid_init);
module_exit(raid_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RAID1 (mirroring) personality for MD");
MODULE_ALIAS("md-personality-3");
MODULE_ALIAS("md-raid1");
MODULE_ALIAS("md-level-1");
