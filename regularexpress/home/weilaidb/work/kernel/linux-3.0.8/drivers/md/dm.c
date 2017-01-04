#define DM_MSG_PREFIX "core"
#define DM_COOKIE_ENV_VAR_NAME "DM_COOKIE"
#define DM_COOKIE_LENGTH 24
static const char *_name = DM_NAME;
static unsigned int major = 0;
static unsigned int _major = 0;
static DEFINE_IDR(_minor_idr);
static DEFINE_SPINLOCK(_minor_lock);
struct dm_io ;
struct dm_target_io ;
struct dm_rq_target_io ;
struct dm_rq_clone_bio_info ;
union map_info *dm_get_mapinfo(struct bio *bio)
union map_info *dm_get_rq_mapinfo(struct request *rq)
EXPORT_SYMBOL_GPL(dm_get_rq_mapinfo);
#define MINOR_ALLOCED ((void *)-1)
#define DMF_BLOCK_IO_FOR_SUSPEND 0
#define DMF_SUSPENDED 1
#define DMF_FROZEN 2
#define DMF_FREEING 3
#define DMF_DELETING 4
#define DMF_NOFLUSH_SUSPENDING 5
struct mapped_device ;
struct dm_md_mempools ;
#define MIN_IOS 256
static struct kmem_cache *_io_cache;
static struct kmem_cache *_tio_cache;
static struct kmem_cache *_rq_tio_cache;
static struct kmem_cache *_rq_bio_info_cache;
static int __init local_init(void)
static void local_exit(void)
static int (*_inits[])(void) __initdata = ;
static void (*_exits[])(void) = ;
static int __init dm_init(void)
static void __exit dm_exit(void)
int dm_deleting_md(struct mapped_device *md)
static int dm_blk_open(struct block_device *bdev, fmode_t mode)
static int dm_blk_close(struct gendisk *disk, fmode_t mode)
int dm_open_count(struct mapped_device *md)
int dm_lock_for_deletion(struct mapped_device *md)
static int dm_blk_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int dm_blk_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static struct dm_io *alloc_io(struct mapped_device *md)
static void free_io(struct mapped_device *md, struct dm_io *io)
static void free_tio(struct mapped_device *md, struct dm_target_io *tio)
static struct dm_rq_target_io *alloc_rq_tio(struct mapped_device *md,
gfp_t gfp_mask)
static void free_rq_tio(struct dm_rq_target_io *tio)
static struct dm_rq_clone_bio_info *alloc_bio_info(struct mapped_device *md)
static void free_bio_info(struct dm_rq_clone_bio_info *info)
static int md_in_flight(struct mapped_device *md)
static void start_io_acct(struct dm_io *io)
static void end_io_acct(struct dm_io *io)
static void queue_io(struct mapped_device *md, struct bio *bio)
struct dm_table *dm_get_live_table(struct mapped_device *md)
int dm_get_geometry(struct mapped_device *md, struct hd_geometry *geo)
int dm_set_geometry(struct mapped_device *md, struct hd_geometry *geo)
static int __noflush_suspending(struct mapped_device *md)
static void dec_pending(struct dm_io *io, int error)
static void clone_endio(struct bio *bio, int error)
static void end_clone_bio(struct bio *clone, int error)
static void rq_completed(struct mapped_device *md, int rw, int run_queue)
static void free_rq_clone(struct request *clone)
static void dm_end_request(struct request *clone, int error)
static void dm_unprep_request(struct request *rq)
void dm_requeue_unmapped_request(struct request *clone)
EXPORT_SYMBOL_GPL(dm_requeue_unmapped_request);
static void __stop_queue(struct request_queue *q)
static void stop_queue(struct request_queue *q)
static void __start_queue(struct request_queue *q)
static void start_queue(struct request_queue *q)
static void dm_done(struct request *clone, int error, bool mapped)
static void dm_softirq_done(struct request *rq)
static void dm_complete_request(struct request *clone, int error)
void dm_kill_unmapped_request(struct request *clone, int error)
EXPORT_SYMBOL_GPL(dm_kill_unmapped_request);
static void end_clone_request(struct request *clone, int error)
static sector_t max_io_len_target_boundary(sector_t sector, struct dm_target *ti)
static sector_t max_io_len(sector_t sector, struct dm_target *ti)
static void __map_bio(struct dm_target *ti, struct bio *clone,
struct dm_target_io *tio)
struct clone_info ;
static void dm_bio_destructor(struct bio *bio)
static struct bio *split_bvec(struct bio *bio, sector_t sector,
unsigned short idx, unsigned int offset,
unsigned int len, struct bio_set *bs)
static struct bio *clone_bio(struct bio *bio, sector_t sector,
unsigned short idx, unsigned short bv_count,
unsigned int len, struct bio_set *bs)
static struct dm_target_io *alloc_tio(struct clone_info *ci,
struct dm_target *ti)
static void __issue_target_request(struct clone_info *ci, struct dm_target *ti,
unsigned request_nr, sector_t len)
static void __issue_target_requests(struct clone_info *ci, struct dm_target *ti,
unsigned num_requests, sector_t len)
static int __clone_and_map_empty_flush(struct clone_info *ci)
static void __clone_and_map_simple(struct clone_info *ci, struct dm_target *ti)
static int __clone_and_map_discard(struct clone_info *ci)
static int __clone_and_map(struct clone_info *ci)
static void __split_and_process_bio(struct mapped_device *md, struct bio *bio)
static int dm_merge_bvec(struct request_queue *q,
struct bvec_merge_data *bvm,
struct bio_vec *biovec)
static int _dm_request(struct request_queue *q, struct bio *bio)
static int dm_make_request(struct request_queue *q, struct bio *bio)
static int dm_request_based(struct mapped_device *md)
static int dm_request(struct request_queue *q, struct bio *bio)
void dm_dispatch_request(struct request *rq)
EXPORT_SYMBOL_GPL(dm_dispatch_request);
static void dm_rq_bio_destructor(struct bio *bio)
static int dm_rq_bio_constructor(struct bio *bio, struct bio *bio_orig,
void *data)
static int setup_clone(struct request *clone, struct request *rq,
struct dm_rq_target_io *tio)
static struct request *clone_rq(struct request *rq, struct mapped_device *md,
gfp_t gfp_mask)
static int dm_prep_fn(struct request_queue *q, struct request *rq)
static int map_request(struct dm_target *ti, struct request *clone,
struct mapped_device *md)
static void dm_request_fn(struct request_queue *q)
int dm_underlying_device_busy(struct request_queue *q)
EXPORT_SYMBOL_GPL(dm_underlying_device_busy);
static int dm_lld_busy(struct request_queue *q)
static int dm_any_congested(void *congested_data, int bdi_bits)
static void free_minor(int minor)
static int specific_minor(int minor)
static int next_free_minor(int *minor)
static const struct block_device_operations dm_blk_dops;
static void dm_wq_work(struct work_struct *work);
static void dm_init_md_queue(struct mapped_device *md)
static struct mapped_device *alloc_dev(int minor)
static void unlock_fs(struct mapped_device *md);
static void free_dev(struct mapped_device *md)
static void __bind_mempools(struct mapped_device *md, struct dm_table *t)
static void event_callback(void *context)
static void __set_size(struct mapped_device *md, sector_t size)
static struct dm_table *__bind(struct mapped_device *md, struct dm_table *t,
struct queue_limits *limits)
static struct dm_table *__unbind(struct mapped_device *md)
int dm_create(int minor, struct mapped_device **result)
void dm_lock_md_type(struct mapped_device *md)
void dm_unlock_md_type(struct mapped_device *md)
void dm_set_md_type(struct mapped_device *md, unsigned type)
unsigned dm_get_md_type(struct mapped_device *md)
static int dm_init_request_based_queue(struct mapped_device *md)
int dm_setup_md_queue(struct mapped_device *md)
static struct mapped_device *dm_find_md(dev_t dev)
struct mapped_device *dm_get_md(dev_t dev)
void *dm_get_mdptr(struct mapped_device *md)
void dm_set_mdptr(struct mapped_device *md, void *ptr)
void dm_get(struct mapped_device *md)
const char *dm_device_name(struct mapped_device *md)
EXPORT_SYMBOL_GPL(dm_device_name);
static void __dm_destroy(struct mapped_device *md, bool wait)
void dm_destroy(struct mapped_device *md)
void dm_destroy_immediate(struct mapped_device *md)
void dm_put(struct mapped_device *md)
EXPORT_SYMBOL_GPL(dm_put);
static int dm_wait_for_completion(struct mapped_device *md, int interruptible)
static void dm_wq_work(struct work_struct *work)
static void dm_queue_flush(struct mapped_device *md)
struct dm_table *dm_swap_table(struct mapped_device *md, struct dm_table *table)
static int lock_fs(struct mapped_device *md)
static void unlock_fs(struct mapped_device *md)
int dm_suspend(struct mapped_device *md, unsigned suspend_flags)
int dm_resume(struct mapped_device *md)
int dm_kobject_uevent(struct mapped_device *md, enum kobject_action action,
unsigned cookie)
uint32_t dm_next_uevent_seq(struct mapped_device *md)
uint32_t dm_get_event_nr(struct mapped_device *md)
int dm_wait_event(struct mapped_device *md, int event_nr)
void dm_uevent_add(struct mapped_device *md, struct list_head *elist)
struct gendisk *dm_disk(struct mapped_device *md)
struct kobject *dm_kobject(struct mapped_device *md)
struct mapped_device *dm_get_from_kobject(struct kobject *kobj)
int dm_suspended_md(struct mapped_device *md)
int dm_suspended(struct dm_target *ti)
EXPORT_SYMBOL_GPL(dm_suspended);
int dm_noflush_suspending(struct dm_target *ti)
EXPORT_SYMBOL_GPL(dm_noflush_suspending);
struct dm_md_mempools *dm_alloc_md_mempools(unsigned type, unsigned integrity)
void dm_free_md_mempools(struct dm_md_mempools *pools)
static const struct block_device_operations dm_blk_dops = ;
EXPORT_SYMBOL(dm_get_mapinfo);
module_init(dm_init);
module_exit(dm_exit);
module_param(major, uint, 0);
MODULE_PARM_DESC(major, "The major number of the device mapper");
MODULE_DESCRIPTION(DM_NAME " driver");
MODULE_AUTHOR("Joe Thornber <dm-devel@redhat.com>");
MODULE_LICENSE("GPL");
