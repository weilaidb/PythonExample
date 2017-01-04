#define CX18_DMA_UNMAPPED	((u32) -1)
static inline void cx18_buf_sync_for_cpu(struct cx18_stream *s,
struct cx18_buffer *buf)
static inline void cx18_buf_sync_for_device(struct cx18_stream *s,
struct cx18_buffer *buf)
void _cx18_mdl_sync_for_device(struct cx18_stream *s, struct cx18_mdl *mdl);
static inline void cx18_mdl_sync_for_device(struct cx18_stream *s,
struct cx18_mdl *mdl)
void cx18_buf_swap(struct cx18_buffer *buf);
void _cx18_mdl_swap(struct cx18_mdl *mdl);
static inline void cx18_mdl_swap(struct cx18_mdl *mdl)
struct cx18_queue *_cx18_enqueue(struct cx18_stream *s, struct cx18_mdl *mdl,
struct cx18_queue *q, int to_front);
static inline
struct cx18_queue *cx18_enqueue(struct cx18_stream *s, struct cx18_mdl *mdl,
struct cx18_queue *q)
static inline
struct cx18_queue *cx18_push(struct cx18_stream *s, struct cx18_mdl *mdl,
struct cx18_queue *q)
void cx18_queue_init(struct cx18_queue *q);
struct cx18_mdl *cx18_dequeue(struct cx18_stream *s, struct cx18_queue *q);
struct cx18_mdl *cx18_queue_get_mdl(struct cx18_stream *s, u32 id,
u32 bytesused);
void cx18_flush_queues(struct cx18_stream *s);
void cx18_unload_queues(struct cx18_stream *s);
void cx18_load_queues(struct cx18_stream *s);
int cx18_stream_alloc(struct cx18_stream *s);
void cx18_stream_free(struct cx18_stream *s);
