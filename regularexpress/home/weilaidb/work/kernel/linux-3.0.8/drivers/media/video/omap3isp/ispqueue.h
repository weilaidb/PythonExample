#define OMAP3_ISP_QUEUE_H
struct isp_video_queue;
struct page;
struct scatterlist;
#define ISP_VIDEO_MAX_BUFFERS		16
enum isp_video_buffer_state ;
struct isp_video_buffer ;
#define to_isp_video_buffer(vb)	container_of(vb, struct isp_video_buffer, vb)
struct isp_video_queue_operations ;
struct isp_video_queue ;
int omap3isp_video_queue_cleanup(struct isp_video_queue *queue);
int omap3isp_video_queue_init(struct isp_video_queue *queue,
enum v4l2_buf_type type,
const struct isp_video_queue_operations *ops,
struct device *dev, unsigned int bufsize);
int omap3isp_video_queue_reqbufs(struct isp_video_queue *queue,
struct v4l2_requestbuffers *rb);
int omap3isp_video_queue_querybuf(struct isp_video_queue *queue,
struct v4l2_buffer *vbuf);
int omap3isp_video_queue_qbuf(struct isp_video_queue *queue,
struct v4l2_buffer *vbuf);
int omap3isp_video_queue_dqbuf(struct isp_video_queue *queue,
struct v4l2_buffer *vbuf, int nonblocking);
int omap3isp_video_queue_streamon(struct isp_video_queue *queue);
void omap3isp_video_queue_streamoff(struct isp_video_queue *queue);
void omap3isp_video_queue_discard_done(struct isp_video_queue *queue);
int omap3isp_video_queue_mmap(struct isp_video_queue *queue,
struct vm_area_struct *vma);
unsigned int omap3isp_video_queue_poll(struct isp_video_queue *queue,
struct file *file, poll_table *wait);
