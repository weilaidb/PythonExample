static int vbi_pixel_to_capture = 720 * 2;
static int vbi_workaround(struct saa7146_dev *dev)
static void saa7146_set_vbi_capture(struct saa7146_dev *dev, struct saa7146_buf *buf, struct saa7146_buf *next)
static int buffer_activate(struct saa7146_dev *dev,
struct saa7146_buf *buf,
struct saa7146_buf *next)
static int buffer_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,enum v4l2_field field)
static int buffer_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static void buffer_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
static struct videobuf_queue_ops vbi_qops = ;
static void vbi_stop(struct saa7146_fh *fh, struct file *file)
static void vbi_read_timeout(unsigned long data)
static void vbi_init(struct saa7146_dev *dev, struct saa7146_vv *vv)
static int vbi_open(struct saa7146_dev *dev, struct file *file)
static void vbi_close(struct saa7146_dev *dev, struct file *file)
static void vbi_irq_done(struct saa7146_dev *dev, unsigned long status)
static ssize_t vbi_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
struct saa7146_use_ops saa7146_vbi_uops = ;
