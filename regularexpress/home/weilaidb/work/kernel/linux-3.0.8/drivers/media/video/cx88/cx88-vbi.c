static unsigned int vbibufs = 4;
module_param(vbibufs,int,0644);
MODULE_PARM_DESC(vbibufs,"number of vbi buffers, range 2-32");
static unsigned int vbi_debug;
module_param(vbi_debug,int,0644);
MODULE_PARM_DESC(vbi_debug,"enable debug messages [vbi]");
#define dprintk(level,fmt, arg...)	if (vbi_debug >= level) \
printk(KERN_DEBUG "%s: " fmt, dev->core->name , ## arg)
int cx8800_vbi_fmt (struct file *file, void *priv,
struct v4l2_format *f)
static int cx8800_start_vbi_dma(struct cx8800_dev    *dev,
struct cx88_dmaqueue *q,
struct cx88_buffer   *buf)
int cx8800_stop_vbi_dma(struct cx8800_dev *dev)
int cx8800_restart_vbi_queue(struct cx8800_dev    *dev,
struct cx88_dmaqueue *q)
void cx8800_vbi_timeout(unsigned long data)
static int
vbi_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static int
vbi_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
vbi_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void vbi_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
const struct videobuf_queue_ops cx8800_vbi_qops = ;
