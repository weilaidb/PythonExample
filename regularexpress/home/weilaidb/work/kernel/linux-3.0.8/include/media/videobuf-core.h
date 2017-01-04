#define _VIDEOBUF_CORE_H
#define UNSET (-1U)
struct videobuf_buffer;
struct videobuf_queue;
struct videobuf_mapping ;
enum videobuf_state ;
struct videobuf_buffer ;
struct videobuf_queue_ops ;
#define MAGIC_QTYPE_OPS	0x12261003
struct videobuf_qtype_ops ;
struct videobuf_queue ;
static inline void videobuf_queue_lock(struct videobuf_queue *q)
static inline void videobuf_queue_unlock(struct videobuf_queue *q)
int videobuf_waiton(struct videobuf_queue *q, struct videobuf_buffer *vb,
int non_blocking, int intr);
int videobuf_iolock(struct videobuf_queue *q, struct videobuf_buffer *vb,
struct v4l2_framebuffer *fbuf);
struct videobuf_buffer *videobuf_alloc_vb(struct videobuf_queue *q);
void *videobuf_queue_to_vaddr(struct videobuf_queue *q,
struct videobuf_buffer *buf);
void videobuf_queue_core_init(struct videobuf_queue *q,
const struct videobuf_queue_ops *ops,
struct device *dev,
spinlock_t *irqlock,
enum v4l2_buf_type type,
enum v4l2_field field,
unsigned int msize,
void *priv,
struct videobuf_qtype_ops *int_ops,
struct mutex *ext_lock);
int  videobuf_queue_is_busy(struct videobuf_queue *q);
void videobuf_queue_cancel(struct videobuf_queue *q);
enum v4l2_field videobuf_next_field(struct videobuf_queue *q);
int videobuf_reqbufs(struct videobuf_queue *q,
struct v4l2_requestbuffers *req);
int videobuf_querybuf(struct videobuf_queue *q, struct v4l2_buffer *b);
int videobuf_qbuf(struct videobuf_queue *q,
struct v4l2_buffer *b);
int videobuf_dqbuf(struct videobuf_queue *q,
struct v4l2_buffer *b, int nonblocking);
int videobuf_streamon(struct videobuf_queue *q);
int videobuf_streamoff(struct videobuf_queue *q);
void videobuf_stop(struct videobuf_queue *q);
int videobuf_read_start(struct videobuf_queue *q);
void videobuf_read_stop(struct videobuf_queue *q);
ssize_t videobuf_read_stream(struct videobuf_queue *q,
char __user *data, size_t count, loff_t *ppos,
int vbihack, int nonblocking);
ssize_t videobuf_read_one(struct videobuf_queue *q,
char __user *data, size_t count, loff_t *ppos,
int nonblocking);
unsigned int videobuf_poll_stream(struct file *file,
struct videobuf_queue *q,
poll_table *wait);
int videobuf_mmap_setup(struct videobuf_queue *q,
unsigned int bcount, unsigned int bsize,
enum v4l2_memory memory);
int __videobuf_mmap_setup(struct videobuf_queue *q,
unsigned int bcount, unsigned int bsize,
enum v4l2_memory memory);
int videobuf_mmap_free(struct videobuf_queue *q);
int videobuf_mmap_mapper(struct videobuf_queue *q,
struct vm_area_struct *vma);
