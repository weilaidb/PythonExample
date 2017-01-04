#define CREATE_TRACE_POINTS
EXPORT_TRACEPOINT_SYMBOL_GPL(block_bio_remap);
EXPORT_TRACEPOINT_SYMBOL_GPL(block_rq_remap);
EXPORT_TRACEPOINT_SYMBOL_GPL(block_bio_complete);
static int __make_request(struct request_queue *q, struct bio *bio);
static struct kmem_cache *request_cachep;
struct kmem_cache *blk_requestq_cachep;
static struct workqueue_struct *kblockd_workqueue;
static void drive_stat_acct(struct request *rq, int new_io)
void blk_queue_congestion_threshold(struct request_queue *q)
struct backing_dev_info *blk_get_backing_dev_info(struct block_device *bdev)
EXPORT_SYMBOL(blk_get_backing_dev_info);
void blk_rq_init(struct request_queue *q, struct request *rq)
EXPORT_SYMBOL(blk_rq_init);
static void req_bio_endio(struct request *rq, struct bio *bio,
unsigned int nbytes, int error)
void blk_dump_rq_flags(struct request *rq, char *msg)
EXPORT_SYMBOL(blk_dump_rq_flags);
static void blk_delay_work(struct work_struct *work)
void blk_delay_queue(struct request_queue *q, unsigned long msecs)
EXPORT_SYMBOL(blk_delay_queue);
void blk_start_queue(struct request_queue *q)
EXPORT_SYMBOL(blk_start_queue);
void blk_stop_queue(struct request_queue *q)
EXPORT_SYMBOL(blk_stop_queue);
void blk_sync_queue(struct request_queue *q)
EXPORT_SYMBOL(blk_sync_queue);
void __blk_run_queue(struct request_queue *q)
EXPORT_SYMBOL(__blk_run_queue);
void blk_run_queue_async(struct request_queue *q)
EXPORT_SYMBOL(blk_run_queue_async);
void blk_run_queue(struct request_queue *q)
EXPORT_SYMBOL(blk_run_queue);
void blk_put_queue(struct request_queue *q)
EXPORT_SYMBOL(blk_put_queue);
void blk_cleanup_queue(struct request_queue *q)
EXPORT_SYMBOL(blk_cleanup_queue);
static int blk_init_free_list(struct request_queue *q)
struct request_queue *blk_alloc_queue(gfp_t gfp_mask)
EXPORT_SYMBOL(blk_alloc_queue);
struct request_queue *blk_alloc_queue_node(gfp_t gfp_mask, int node_id)
EXPORT_SYMBOL(blk_alloc_queue_node);
struct request_queue *blk_init_queue(request_fn_proc *rfn, spinlock_t *lock)
EXPORT_SYMBOL(blk_init_queue);
struct request_queue *
blk_init_queue_node(request_fn_proc *rfn, spinlock_t *lock, int node_id)
EXPORT_SYMBOL(blk_init_queue_node);
struct request_queue *
blk_init_allocated_queue(struct request_queue *q, request_fn_proc *rfn,
spinlock_t *lock)
EXPORT_SYMBOL(blk_init_allocated_queue);
struct request_queue *
blk_init_allocated_queue_node(struct request_queue *q, request_fn_proc *rfn,
spinlock_t *lock, int node_id)
EXPORT_SYMBOL(blk_init_allocated_queue_node);
int blk_get_queue(struct request_queue *q)
EXPORT_SYMBOL(blk_get_queue);
static inline void blk_free_request(struct request_queue *q, struct request *rq)
static struct request *
blk_alloc_request(struct request_queue *q, int flags, int priv, gfp_t gfp_mask)
static inline int ioc_batching(struct request_queue *q, struct io_context *ioc)
static void ioc_set_batching(struct request_queue *q, struct io_context *ioc)
static void __freed_request(struct request_queue *q, int sync)
static void freed_request(struct request_queue *q, int sync, int priv)
static bool blk_rq_should_init_elevator(struct bio *bio)
static struct request *get_request(struct request_queue *q, int rw_flags,
struct bio *bio, gfp_t gfp_mask)
static struct request *get_request_wait(struct request_queue *q, int rw_flags,
struct bio *bio)
struct request *blk_get_request(struct request_queue *q, int rw, gfp_t gfp_mask)
EXPORT_SYMBOL(blk_get_request);
struct request *blk_make_request(struct request_queue *q, struct bio *bio,
gfp_t gfp_mask)
EXPORT_SYMBOL(blk_make_request);
void blk_requeue_request(struct request_queue *q, struct request *rq)
EXPORT_SYMBOL(blk_requeue_request);
static void add_acct_request(struct request_queue *q, struct request *rq,
int where)
void blk_insert_request(struct request_queue *q, struct request *rq,
int at_head, void *data)
EXPORT_SYMBOL(blk_insert_request);
static void part_round_stats_single(int cpu, struct hd_struct *part,
unsigned long now)
void part_round_stats(int cpu, struct hd_struct *part)
EXPORT_SYMBOL_GPL(part_round_stats);
void __blk_put_request(struct request_queue *q, struct request *req)
EXPORT_SYMBOL_GPL(__blk_put_request);
void blk_put_request(struct request *req)
EXPORT_SYMBOL(blk_put_request);
void blk_add_request_payload(struct request *rq, struct page *page,
unsigned int len)
EXPORT_SYMBOL_GPL(blk_add_request_payload);
static bool bio_attempt_back_merge(struct request_queue *q, struct request *req,
struct bio *bio)
static bool bio_attempt_front_merge(struct request_queue *q,
struct request *req, struct bio *bio)
static bool attempt_plug_merge(struct task_struct *tsk, struct request_queue *q,
struct bio *bio)
void init_request_from_bio(struct request *req, struct bio *bio)
static int __make_request(struct request_queue *q, struct bio *bio)
static inline void blk_partition_remap(struct bio *bio)
static void handle_bad_sector(struct bio *bio)
static DECLARE_FAULT_ATTR(fail_make_request);
static int __init setup_fail_make_request(char *str)
__setup("fail_make_request=", setup_fail_make_request);
static int should_fail_request(struct bio *bio)
static int __init fail_make_request_debugfs(void)
late_initcall(fail_make_request_debugfs);
static inline int should_fail_request(struct bio *bio)
static inline int bio_check_eod(struct bio *bio, unsigned int nr_sectors)
static inline void __generic_make_request(struct bio *bio)
void generic_make_request(struct bio *bio)
EXPORT_SYMBOL(generic_make_request);
void submit_bio(int rw, struct bio *bio)
EXPORT_SYMBOL(submit_bio);
int blk_rq_check_limits(struct request_queue *q, struct request *rq)
EXPORT_SYMBOL_GPL(blk_rq_check_limits);
int blk_insert_cloned_request(struct request_queue *q, struct request *rq)
EXPORT_SYMBOL_GPL(blk_insert_cloned_request);
unsigned int blk_rq_err_bytes(const struct request *rq)
EXPORT_SYMBOL_GPL(blk_rq_err_bytes);
static void blk_account_io_completion(struct request *req, unsigned int bytes)
static void blk_account_io_done(struct request *req)
struct request *blk_peek_request(struct request_queue *q)
EXPORT_SYMBOL(blk_peek_request);
void blk_dequeue_request(struct request *rq)
void blk_start_request(struct request *req)
EXPORT_SYMBOL(blk_start_request);
struct request *blk_fetch_request(struct request_queue *q)
EXPORT_SYMBOL(blk_fetch_request);
bool blk_update_request(struct request *req, int error, unsigned int nr_bytes)
EXPORT_SYMBOL_GPL(blk_update_request);
static bool blk_update_bidi_request(struct request *rq, int error,
unsigned int nr_bytes,
unsigned int bidi_bytes)
void blk_unprep_request(struct request *req)
EXPORT_SYMBOL_GPL(blk_unprep_request);
static void blk_finish_request(struct request *req, int error)
static bool blk_end_bidi_request(struct request *rq, int error,
unsigned int nr_bytes, unsigned int bidi_bytes)
static bool __blk_end_bidi_request(struct request *rq, int error,
unsigned int nr_bytes, unsigned int bidi_bytes)
bool blk_end_request(struct request *rq, int error, unsigned int nr_bytes)
EXPORT_SYMBOL(blk_end_request);
void blk_end_request_all(struct request *rq, int error)
EXPORT_SYMBOL(blk_end_request_all);
bool blk_end_request_cur(struct request *rq, int error)
EXPORT_SYMBOL(blk_end_request_cur);
bool blk_end_request_err(struct request *rq, int error)
EXPORT_SYMBOL_GPL(blk_end_request_err);
bool __blk_end_request(struct request *rq, int error, unsigned int nr_bytes)
EXPORT_SYMBOL(__blk_end_request);
void __blk_end_request_all(struct request *rq, int error)
EXPORT_SYMBOL(__blk_end_request_all);
bool __blk_end_request_cur(struct request *rq, int error)
EXPORT_SYMBOL(__blk_end_request_cur);
bool __blk_end_request_err(struct request *rq, int error)
EXPORT_SYMBOL_GPL(__blk_end_request_err);
void blk_rq_bio_prep(struct request_queue *q, struct request *rq,
struct bio *bio)
#if ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE
void rq_flush_dcache_pages(struct request *rq)
EXPORT_SYMBOL_GPL(rq_flush_dcache_pages);
int blk_lld_busy(struct request_queue *q)
EXPORT_SYMBOL_GPL(blk_lld_busy);
void blk_rq_unprep_clone(struct request *rq)
EXPORT_SYMBOL_GPL(blk_rq_unprep_clone);
static void __blk_rq_prep_clone(struct request *dst, struct request *src)
int blk_rq_prep_clone(struct request *rq, struct request *rq_src,
struct bio_set *bs, gfp_t gfp_mask,
int (*bio_ctr)(struct bio *, struct bio *, void *),
void *data)
EXPORT_SYMBOL_GPL(blk_rq_prep_clone);
int kblockd_schedule_work(struct request_queue *q, struct work_struct *work)
EXPORT_SYMBOL(kblockd_schedule_work);
int kblockd_schedule_delayed_work(struct request_queue *q,
struct delayed_work *dwork, unsigned long delay)
EXPORT_SYMBOL(kblockd_schedule_delayed_work);
#define PLUG_MAGIC	0x91827364
void blk_start_plug(struct blk_plug *plug)
EXPORT_SYMBOL(blk_start_plug);
static int plug_rq_cmp(void *priv, struct list_head *a, struct list_head *b)
static void queue_unplugged(struct request_queue *q, unsigned int depth,
bool from_schedule)
__releases(q->queue_lock)
static void flush_plug_callbacks(struct blk_plug *plug)
void blk_flush_plug_list(struct blk_plug *plug, bool from_schedule)
void blk_finish_plug(struct blk_plug *plug)
EXPORT_SYMBOL(blk_finish_plug);
int __init blk_dev_init(void)
