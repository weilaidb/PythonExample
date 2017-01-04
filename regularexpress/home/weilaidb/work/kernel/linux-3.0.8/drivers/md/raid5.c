#define NR_STRIPES		256
#define STRIPE_SIZE		PAGE_SIZE
#define STRIPE_SHIFT		(PAGE_SHIFT - 9)
#define STRIPE_SECTORS		(STRIPE_SIZE>>9)
#define	IO_THRESHOLD		1
#define BYPASS_THRESHOLD	1
#define NR_HASH			(PAGE_SIZE / sizeof(struct hlist_head))
#define HASH_MASK		(NR_HASH - 1)
#define stripe_hash(conf, sect)	(&((conf)->stripe_hashtbl[((sect) >> STRIPE_SHIFT) & HASH_MASK]))
#define r5_next_bio(bio, sect) ( ( (bio)->bi_sector + ((bio)->bi_size>>9) < sect + STRIPE_SECTORS) ? (bio)->bi_next : NULL)
#define RAID5_PARANOIA	1
#if RAID5_PARANOIA && defined(CONFIG_SMP)
# define CHECK_DEVLOCK() assert_spin_locked(&conf->device_lock)
# define CHECK_DEVLOCK()
#define inline
#define __inline__
#define printk_rl(args...) ((void) (printk_ratelimit() && printk(args)))
static inline int raid5_bi_phys_segments(struct bio *bio)
static inline int raid5_bi_hw_segments(struct bio *bio)
static inline int raid5_dec_bi_phys_segments(struct bio *bio)
static inline int raid5_dec_bi_hw_segments(struct bio *bio)
static inline void raid5_set_bi_hw_segments(struct bio *bio, unsigned int cnt)
static inline int raid6_d0(struct stripe_head *sh)
static inline int raid6_next_disk(int disk, int raid_disks)
static int raid6_idx_to_slot(int idx, struct stripe_head *sh,
int *count, int syndrome_disks)
static void return_io(struct bio *return_bi)
static void print_raid5_conf (raid5_conf_t *conf);
static int stripe_operations_active(struct stripe_head *sh)
static void __release_stripe(raid5_conf_t *conf, struct stripe_head *sh)
static void release_stripe(struct stripe_head *sh)
static inline void remove_hash(struct stripe_head *sh)
static inline void insert_hash(raid5_conf_t *conf, struct stripe_head *sh)
static struct stripe_head *get_free_stripe(raid5_conf_t *conf)
static void shrink_buffers(struct stripe_head *sh)
static int grow_buffers(struct stripe_head *sh)
static void raid5_build_block(struct stripe_head *sh, int i, int previous);
static void stripe_set_idx(sector_t stripe, raid5_conf_t *conf, int previous,
struct stripe_head *sh);
static void init_stripe(struct stripe_head *sh, sector_t sector, int previous)
static struct stripe_head *__find_stripe(raid5_conf_t *conf, sector_t sector,
short generation)
static int has_failed(raid5_conf_t *conf)
static struct stripe_head *
get_active_stripe(raid5_conf_t *conf, sector_t sector,
int previous, int noblock, int noquiesce)
static void
raid5_end_read_request(struct bio *bi, int error);
static void
raid5_end_write_request(struct bio *bi, int error);
static void ops_run_io(struct stripe_head *sh, struct stripe_head_state *s)
static struct dma_async_tx_descriptor *
async_copy_data(int frombio, struct bio *bio, struct page *page,
sector_t sector, struct dma_async_tx_descriptor *tx)
static void ops_complete_biofill(void *stripe_head_ref)
static void ops_run_biofill(struct stripe_head *sh)
static void mark_target_uptodate(struct stripe_head *sh, int target)
static void ops_complete_compute(void *stripe_head_ref)
static addr_conv_t *to_addr_conv(struct stripe_head *sh,
struct raid5_percpu *percpu)
static struct dma_async_tx_descriptor *
ops_run_compute5(struct stripe_head *sh, struct raid5_percpu *percpu)
static int set_syndrome_sources(struct page **srcs, struct stripe_head *sh)
static struct dma_async_tx_descriptor *
ops_run_compute6_1(struct stripe_head *sh, struct raid5_percpu *percpu)
static struct dma_async_tx_descriptor *
ops_run_compute6_2(struct stripe_head *sh, struct raid5_percpu *percpu)
static void ops_complete_prexor(void *stripe_head_ref)
static struct dma_async_tx_descriptor *
ops_run_prexor(struct stripe_head *sh, struct raid5_percpu *percpu,
struct dma_async_tx_descriptor *tx)
static struct dma_async_tx_descriptor *
ops_run_biodrain(struct stripe_head *sh, struct dma_async_tx_descriptor *tx)
static void ops_complete_reconstruct(void *stripe_head_ref)
static void
ops_run_reconstruct5(struct stripe_head *sh, struct raid5_percpu *percpu,
struct dma_async_tx_descriptor *tx)
static void
ops_run_reconstruct6(struct stripe_head *sh, struct raid5_percpu *percpu,
struct dma_async_tx_descriptor *tx)
static void ops_complete_check(void *stripe_head_ref)
static void ops_run_check_p(struct stripe_head *sh, struct raid5_percpu *percpu)
static void ops_run_check_pq(struct stripe_head *sh, struct raid5_percpu *percpu, int checkp)
static void __raid_run_ops(struct stripe_head *sh, unsigned long ops_request)
static void async_run_ops(void *param, async_cookie_t cookie)
static void raid_run_ops(struct stripe_head *sh, unsigned long ops_request)
#define raid_run_ops __raid_run_ops
static int grow_one_stripe(raid5_conf_t *conf)
static int grow_stripes(raid5_conf_t *conf, int num)
static size_t scribble_len(int num)
static int resize_stripes(raid5_conf_t *conf, int newsize)
static int drop_one_stripe(raid5_conf_t *conf)
static void shrink_stripes(raid5_conf_t *conf)
static void raid5_end_read_request(struct bio * bi, int error)
static void raid5_end_write_request(struct bio *bi, int error)
static sector_t compute_blocknr(struct stripe_head *sh, int i, int previous);
static void raid5_build_block(struct stripe_head *sh, int i, int previous)
static void error(mddev_t *mddev, mdk_rdev_t *rdev)
static sector_t raid5_compute_sector(raid5_conf_t *conf, sector_t r_sector,
int previous, int *dd_idx,
struct stripe_head *sh)
static sector_t compute_blocknr(struct stripe_head *sh, int i, int previous)
static void
schedule_reconstruction(struct stripe_head *sh, struct stripe_head_state *s,
int rcw, int expand)
static int add_stripe_bio(struct stripe_head *sh, struct bio *bi, int dd_idx, int forwrite)
static void end_reshape(raid5_conf_t *conf);
static void stripe_set_idx(sector_t stripe, raid5_conf_t *conf, int previous,
struct stripe_head *sh)
static void
handle_failed_stripe(raid5_conf_t *conf, struct stripe_head *sh,
struct stripe_head_state *s, int disks,
struct bio **return_bi)
static int fetch_block5(struct stripe_head *sh, struct stripe_head_state *s,
int disk_idx, int disks)
static void handle_stripe_fill5(struct stripe_head *sh,
struct stripe_head_state *s, int disks)
static int fetch_block6(struct stripe_head *sh, struct stripe_head_state *s,
struct r6_state *r6s, int disk_idx, int disks)
static void handle_stripe_fill6(struct stripe_head *sh,
struct stripe_head_state *s, struct r6_state *r6s,
int disks)
static void handle_stripe_clean_event(raid5_conf_t *conf,
struct stripe_head *sh, int disks, struct bio **return_bi)
static void handle_stripe_dirtying5(raid5_conf_t *conf,
struct stripe_head *sh,	struct stripe_head_state *s, int disks)
static void handle_stripe_dirtying6(raid5_conf_t *conf,
struct stripe_head *sh,	struct stripe_head_state *s,
struct r6_state *r6s, int disks)
static void handle_parity_checks5(raid5_conf_t *conf, struct stripe_head *sh,
struct stripe_head_state *s, int disks)
static void handle_parity_checks6(raid5_conf_t *conf, struct stripe_head *sh,
struct stripe_head_state *s,
struct r6_state *r6s, int disks)
static void handle_stripe_expansion(raid5_conf_t *conf, struct stripe_head *sh,
struct r6_state *r6s)
static void handle_stripe5(struct stripe_head *sh)
static void handle_stripe6(struct stripe_head *sh)
static void handle_stripe(struct stripe_head *sh)
static void raid5_activate_delayed(raid5_conf_t *conf)
static void activate_bit_delay(raid5_conf_t *conf)
int md_raid5_congested(mddev_t *mddev, int bits)
EXPORT_SYMBOL_GPL(md_raid5_congested);
static int raid5_congested(void *data, int bits)
static int raid5_mergeable_bvec(struct request_queue *q,
struct bvec_merge_data *bvm,
struct bio_vec *biovec)
static int in_chunk_boundary(mddev_t *mddev, struct bio *bio)
static void add_bio_to_retry(struct bio *bi,raid5_conf_t *conf)
static struct bio *remove_bio_from_retry(raid5_conf_t *conf)
static void raid5_align_endio(struct bio *bi, int error)
static int bio_fits_rdev(struct bio *bi)
static int chunk_aligned_read(mddev_t *mddev, struct bio * raid_bio)
static struct stripe_head *__get_priority_stripe(raid5_conf_t *conf)
static int make_request(mddev_t *mddev, struct bio * bi)
static sector_t raid5_size(mddev_t *mddev, sector_t sectors, int raid_disks);
static sector_t reshape_request(mddev_t *mddev, sector_t sector_nr, int *skipped)
static inline sector_t sync_request(mddev_t *mddev, sector_t sector_nr, int *skipped, int go_faster)
static int  retry_aligned_read(raid5_conf_t *conf, struct bio *raid_bio)
static void raid5d(mddev_t *mddev)
static ssize_t
raid5_show_stripe_cache_size(mddev_t *mddev, char *page)
int
raid5_set_cache_size(mddev_t *mddev, int size)
EXPORT_SYMBOL(raid5_set_cache_size);
static ssize_t
raid5_store_stripe_cache_size(mddev_t *mddev, const char *page, size_t len)
static struct md_sysfs_entry
raid5_stripecache_size = __ATTR(stripe_cache_size, S_IRUGO | S_IWUSR,
raid5_show_stripe_cache_size,
raid5_store_stripe_cache_size);
static ssize_t
raid5_show_preread_threshold(mddev_t *mddev, char *page)
static ssize_t
raid5_store_preread_threshold(mddev_t *mddev, const char *page, size_t len)
static struct md_sysfs_entry
raid5_preread_bypass_threshold = __ATTR(preread_bypass_threshold,
S_IRUGO | S_IWUSR,
raid5_show_preread_threshold,
raid5_store_preread_threshold);
static ssize_t
stripe_cache_active_show(mddev_t *mddev, char *page)
static struct md_sysfs_entry
raid5_stripecache_active = __ATTR_RO(stripe_cache_active);
static struct attribute *raid5_attrs[] =  ;
static struct attribute_group raid5_attrs_group = ;
static sector_t
raid5_size(mddev_t *mddev, sector_t sectors, int raid_disks)
static void raid5_free_percpu(raid5_conf_t *conf)
static void free_conf(raid5_conf_t *conf)
static int raid456_cpu_notify(struct notifier_block *nfb, unsigned long action,
void *hcpu)
static int raid5_alloc_percpu(raid5_conf_t *conf)
static raid5_conf_t *setup_conf(mddev_t *mddev)
static int only_parity(int raid_disk, int algo, int raid_disks, int max_degraded)
static int run(mddev_t *mddev)
static int stop(mddev_t *mddev)
static void print_sh(struct seq_file *seq, struct stripe_head *sh)
static void printall(struct seq_file *seq, raid5_conf_t *conf)
static void status(struct seq_file *seq, mddev_t *mddev)
static void print_raid5_conf (raid5_conf_t *conf)
static int raid5_spare_active(mddev_t *mddev)
static int raid5_remove_disk(mddev_t *mddev, int number)
static int raid5_add_disk(mddev_t *mddev, mdk_rdev_t *rdev)
static int raid5_resize(mddev_t *mddev, sector_t sectors)
static int check_stripe_cache(mddev_t *mddev)
static int check_reshape(mddev_t *mddev)
static int raid5_start_reshape(mddev_t *mddev)
static void end_reshape(raid5_conf_t *conf)
static void raid5_finish_reshape(mddev_t *mddev)
static void raid5_quiesce(mddev_t *mddev, int state)
static void *raid45_takeover_raid0(mddev_t *mddev, int level)
static void *raid5_takeover_raid1(mddev_t *mddev)
static void *raid5_takeover_raid6(mddev_t *mddev)
static int raid5_check_reshape(mddev_t *mddev)
static int raid6_check_reshape(mddev_t *mddev)
static void *raid5_takeover(mddev_t *mddev)
static void *raid4_takeover(mddev_t *mddev)
static struct mdk_personality raid5_personality;
static void *raid6_takeover(mddev_t *mddev)
static struct mdk_personality raid6_personality =
;
static struct mdk_personality raid5_personality =
;
static struct mdk_personality raid4_personality =
;
static int __init raid5_init(void)
static void raid5_exit(void)
module_init(raid5_init);
module_exit(raid5_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RAID4/5/6 (striping with parity) personality for MD");
MODULE_ALIAS("md-personality-4");
MODULE_ALIAS("md-raid5");
MODULE_ALIAS("md-raid4");
MODULE_ALIAS("md-level-5");
MODULE_ALIAS("md-level-4");
MODULE_ALIAS("md-personality-8");
MODULE_ALIAS("md-raid6");
MODULE_ALIAS("md-level-6");
MODULE_ALIAS("raid5");
MODULE_ALIAS("raid6");
