static void
uvc_queue_init(struct uvc_video_queue *queue, enum v4l2_buf_type type)
static int uvc_free_buffers(struct uvc_video_queue *queue)
static int
uvc_alloc_buffers(struct uvc_video_queue *queue, unsigned int nbuffers,
unsigned int buflength)
static void __uvc_query_buffer(struct uvc_buffer *buf,
struct v4l2_buffer *v4l2_buf)
static int
uvc_query_buffer(struct uvc_video_queue *queue, struct v4l2_buffer *v4l2_buf)
static int
uvc_queue_buffer(struct uvc_video_queue *queue, struct v4l2_buffer *v4l2_buf)
static int uvc_queue_waiton(struct uvc_buffer *buf, int nonblocking)
static int
uvc_dequeue_buffer(struct uvc_video_queue *queue, struct v4l2_buffer *v4l2_buf,
int nonblocking)
static unsigned int
uvc_queue_poll(struct uvc_video_queue *queue, struct file *file,
poll_table *wait)
static void uvc_vm_open(struct vm_area_struct *vma)
static void uvc_vm_close(struct vm_area_struct *vma)
static struct vm_operations_struct uvc_vm_ops = ;
static int
uvc_queue_mmap(struct uvc_video_queue *queue, struct vm_area_struct *vma)
static void uvc_queue_cancel(struct uvc_video_queue *queue, int disconnect)
static int uvc_queue_enable(struct uvc_video_queue *queue, int enable)
static struct uvc_buffer *
uvc_queue_next_buffer(struct uvc_video_queue *queue, struct uvc_buffer *buf)
static struct uvc_buffer *uvc_queue_head(struct uvc_video_queue *queue)
