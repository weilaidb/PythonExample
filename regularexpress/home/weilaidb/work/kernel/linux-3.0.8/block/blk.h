#define BLK_INTERNAL_H
#define BLK_BATCH_TIME	(HZ/50UL)
#define BLK_BATCH_REQ	32
extern struct kmem_cache *blk_requestq_cachep;
extern struct kobj_type blk_queue_ktype;
void init_request_from_bio(struct request *req, struct bio *bio);
void blk_rq_bio_prep(struct request_queue *q, struct request *rq,
struct bio *bio);
int blk_rq_append_bio(struct request_queue *q, struct request *rq,
struct bio *bio);
void blk_dequeue_request(struct request *rq);
void __blk_queue_free_tags(struct request_queue *q);
void blk_rq_timed_out_timer(unsigned long data);
void blk_delete_timer(struct request *);
void blk_add_timer(struct request *);
void __generic_unplug_device(struct request_queue *);
enum rq_atomic_flags ;
static inline int blk_mark_rq_complete(struct request *rq)
static inline void blk_clear_rq_complete(struct request *rq)
#define ELV_ON_HASH(rq)		(!hlist_unhashed(&(rq)->hash))
void blk_insert_flush(struct request *rq);
void blk_abort_flushes(struct request_queue *q);
static inline struct request *__elv_next_request(struct request_queue *q)
static inline void elv_activate_rq(struct request_queue *q, struct request *rq)
static inline void elv_deactivate_rq(struct request_queue *q, struct request *rq)
int blk_should_fake_timeout(struct request_queue *);
ssize_t part_timeout_show(struct device *, struct device_attribute *, char *);
ssize_t part_timeout_store(struct device *, struct device_attribute *,
const char *, size_t);
static inline int blk_should_fake_timeout(struct request_queue *q)
struct io_context *current_io_context(gfp_t gfp_flags, int node);
int ll_back_merge_fn(struct request_queue *q, struct request *req,
struct bio *bio);
int ll_front_merge_fn(struct request_queue *q, struct request *req,
struct bio *bio);
int attempt_back_merge(struct request_queue *q, struct request *rq);
int attempt_front_merge(struct request_queue *q, struct request *rq);
int blk_attempt_req_merge(struct request_queue *q, struct request *rq,
struct request *next);
void blk_recalc_rq_segments(struct request *rq);
void blk_rq_set_mixed_merge(struct request *rq);
void blk_queue_congestion_threshold(struct request_queue *q);
int blk_dev_init(void);
void elv_quiesce_start(struct request_queue *q);
void elv_quiesce_end(struct request_queue *q);
static inline int queue_congestion_on_threshold(struct request_queue *q)
static inline int queue_congestion_off_threshold(struct request_queue *q)
static inline int blk_cpu_to_group(int cpu)
static inline int blk_do_io_stat(struct request *rq)
