struct request *blk_queue_find_tag(struct request_queue *q, int tag)
EXPORT_SYMBOL(blk_queue_find_tag);
static int __blk_free_tags(struct blk_queue_tag *bqt)
void __blk_queue_free_tags(struct request_queue *q)
void blk_free_tags(struct blk_queue_tag *bqt)
EXPORT_SYMBOL(blk_free_tags);
void blk_queue_free_tags(struct request_queue *q)
EXPORT_SYMBOL(blk_queue_free_tags);
static int
init_tag_map(struct request_queue *q, struct blk_queue_tag *tags, int depth)
static struct blk_queue_tag *__blk_queue_init_tags(struct request_queue *q,
int depth)
struct blk_queue_tag *blk_init_tags(int depth)
EXPORT_SYMBOL(blk_init_tags);
int blk_queue_init_tags(struct request_queue *q, int depth,
struct blk_queue_tag *tags)
EXPORT_SYMBOL(blk_queue_init_tags);
int blk_queue_resize_tags(struct request_queue *q, int new_depth)
EXPORT_SYMBOL(blk_queue_resize_tags);
void blk_queue_end_tag(struct request_queue *q, struct request *rq)
EXPORT_SYMBOL(blk_queue_end_tag);
int blk_queue_start_tag(struct request_queue *q, struct request *rq)
EXPORT_SYMBOL(blk_queue_start_tag);
void blk_queue_invalidate_tags(struct request_queue *q)
EXPORT_SYMBOL(blk_queue_invalidate_tags);
