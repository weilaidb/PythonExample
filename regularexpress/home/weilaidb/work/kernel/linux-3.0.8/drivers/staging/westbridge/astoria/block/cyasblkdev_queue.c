#define CYASBLKDEV_QUEUE_EXIT		(1 << 0)
#define CYASBLKDEV_QUEUE_SUSPENDED	(1 << 1)
#define CY_AS_USE_ASYNC_API
const char *rq_flag_bit_names[] = ;
void verbose_rq_flags(int flags)
static int cyasblkdev_prep_request(
struct request_queue *q, struct request *req)
static int cyasblkdev_queue_thread(void *d)
static void cyasblkdev_request(struct request_queue *q)
#define Q_MAX_SECTORS 128
#define Q_MAX_SGS   16
int cyasblkdev_init_queue(struct cyasblkdev_queue *bq, spinlock_t *lock)
EXPORT_SYMBOL(cyasblkdev_init_queue);
void cyasblkdev_cleanup_queue(struct cyasblkdev_queue *bq)
EXPORT_SYMBOL(cyasblkdev_cleanup_queue);
void cyasblkdev_queue_suspend(struct cyasblkdev_queue *bq)
EXPORT_SYMBOL(cyasblkdev_queue_suspend);
void cyasblkdev_queue_resume(struct cyasblkdev_queue *bq)
EXPORT_SYMBOL(cyasblkdev_queue_resume);
