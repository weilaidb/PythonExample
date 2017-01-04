static unsigned int vbibufs = 4;
module_param(vbibufs, int, 0644);
MODULE_PARM_DESC(vbibufs, "number of vbi buffers, range 2-32");
static unsigned int vbi_debug;
module_param(vbi_debug, int, 0644);
MODULE_PARM_DESC(vbi_debug, "enable debug messages [vbi]");
#define dprintk(level, fmt, arg...)\
do  while (0)
int cx23885_vbi_fmt(struct file *file, void *priv,
struct v4l2_format *f)
static int cx23885_start_vbi_dma(struct cx23885_dev    *dev,
struct cx23885_dmaqueue *q,
struct cx23885_buffer   *buf)
static int cx23885_restart_vbi_queue(struct cx23885_dev    *dev,
struct cx23885_dmaqueue *q)
void cx23885_vbi_timeout(unsigned long data)
#define VBI_LINE_LENGTH 2048
#define VBI_LINE_COUNT 17
static int
vbi_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static int
vbi_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
vbi_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void vbi_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
struct videobuf_queue_ops cx23885_vbi_qops = ;
