#define ISP_CACHE_FLUSH_PAGES_MAX       0
static void isp_video_buffer_cache_sync(struct isp_video_buffer *buf)
static int isp_video_buffer_lock_vma(struct isp_video_buffer *buf, int lock)
static int isp_video_buffer_sglist_kernel(struct isp_video_buffer *buf)
static int isp_video_buffer_sglist_user(struct isp_video_buffer *buf)
static int isp_video_buffer_sglist_pfnmap(struct isp_video_buffer *buf)
static void isp_video_buffer_cleanup(struct isp_video_buffer *buf)
static int isp_video_buffer_prepare_user(struct isp_video_buffer *buf)
static int isp_video_buffer_prepare_pfnmap(struct isp_video_buffer *buf)
static int isp_video_buffer_prepare_vm_flags(struct isp_video_buffer *buf)
static int isp_video_buffer_prepare(struct isp_video_buffer *buf)
static void isp_video_buffer_query(struct isp_video_buffer *buf,
struct v4l2_buffer *vbuf)
static int isp_video_buffer_wait(struct isp_video_buffer *buf, int nonblocking)
static int isp_video_queue_free(struct isp_video_queue *queue)
static int isp_video_queue_alloc(struct isp_video_queue *queue,
unsigned int nbuffers,
unsigned int size, enum v4l2_memory memory)
int omap3isp_video_queue_cleanup(struct isp_video_queue *queue)
int omap3isp_video_queue_init(struct isp_video_queue *queue,
enum v4l2_buf_type type,
const struct isp_video_queue_operations *ops,
struct device *dev, unsigned int bufsize)
int omap3isp_video_queue_reqbufs(struct isp_video_queue *queue,
struct v4l2_requestbuffers *rb)
int omap3isp_video_queue_querybuf(struct isp_video_queue *queue,
struct v4l2_buffer *vbuf)
int omap3isp_video_queue_qbuf(struct isp_video_queue *queue,
struct v4l2_buffer *vbuf)
int omap3isp_video_queue_dqbuf(struct isp_video_queue *queue,
struct v4l2_buffer *vbuf, int nonblocking)
int omap3isp_video_queue_streamon(struct isp_video_queue *queue)
void omap3isp_video_queue_streamoff(struct isp_video_queue *queue)
void omap3isp_video_queue_discard_done(struct isp_video_queue *queue)
static void isp_video_queue_vm_open(struct vm_area_struct *vma)
static void isp_video_queue_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct isp_video_queue_vm_ops = ;
int omap3isp_video_queue_mmap(struct isp_video_queue *queue,
struct vm_area_struct *vma)
unsigned int omap3isp_video_queue_poll(struct isp_video_queue *queue,
struct file *file, poll_table *wait)
