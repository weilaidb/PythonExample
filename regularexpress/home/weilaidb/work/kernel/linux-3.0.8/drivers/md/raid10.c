#define	NR_RAID10_BIOS 256
static void allow_barrier(conf_t *conf);
static void lower_barrier(conf_t *conf);
static void * r10bio_pool_alloc(gfp_t gfp_flags, void *data)
static void r10bio_pool_free(void *r10_bio, void *data)
#define RESYNC_BLOCK_SIZE (64*1024)
#define RESYNC_PAGES ((RESYNC_BLOCK_SIZE + PAGE_SIZE-1) / PAGE_SIZE)
#define RESYNC_WINDOW (1024*1024)
#define RESYNC_DEPTH (32*1024*1024/RESYNC_BLOCK_SIZE)
static void * r10buf_pool_alloc(gfp_t gfp_flags, void *data)
static void r10buf_pool_free(void *__r10_bio, void *data)
static void put_all_bios(conf_t *conf, r10bio_t *r10_bio)
static void free_r10bio(r10bio_t *r10_bio)
static void put_buf(r10bio_t *r10_bio)
static void reschedule_retry(r10bio_t *r10_bio)
static void raid_end_bio_io(r10bio_t *r10_bio)
static inline void update_head_pos(int slot, r10bio_t *r10_bio)
static void raid10_end_read_request(struct bio *bio, int error)
static void raid10_end_write_request(struct bio *bio, int error)
static void raid10_find_phys(conf_t *conf, r10bio_t *r10bio)
static sector_t raid10_find_virt(conf_t *conf, sector_t sector, int dev)
static int raid10_mergeable_bvec(struct request_queue *q,
struct bvec_merge_data *bvm,
struct bio_vec *biovec)
static int read_balance(conf_t *conf, r10bio_t *r10_bio)
static int raid10_congested(void *data, int bits)
static void flush_pending_writes(conf_t *conf)
static void raise_barrier(conf_t *conf, int force)
static void lower_barrier(conf_t *conf)
static void wait_barrier(conf_t *conf)
static void allow_barrier(conf_t *conf)
static void freeze_array(conf_t *conf)
static void unfreeze_array(conf_t *conf)
static int make_request(mddev_t *mddev, struct bio * bio)
static void status(struct seq_file *seq, mddev_t *mddev)
static void error(mddev_t *mddev, mdk_rdev_t *rdev)
static void print_conf(conf_t *conf)
static void close_sync(conf_t *conf)
static int enough(conf_t *conf)
static int raid10_spare_active(mddev_t *mddev)
static int raid10_add_disk(mddev_t *mddev, mdk_rdev_t *rdev)
static int raid10_remove_disk(mddev_t *mddev, int number)
static void end_sync_read(struct bio *bio, int error)
static void end_sync_write(struct bio *bio, int error)
static void sync_request_write(mddev_t *mddev, r10bio_t *r10_bio)
static void recovery_request_write(mddev_t *mddev, r10bio_t *r10_bio)
static void check_decay_read_errors(mddev_t *mddev, mdk_rdev_t *rdev)
static void fix_read_error(conf_t *conf, mddev_t *mddev, r10bio_t *r10_bio)
static void raid10d(mddev_t *mddev)
static int init_resync(conf_t *conf)
static sector_t sync_request(mddev_t *mddev, sector_t sector_nr,
int *skipped, int go_faster)
static sector_t
raid10_size(mddev_t *mddev, sector_t sectors, int raid_disks)
static conf_t *setup_conf(mddev_t *mddev)
static int run(mddev_t *mddev)
static int stop(mddev_t *mddev)
static void raid10_quiesce(mddev_t *mddev, int state)
static void *raid10_takeover_raid0(mddev_t *mddev)
static void *raid10_takeover(mddev_t *mddev)
static struct mdk_personality raid10_personality =
;
static int __init raid_init(void)
static void raid_exit(void)
module_init(raid_init);
module_exit(raid_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RAID10 (striped mirror) personality for MD");
MODULE_ALIAS("md-personality-9");
MODULE_ALIAS("md-raid10");
MODULE_ALIAS("md-level-10");
