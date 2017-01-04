unsigned long blk_max_low_pfn;
EXPORT_SYMBOL(blk_max_low_pfn);
unsigned long blk_max_pfn;
void blk_queue_prep_rq(struct request_queue *q, prep_rq_fn *pfn)
EXPORT_SYMBOL(blk_queue_prep_rq);
void blk_queue_unprep_rq(struct request_queue *q, unprep_rq_fn *ufn)
EXPORT_SYMBOL(blk_queue_unprep_rq);
void blk_queue_merge_bvec(struct request_queue *q, merge_bvec_fn *mbfn)
EXPORT_SYMBOL(blk_queue_merge_bvec);
void blk_queue_softirq_done(struct request_queue *q, softirq_done_fn *fn)
EXPORT_SYMBOL(blk_queue_softirq_done);
void blk_queue_rq_timeout(struct request_queue *q, unsigned int timeout)
EXPORT_SYMBOL_GPL(blk_queue_rq_timeout);
void blk_queue_rq_timed_out(struct request_queue *q, rq_timed_out_fn *fn)
EXPORT_SYMBOL_GPL(blk_queue_rq_timed_out);
void blk_queue_lld_busy(struct request_queue *q, lld_busy_fn *fn)
EXPORT_SYMBOL_GPL(blk_queue_lld_busy);
void blk_set_default_limits(struct queue_limits *lim)
EXPORT_SYMBOL(blk_set_default_limits);
void blk_queue_make_request(struct request_queue *q, make_request_fn *mfn)
EXPORT_SYMBOL(blk_queue_make_request);
void blk_queue_bounce_limit(struct request_queue *q, u64 dma_mask)
EXPORT_SYMBOL(blk_queue_bounce_limit);
void blk_limits_max_hw_sectors(struct queue_limits *limits, unsigned int max_hw_sectors)
EXPORT_SYMBOL(blk_limits_max_hw_sectors);
void blk_queue_max_hw_sectors(struct request_queue *q, unsigned int max_hw_sectors)
EXPORT_SYMBOL(blk_queue_max_hw_sectors);
void blk_queue_max_discard_sectors(struct request_queue *q,
unsigned int max_discard_sectors)
EXPORT_SYMBOL(blk_queue_max_discard_sectors);
void blk_queue_max_segments(struct request_queue *q, unsigned short max_segments)
EXPORT_SYMBOL(blk_queue_max_segments);
void blk_queue_max_segment_size(struct request_queue *q, unsigned int max_size)
EXPORT_SYMBOL(blk_queue_max_segment_size);
void blk_queue_logical_block_size(struct request_queue *q, unsigned short size)
EXPORT_SYMBOL(blk_queue_logical_block_size);
void blk_queue_physical_block_size(struct request_queue *q, unsigned int size)
EXPORT_SYMBOL(blk_queue_physical_block_size);
void blk_queue_alignment_offset(struct request_queue *q, unsigned int offset)
EXPORT_SYMBOL(blk_queue_alignment_offset);
void blk_limits_io_min(struct queue_limits *limits, unsigned int min)
EXPORT_SYMBOL(blk_limits_io_min);
void blk_queue_io_min(struct request_queue *q, unsigned int min)
EXPORT_SYMBOL(blk_queue_io_min);
void blk_limits_io_opt(struct queue_limits *limits, unsigned int opt)
EXPORT_SYMBOL(blk_limits_io_opt);
void blk_queue_io_opt(struct request_queue *q, unsigned int opt)
EXPORT_SYMBOL(blk_queue_io_opt);
void blk_queue_stack_limits(struct request_queue *t, struct request_queue *b)
EXPORT_SYMBOL(blk_queue_stack_limits);
int blk_stack_limits(struct queue_limits *t, struct queue_limits *b,
sector_t start)
EXPORT_SYMBOL(blk_stack_limits);
int bdev_stack_limits(struct queue_limits *t, struct block_device *bdev,
sector_t start)
EXPORT_SYMBOL(bdev_stack_limits);
void disk_stack_limits(struct gendisk *disk, struct block_device *bdev,
sector_t offset)
EXPORT_SYMBOL(disk_stack_limits);
void blk_queue_dma_pad(struct request_queue *q, unsigned int mask)
EXPORT_SYMBOL(blk_queue_dma_pad);
void blk_queue_update_dma_pad(struct request_queue *q, unsigned int mask)
EXPORT_SYMBOL(blk_queue_update_dma_pad);
int blk_queue_dma_drain(struct request_queue *q,
dma_drain_needed_fn *dma_drain_needed,
void *buf, unsigned int size)
EXPORT_SYMBOL_GPL(blk_queue_dma_drain);
void blk_queue_segment_boundary(struct request_queue *q, unsigned long mask)
EXPORT_SYMBOL(blk_queue_segment_boundary);
void blk_queue_dma_alignment(struct request_queue *q, int mask)
EXPORT_SYMBOL(blk_queue_dma_alignment);
void blk_queue_update_dma_alignment(struct request_queue *q, int mask)
EXPORT_SYMBOL(blk_queue_update_dma_alignment);
void blk_queue_flush(struct request_queue *q, unsigned int flush)
EXPORT_SYMBOL_GPL(blk_queue_flush);
void blk_queue_flush_queueable(struct request_queue *q, bool queueable)
EXPORT_SYMBOL_GPL(blk_queue_flush_queueable);
static int __init blk_settings_init(void)
subsys_initcall(blk_settings_init);
