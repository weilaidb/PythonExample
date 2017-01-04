#define MBOX_NAME "mbox"
#define MBOX_FIFO_DATA        0x000
#define MBOX_FIFO_ADD         0x004
#define MBOX_FIFO_REMOVE      0x008
#define MBOX_FIFO_THRES_FREE  0x00C
#define MBOX_FIFO_THRES_OCCUP 0x010
#define MBOX_FIFO_STATUS      0x014
#define MBOX_DISABLE_IRQ 0x4
#define MBOX_ENABLE_IRQ  0x0
#define MBOX_LATCH 1
static struct list_head mboxs = LIST_HEAD_INIT(mboxs);
static struct mbox *get_mbox_with_id(u8 id)
int mbox_send(struct mbox *mbox, u32 mbox_msg, bool block)
EXPORT_SYMBOL(mbox_send);
#if defined(CONFIG_DEBUG_FS)
static ssize_t mbox_write_fifo(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t mbox_read_fifo(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(fifo, S_IWUGO | S_IRUGO, mbox_read_fifo, mbox_write_fifo);
static int mbox_show(struct seq_file *s, void *data)
static int mbox_open(struct inode *inode, struct file *file)
static const struct file_operations mbox_operations = ;
static irqreturn_t mbox_irq(int irq, void *arg)
struct mbox *mbox_setup(u8 mbox_id, mbox_recv_cb_t *mbox_cb, void *priv)
EXPORT_SYMBOL(mbox_setup);
int __init mbox_probe(struct platform_device *pdev)
static struct platform_driver mbox_driver = ;
static int __init mbox_init(void)
module_init(mbox_init);
void __exit mbox_exit(void)
module_exit(mbox_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MBOX driver");
