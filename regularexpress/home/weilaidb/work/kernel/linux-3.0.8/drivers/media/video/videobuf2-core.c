static int debug;
module_param(debug, int, 0644);
#define dprintk(level, fmt, arg...)					\
do  while (0)
#define call_memop(q, plane, op, args...)				\
(((q)->mem_ops->op) ?						\
((q)->mem_ops->op(args)) : 0)
#define call_qop(q, op, args...)					\
(((q)->ops->op) ? ((q)->ops->op(args)) : 0)
#define V4L2_BUFFER_STATE_FLAGS	(V4L2_BUF_FLAG_MAPPED | V4L2_BUF_FLAG_QUEUED | \
V4L2_BUF_FLAG_DONE | V4L2_BUF_FLAG_ERROR)
static int __vb2_buf_mem_alloc(struct vb2_buffer *vb,
unsigned long *plane_sizes)
static void __vb2_buf_mem_free(struct vb2_buffer *vb)
static void __vb2_buf_userptr_put(struct vb2_buffer *vb)
static void __setup_offsets(struct vb2_queue *q)
static int __vb2_queue_alloc(struct vb2_queue *q, enum v4l2_memory memory,
unsigned int num_buffers, unsigned int num_planes,
unsigned long plane_sizes[])
static void __vb2_free_mem(struct vb2_queue *q)
static void __vb2_queue_free(struct vb2_queue *q)
static int __verify_planes_array(struct vb2_buffer *vb, struct v4l2_buffer *b)
static int __fill_v4l2_buffer(struct vb2_buffer *vb, struct v4l2_buffer *b)
int vb2_querybuf(struct vb2_queue *q, struct v4l2_buffer *b)
EXPORT_SYMBOL(vb2_querybuf);
static int __verify_userptr_ops(struct vb2_queue *q)
static int __verify_mmap_ops(struct vb2_queue *q)
static bool __buffers_in_use(struct vb2_queue *q)
int vb2_reqbufs(struct vb2_queue *q, struct v4l2_requestbuffers *req)
EXPORT_SYMBOL_GPL(vb2_reqbufs);
void *vb2_plane_vaddr(struct vb2_buffer *vb, unsigned int plane_no)
EXPORT_SYMBOL_GPL(vb2_plane_vaddr);
void *vb2_plane_cookie(struct vb2_buffer *vb, unsigned int plane_no)
EXPORT_SYMBOL_GPL(vb2_plane_cookie);
void vb2_buffer_done(struct vb2_buffer *vb, enum vb2_buffer_state state)
EXPORT_SYMBOL_GPL(vb2_buffer_done);
static int __fill_vb2_buffer(struct vb2_buffer *vb, struct v4l2_buffer *b,
struct v4l2_plane *v4l2_planes)
static int __qbuf_userptr(struct vb2_buffer *vb, struct v4l2_buffer *b)
static int __qbuf_mmap(struct vb2_buffer *vb, struct v4l2_buffer *b)
static void __enqueue_in_driver(struct vb2_buffer *vb)
int vb2_qbuf(struct vb2_queue *q, struct v4l2_buffer *b)
EXPORT_SYMBOL_GPL(vb2_qbuf);
static int __vb2_wait_for_done_vb(struct vb2_queue *q, int nonblocking)
static int __vb2_get_done_vb(struct vb2_queue *q, struct vb2_buffer **vb,
int nonblocking)
int vb2_wait_for_all_buffers(struct vb2_queue *q)
EXPORT_SYMBOL_GPL(vb2_wait_for_all_buffers);
int vb2_dqbuf(struct vb2_queue *q, struct v4l2_buffer *b, bool nonblocking)
EXPORT_SYMBOL_GPL(vb2_dqbuf);
int vb2_streamon(struct vb2_queue *q, enum v4l2_buf_type type)
EXPORT_SYMBOL_GPL(vb2_streamon);
static void __vb2_queue_cancel(struct vb2_queue *q)
int vb2_streamoff(struct vb2_queue *q, enum v4l2_buf_type type)
EXPORT_SYMBOL_GPL(vb2_streamoff);
static int __find_plane_by_offset(struct vb2_queue *q, unsigned long off,
unsigned int *_buffer, unsigned int *_plane)
int vb2_mmap(struct vb2_queue *q, struct vm_area_struct *vma)
EXPORT_SYMBOL_GPL(vb2_mmap);
static int __vb2_init_fileio(struct vb2_queue *q, int read);
static int __vb2_cleanup_fileio(struct vb2_queue *q);
unsigned int vb2_poll(struct vb2_queue *q, struct file *file, poll_table *wait)
EXPORT_SYMBOL_GPL(vb2_poll);
int vb2_queue_init(struct vb2_queue *q)
EXPORT_SYMBOL_GPL(vb2_queue_init);
void vb2_queue_release(struct vb2_queue *q)
EXPORT_SYMBOL_GPL(vb2_queue_release);
struct vb2_fileio_buf ;
struct vb2_fileio_data ;
static int __vb2_init_fileio(struct vb2_queue *q, int read)
static int __vb2_cleanup_fileio(struct vb2_queue *q)
static size_t __vb2_perform_fileio(struct vb2_queue *q, char __user *data, size_t count,
loff_t *ppos, int nonblock, int read)
size_t vb2_read(struct vb2_queue *q, char __user *data, size_t count,
loff_t *ppos, int nonblocking)
EXPORT_SYMBOL_GPL(vb2_read);
size_t vb2_write(struct vb2_queue *q, char __user *data, size_t count,
loff_t *ppos, int nonblocking)
EXPORT_SYMBOL_GPL(vb2_write);
MODULE_DESCRIPTION("Driver helper framework for Video for Linux 2");
MODULE_AUTHOR("Pawel Osciak <pawel@osciak.com>, Marek Szyprowski");
MODULE_LICENSE("GPL");
