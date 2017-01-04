#define AVFILTER_BUFFERQUEUE_H
#define FF_BUFQUEUE_SIZE 64
struct FFBufQueue ;
#define BUCKET(i) queue->queue[(queue->head + (i)) % FF_BUFQUEUE_SIZE]
static inline int ff_bufqueue_is_full(struct FFBufQueue *queue)
static inline void ff_bufqueue_add(void *log, struct FFBufQueue *queue,
AVFrame *buf)
static inline AVFrame *ff_bufqueue_peek(struct FFBufQueue *queue,
unsigned index)
static inline AVFrame *ff_bufqueue_get(struct FFBufQueue *queue)
static inline void ff_bufqueue_discard_all(struct FFBufQueue *queue)
#undef BUCKET
