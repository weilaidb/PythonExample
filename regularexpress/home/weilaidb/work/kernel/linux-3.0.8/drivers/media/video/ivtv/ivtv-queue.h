#define IVTV_QUEUE_H
#define IVTV_DMA_UNMAPPED	((u32) -1)
#define SLICED_VBI_PIO 0
static inline int ivtv_might_use_pio(struct ivtv_stream *s)
static inline int ivtv_use_pio(struct ivtv_stream *s)
static inline int ivtv_might_use_dma(struct ivtv_stream *s)
static inline int ivtv_use_dma(struct ivtv_stream *s)
static inline void ivtv_buf_sync_for_cpu(struct ivtv_stream *s, struct ivtv_buffer *buf)
static inline void ivtv_buf_sync_for_device(struct ivtv_stream *s, struct ivtv_buffer *buf)
int ivtv_buf_copy_from_user(struct ivtv_stream *s, struct ivtv_buffer *buf, const char __user *src, int copybytes);
void ivtv_buf_swap(struct ivtv_buffer *buf);
void ivtv_queue_init(struct ivtv_queue *q);
void ivtv_enqueue(struct ivtv_stream *s, struct ivtv_buffer *buf, struct ivtv_queue *q);
struct ivtv_buffer *ivtv_dequeue(struct ivtv_stream *s, struct ivtv_queue *q);
int ivtv_queue_move(struct ivtv_stream *s, struct ivtv_queue *from, struct ivtv_queue *steal,
struct ivtv_queue *to, int needed_bytes);
void ivtv_flush_queues(struct ivtv_stream *s);
int ivtv_stream_alloc(struct ivtv_stream *s);
void ivtv_stream_free(struct ivtv_stream *s);
static inline void ivtv_stream_sync_for_cpu(struct ivtv_stream *s)
static inline void ivtv_stream_sync_for_device(struct ivtv_stream *s)
