static unsigned int vbi_debug;
module_param(vbi_debug, int, 0644);
MODULE_PARM_DESC(vbi_debug,"enable debug messages [vbi]");
static unsigned int vbibufs = 4;
module_param(vbibufs, int, 0444);
MODULE_PARM_DESC(vbibufs,"number of vbi buffers, range 2-32");
#define dprintk(fmt, arg...)	if (vbi_debug) \
printk(KERN_DEBUG "%s/vbi: " fmt, dev->name , ## arg)
#define VBI_LINE_COUNT     16
#define VBI_LINE_LENGTH  2048
#define VBI_SCALE       0x200
static void task_init(struct saa7134_dev *dev, struct saa7134_buf *buf,
int task)
static int buffer_activate(struct saa7134_dev *dev,
struct saa7134_buf *buf,
struct saa7134_buf *next)
static int buffer_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb,
enum v4l2_field field)
static int
buffer_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static void buffer_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
struct videobuf_queue_ops saa7134_vbi_qops = ;
int saa7134_vbi_init1(struct saa7134_dev *dev)
int saa7134_vbi_fini(struct saa7134_dev *dev)
void saa7134_irq_vbi_done(struct saa7134_dev *dev, unsigned long status)
