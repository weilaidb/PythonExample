void uvc_queue_init(struct uvc_video_queue *queue, enum v4l2_buf_type type,
int drop_corrupted)
static int __uvc_free_buffers(struct uvc_video_queue *queue)
int uvc_free_buffers(struct uvc_video_queue *queue)
int uvc_alloc_buffers(struct uvc_video_queue *queue, unsigned int nbuffers,
unsigned int buflength)
int uvc_queue_allocated(struct uvc_video_queue *queue)
static void __uvc_query_buffer(struct uvc_buffer *buf,
struct v4l2_buffer *v4l2_buf)
int uvc_query_buffer(struct uvc_video_queue *queue,
struct v4l2_buffer *v4l2_buf)
int uvc_queue_buffer(struct uvc_video_queue *queue,
struct v4l2_buffer *v4l2_buf)
static int uvc_queue_waiton(struct uvc_buffer *buf, int nonblocking)
int uvc_dequeue_buffer(struct uvc_video_queue *queue,
struct v4l2_buffer *v4l2_buf, int nonblocking)
static void uvc_vm_open(struct vm_area_struct *vma)
static void uvc_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct uvc_vm_ops = ;
int uvc_queue_mmap(struct uvc_video_queue *queue, struct vm_area_struct *vma)
unsigned int uvc_queue_poll(struct uvc_video_queue *queue, struct file *file,
poll_table *wait)
unsigned long uvc_queue_get_unmapped_area(struct uvc_video_queue *queue,
unsigned long pgoff)
int uvc_queue_enable(struct uvc_video_queue *queue, int enable)
void uvc_queue_cancel(struct uvc_video_queue *queue, int disconnect)
struct uvc_buffer *uvc_queue_next_buffer(struct uvc_video_queue *queue,
struct uvc_buffer *buf)
