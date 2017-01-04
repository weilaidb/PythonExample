MODULE_DESCRIPTION("mpeg driver for cx2388x based TV cards");
MODULE_AUTHOR("Jelle Foks <jelle@foks.us>");
MODULE_AUTHOR("Chris Pascoe <c.pascoe@itee.uq.edu.au>");
MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int debug;
module_param(debug,int,0644);
MODULE_PARM_DESC(debug,"enable debug messages [mpeg]");
#define dprintk(level,fmt, arg...)	if (debug >= level) \
printk(KERN_DEBUG "%s/2-mpeg: " fmt, dev->core->name, ## arg)
#define mpeg_dbg(level,fmt, arg...)	if (debug >= level) \
printk(KERN_DEBUG "%s/2-mpeg: " fmt, core->name, ## arg)
#if defined(CONFIG_MODULES) && defined(MODULE)
static void request_module_async(struct work_struct *work)
static void request_modules(struct cx8802_dev *dev)
static void flush_request_modules(struct cx8802_dev *dev)
#define request_modules(dev)
#define flush_request_modules(dev)
static LIST_HEAD(cx8802_devlist);
static DEFINE_MUTEX(cx8802_mutex);
static int cx8802_start_dma(struct cx8802_dev    *dev,
struct cx88_dmaqueue *q,
struct cx88_buffer   *buf)
static int cx8802_stop_dma(struct cx8802_dev *dev)
static int cx8802_restart_queue(struct cx8802_dev    *dev,
struct cx88_dmaqueue *q)
int cx8802_buf_prepare(struct videobuf_queue *q, struct cx8802_dev *dev,
struct cx88_buffer *buf, enum v4l2_field field)
void cx8802_buf_queue(struct cx8802_dev *dev, struct cx88_buffer *buf)
static void do_cancel_buffers(struct cx8802_dev *dev, const char *reason, int restart)
void cx8802_cancel_buffers(struct cx8802_dev *dev)
static void cx8802_timeout(unsigned long data)
static const char * cx88_mpeg_irqs[32] = ;
static void cx8802_mpeg_irq(struct cx8802_dev *dev)
#define MAX_IRQ_LOOP 10
static irqreturn_t cx8802_irq(int irq, void *dev_id)
static int cx8802_init_common(struct cx8802_dev *dev)
static void cx8802_fini_common(struct cx8802_dev *dev)
static int cx8802_suspend_common(struct pci_dev *pci_dev, pm_message_t state)
static int cx8802_resume_common(struct pci_dev *pci_dev)
struct cx8802_driver * cx8802_get_driver(struct cx8802_dev *dev, enum cx88_board_type btype)
static int cx8802_request_acquire(struct cx8802_driver *drv)
static int cx8802_request_release(struct cx8802_driver *drv)
static int cx8802_check_driver(struct cx8802_driver *drv)
int cx8802_register_driver(struct cx8802_driver *drv)
int cx8802_unregister_driver(struct cx8802_driver *drv)
static int __devinit cx8802_probe(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static void __devexit cx8802_remove(struct pci_dev *pci_dev)
static const struct pci_device_id cx8802_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cx8802_pci_tbl);
static struct pci_driver cx8802_pci_driver = ;
static int __init cx8802_init(void)
static void __exit cx8802_fini(void)
module_init(cx8802_init);
module_exit(cx8802_fini);
EXPORT_SYMBOL(cx8802_buf_prepare);
EXPORT_SYMBOL(cx8802_buf_queue);
EXPORT_SYMBOL(cx8802_cancel_buffers);
EXPORT_SYMBOL(cx8802_register_driver);
EXPORT_SYMBOL(cx8802_unregister_driver);
EXPORT_SYMBOL(cx8802_get_driver);
