struct qib_user_sdma_queue;
struct qib_user_sdma_queue *
qib_user_sdma_queue_create(struct device *dev, int unit, int port, int sport);
void qib_user_sdma_queue_destroy(struct qib_user_sdma_queue *pq);
int qib_user_sdma_writev(struct qib_ctxtdata *pd,
struct qib_user_sdma_queue *pq,
const struct iovec *iov,
unsigned long dim);
int qib_user_sdma_make_progress(struct qib_pportdata *ppd,
struct qib_user_sdma_queue *pq);
void qib_user_sdma_queue_drain(struct qib_pportdata *ppd,
struct qib_user_sdma_queue *pq);
u32 qib_user_sdma_complete_counter(const struct qib_user_sdma_queue *pq);
u32 qib_user_sdma_inflight_counter(struct qib_user_sdma_queue *pq);
