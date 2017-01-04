struct ipath_user_sdma_queue;
struct ipath_user_sdma_queue *
ipath_user_sdma_queue_create(struct device *dev, int unit, int port, int sport);
void ipath_user_sdma_queue_destroy(struct ipath_user_sdma_queue *pq);
int ipath_user_sdma_writev(struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq,
const struct iovec *iov,
unsigned long dim);
int ipath_user_sdma_make_progress(struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq);
void ipath_user_sdma_queue_drain(struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq);
u32 ipath_user_sdma_complete_counter(const struct ipath_user_sdma_queue *pq);
u32 ipath_user_sdma_inflight_counter(struct ipath_user_sdma_queue *pq);
