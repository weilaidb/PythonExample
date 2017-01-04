#define MAGIC_BUFFER 0x20070728
#define MAGIC_CHECK(is, should)						\
do  while (0)
static int debug;
module_param(debug, int, 0644);
MODULE_DESCRIPTION("helper module to manage video4linux buffers");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_LICENSE("GPL");
#define dprintk(level, fmt, arg...)					\
do  while (0)
#define CALL(q, f, arg...)						\
((q->int_ops->f) ? q->int_ops->f(arg) : 0)
struct videobuf_buffer *videobuf_alloc_vb(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_alloc_vb);
static int is_state_active_or_queued(struct videobuf_queue *q, struct videobuf_buffer *vb)
;
int videobuf_waiton(struct videobuf_queue *q, struct videobuf_buffer *vb,
int non_blocking, int intr)
EXPORT_SYMBOL_GPL(videobuf_waiton);
int videobuf_iolock(struct videobuf_queue *q, struct videobuf_buffer *vb,
struct v4l2_framebuffer *fbuf)
EXPORT_SYMBOL_GPL(videobuf_iolock);
void *videobuf_queue_to_vaddr(struct videobuf_queue *q,
struct videobuf_buffer *buf)
EXPORT_SYMBOL_GPL(videobuf_queue_to_vaddr);
void videobuf_queue_core_init(struct videobuf_queue *q,
const struct videobuf_queue_ops *ops,
struct device *dev,
spinlock_t *irqlock,
enum v4l2_buf_type type,
enum v4l2_field field,
unsigned int msize,
void *priv,
struct videobuf_qtype_ops *int_ops,
struct mutex *ext_lock)
EXPORT_SYMBOL_GPL(videobuf_queue_core_init);
int videobuf_queue_is_busy(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_queue_is_busy);
static int __videobuf_free(struct videobuf_queue *q)
void videobuf_queue_cancel(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_queue_cancel);
enum v4l2_field videobuf_next_field(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_next_field);
static void videobuf_status(struct videobuf_queue *q, struct v4l2_buffer *b,
struct videobuf_buffer *vb, enum v4l2_buf_type type)
int videobuf_mmap_free(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_mmap_free);
int __videobuf_mmap_setup(struct videobuf_queue *q,
unsigned int bcount, unsigned int bsize,
enum v4l2_memory memory)
EXPORT_SYMBOL_GPL(__videobuf_mmap_setup);
int videobuf_mmap_setup(struct videobuf_queue *q,
unsigned int bcount, unsigned int bsize,
enum v4l2_memory memory)
EXPORT_SYMBOL_GPL(videobuf_mmap_setup);
int videobuf_reqbufs(struct videobuf_queue *q,
struct v4l2_requestbuffers *req)
EXPORT_SYMBOL_GPL(videobuf_reqbufs);
int videobuf_querybuf(struct videobuf_queue *q, struct v4l2_buffer *b)
EXPORT_SYMBOL_GPL(videobuf_querybuf);
int videobuf_qbuf(struct videobuf_queue *q, struct v4l2_buffer *b)
EXPORT_SYMBOL_GPL(videobuf_qbuf);
static int stream_next_buffer_check_queue(struct videobuf_queue *q, int noblock)
static int stream_next_buffer(struct videobuf_queue *q,
struct videobuf_buffer **vb, int nonblocking)
int videobuf_dqbuf(struct videobuf_queue *q,
struct v4l2_buffer *b, int nonblocking)
EXPORT_SYMBOL_GPL(videobuf_dqbuf);
int videobuf_streamon(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_streamon);
static int __videobuf_streamoff(struct videobuf_queue *q)
int videobuf_streamoff(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_streamoff);
static ssize_t videobuf_read_zerocopy(struct videobuf_queue *q,
char __user *data,
size_t count, loff_t *ppos)
static int __videobuf_copy_to_user(struct videobuf_queue *q,
struct videobuf_buffer *buf,
char __user *data, size_t count,
int nonblocking)
static int __videobuf_copy_stream(struct videobuf_queue *q,
struct videobuf_buffer *buf,
char __user *data, size_t count, size_t pos,
int vbihack, int nonblocking)
ssize_t videobuf_read_one(struct videobuf_queue *q,
char __user *data, size_t count, loff_t *ppos,
int nonblocking)
EXPORT_SYMBOL_GPL(videobuf_read_one);
static int __videobuf_read_start(struct videobuf_queue *q)
static void __videobuf_read_stop(struct videobuf_queue *q)
int videobuf_read_start(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_read_start);
void videobuf_read_stop(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_read_stop);
void videobuf_stop(struct videobuf_queue *q)
EXPORT_SYMBOL_GPL(videobuf_stop);
ssize_t videobuf_read_stream(struct videobuf_queue *q,
char __user *data, size_t count, loff_t *ppos,
int vbihack, int nonblocking)
EXPORT_SYMBOL_GPL(videobuf_read_stream);
unsigned int videobuf_poll_stream(struct file *file,
struct videobuf_queue *q,
poll_table *wait)
EXPORT_SYMBOL_GPL(videobuf_poll_stream);
int videobuf_mmap_mapper(struct videobuf_queue *q, struct vm_area_struct *vma)
EXPORT_SYMBOL_GPL(videobuf_mmap_mapper);
