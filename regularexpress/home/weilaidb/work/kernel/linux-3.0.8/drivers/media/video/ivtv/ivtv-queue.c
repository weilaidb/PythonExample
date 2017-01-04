int ivtv_buf_copy_from_user(struct ivtv_stream *s, struct ivtv_buffer *buf, const char __user *src, int copybytes)
void ivtv_buf_swap(struct ivtv_buffer *buf)
void ivtv_queue_init(struct ivtv_queue *q)
void ivtv_enqueue(struct ivtv_stream *s, struct ivtv_buffer *buf, struct ivtv_queue *q)
struct ivtv_buffer *ivtv_dequeue(struct ivtv_stream *s, struct ivtv_queue *q)
static void ivtv_queue_move_buf(struct ivtv_stream *s, struct ivtv_queue *from,
struct ivtv_queue *to, int clear)
int ivtv_queue_move(struct ivtv_stream *s, struct ivtv_queue *from, struct ivtv_queue *steal,
struct ivtv_queue *to, int needed_bytes)
void ivtv_flush_queues(struct ivtv_stream *s)
int ivtv_stream_alloc(struct ivtv_stream *s)
void ivtv_stream_free(struct ivtv_stream *s)
