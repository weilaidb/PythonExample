int blk_rq_append_bio(struct request_queue *q, struct request *rq,
struct bio *bio)
static int __blk_rq_unmap_user(struct bio *bio)
static int __blk_rq_map_user(struct request_queue *q, struct request *rq,
struct rq_map_data *map_data, void __user *ubuf,
unsigned int len, gfp_t gfp_mask)
int blk_rq_map_user(struct request_queue *q, struct request *rq,
struct rq_map_data *map_data, void __user *ubuf,
unsigned long len, gfp_t gfp_mask)
EXPORT_SYMBOL(blk_rq_map_user);
int blk_rq_map_user_iov(struct request_queue *q, struct request *rq,
struct rq_map_data *map_data, struct sg_iovec *iov,
int iov_count, unsigned int len, gfp_t gfp_mask)
EXPORT_SYMBOL(blk_rq_map_user_iov);
int blk_rq_unmap_user(struct bio *bio)
EXPORT_SYMBOL(blk_rq_unmap_user);
int blk_rq_map_kern(struct request_queue *q, struct request *rq, void *kbuf,
unsigned int len, gfp_t gfp_mask)
EXPORT_SYMBOL(blk_rq_map_kern);
