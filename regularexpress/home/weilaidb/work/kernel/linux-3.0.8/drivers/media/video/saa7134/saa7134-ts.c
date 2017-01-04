static unsigned int ts_debug;
module_param(ts_debug, int, 0644);
MODULE_PARM_DESC(ts_debug,"enable debug messages [ts]");
#define dprintk(fmt, arg...)	if (ts_debug) \
printk(KERN_DEBUG "%s/ts: " fmt, dev->name , ## arg)
static int buffer_activate(struct saa7134_dev *dev,
struct saa7134_buf *buf,
struct saa7134_buf *next)
static int buffer_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static int
buffer_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static void buffer_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
struct videobuf_queue_ops saa7134_ts_qops = ;
EXPORT_SYMBOL_GPL(saa7134_ts_qops);
static unsigned int tsbufs = 8;
module_param(tsbufs, int, 0444);
MODULE_PARM_DESC(tsbufs, "number of ts buffers for read/write IO, range 2-32");
static unsigned int ts_nr_packets = 64;
module_param(ts_nr_packets, int, 0444);
MODULE_PARM_DESC(ts_nr_packets,"size of a ts buffers (in ts packets)");
int saa7134_ts_init_hw(struct saa7134_dev *dev)
int saa7134_ts_init1(struct saa7134_dev *dev)
int saa7134_ts_stop(struct saa7134_dev *dev)
int saa7134_ts_start(struct saa7134_dev *dev)
int saa7134_ts_fini(struct saa7134_dev *dev)
void saa7134_irq_ts_done(struct saa7134_dev *dev, unsigned long status)
