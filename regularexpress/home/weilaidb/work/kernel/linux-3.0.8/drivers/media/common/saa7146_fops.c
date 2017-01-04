int saa7146_res_get(struct saa7146_fh *fh, unsigned int bit)
void saa7146_res_free(struct saa7146_fh *fh, unsigned int bits)
void saa7146_dma_free(struct saa7146_dev *dev,struct videobuf_queue *q,
struct saa7146_buf *buf)
int saa7146_buffer_queue(struct saa7146_dev *dev,
struct saa7146_dmaqueue *q,
struct saa7146_buf *buf)
void saa7146_buffer_finish(struct saa7146_dev *dev,
struct saa7146_dmaqueue *q,
int state)
void saa7146_buffer_next(struct saa7146_dev *dev,
struct saa7146_dmaqueue *q, int vbi)
void saa7146_buffer_timeout(unsigned long data)
static int fops_open(struct file *file)
static int fops_release(struct file *file)
static int fops_mmap(struct file *file, struct vm_area_struct * vma)
static unsigned int fops_poll(struct file *file, struct poll_table_struct *wait)
static ssize_t fops_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
static ssize_t fops_write(struct file *file, const char __user *data, size_t count, loff_t *ppos)
static const struct v4l2_file_operations video_fops =
;
static void vv_callback(struct saa7146_dev *dev, unsigned long status)
int saa7146_vv_init(struct saa7146_dev* dev, struct saa7146_ext_vv *ext_vv)
EXPORT_SYMBOL_GPL(saa7146_vv_init);
int saa7146_vv_release(struct saa7146_dev* dev)
EXPORT_SYMBOL_GPL(saa7146_vv_release);
int saa7146_register_device(struct video_device **vid, struct saa7146_dev* dev,
char *name, int type)
EXPORT_SYMBOL_GPL(saa7146_register_device);
int saa7146_unregister_device(struct video_device **vid, struct saa7146_dev* dev)
EXPORT_SYMBOL_GPL(saa7146_unregister_device);
static int __init saa7146_vv_init_module(void)
static void __exit saa7146_vv_cleanup_module(void)
module_init(saa7146_vv_init_module);
module_exit(saa7146_vv_cleanup_module);
MODULE_AUTHOR("Michael Hunold <michael@mihu.de>");
MODULE_DESCRIPTION("video4linux driver for saa7146-based hardware");
MODULE_LICENSE("GPL");
