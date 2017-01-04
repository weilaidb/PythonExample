static void blk_end_sync_rq(struct request *rq, int error)
void blk_execute_rq_nowait(struct request_queue *q, struct gendisk *bd_disk,
struct request *rq, int at_head,
rq_end_io_fn *done)
EXPORT_SYMBOL_GPL(blk_execute_rq_nowait);
int blk_execute_rq(struct request_queue *q, struct gendisk *bd_disk,
struct request *rq, int at_head)
EXPORT_SYMBOL(blk_execute_rq);
