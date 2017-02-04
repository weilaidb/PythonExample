#define AVFILTER_BUFFERQUEUE_H
#define FF_BUFQUEUE_SIZE 64
struct FFBufQueue ;
BUCKET queue->queue[(queue->head + (i)) % FF_BUFQUEUE_SIZE]
ff_bufqueue_is_full
ff_bufqueue_add
*ff_bufqueue_peek
*ff_bufqueue_get
ff_bufqueue_discard_all
#undef BUCKET
