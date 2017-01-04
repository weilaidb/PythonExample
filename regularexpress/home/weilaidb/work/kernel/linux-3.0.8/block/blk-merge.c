static unsigned int __blk_recalc_rq_segments(struct request_queue *q,
struct bio *bio)
void blk_recalc_rq_segments(struct request *rq)
void blk_recount_segments(struct request_queue *q, struct bio *bio)
EXPORT_SYMBOL(blk_recount_segments);
static int blk_phys_contig_segment(struct request_queue *q, struct bio *bio,
struct bio *nxt)
int blk_rq_map_sg(struct request_queue *q, struct request *rq,
struct scatterlist *sglist)
EXPORT_SYMBOL(blk_rq_map_sg);
static inline int ll_new_hw_segment(struct request_queue *q,
struct request *req,
struct bio *bio)
int ll_back_merge_fn(struct request_queue *q, struct request *req,
struct bio *bio)
int ll_front_merge_fn(struct request_queue *q, struct request *req,
struct bio *bio)
static int ll_merge_requests_fn(struct request_queue *q, struct request *req,
struct request *next)
void blk_rq_set_mixed_merge(struct request *rq)
static void blk_account_io_merge(struct request *req)
static int attempt_merge(struct request_queue *q, struct request *req,
struct request *next)
int attempt_back_merge(struct request_queue *q, struct request *rq)
int attempt_front_merge(struct request_queue *q, struct request *rq)
int blk_attempt_req_merge(struct request_queue *q, struct request *rq,
struct request *next)
