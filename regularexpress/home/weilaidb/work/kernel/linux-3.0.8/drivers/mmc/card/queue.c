#define MMC_QUEUE_BOUNCESZ	65536
#define MMC_QUEUE_SUSPENDED	(1 << 0)
static int mmc_prep_request(struct request_queue *q, struct request *req)
static int mmc_queue_thread(void *d)
static void mmc_request(struct request_queue *q)
int mmc_init_queue(struct mmc_queue *mq, struct mmc_card *card,
spinlock_t *lock, const char *subname)
void mmc_cleanup_queue(struct mmc_queue *mq)
EXPORT_SYMBOL(mmc_cleanup_queue);
void mmc_queue_suspend(struct mmc_queue *mq)
void mmc_queue_resume(struct mmc_queue *mq)
unsigned int mmc_queue_map_sg(struct mmc_queue *mq)
void mmc_queue_bounce_pre(struct mmc_queue *mq)
void mmc_queue_bounce_post(struct mmc_queue *mq)
