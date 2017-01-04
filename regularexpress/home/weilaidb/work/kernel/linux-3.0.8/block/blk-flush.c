enum ;
static bool blk_kick_flush(struct request_queue *q);
static unsigned int blk_flush_policy(unsigned int fflags, struct request *rq)
static unsigned int blk_flush_cur_seq(struct request *rq)
static void blk_flush_restore_request(struct request *rq)
static bool blk_flush_complete_seq(struct request *rq, unsigned int seq,
int error)
static void flush_end_io(struct request *flush_rq, int error)
static bool blk_kick_flush(struct request_queue *q)
static void flush_data_end_io(struct request *rq, int error)
void blk_insert_flush(struct request *rq)
void blk_abort_flushes(struct request_queue *q)
static void bio_end_flush(struct bio *bio, int err)
int blkdev_issue_flush(struct block_device *bdev, gfp_t gfp_mask,
sector_t *error_sector)
EXPORT_SYMBOL(blkdev_issue_flush);
