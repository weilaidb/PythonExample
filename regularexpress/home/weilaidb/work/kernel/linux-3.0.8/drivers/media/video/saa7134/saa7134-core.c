MODULE_DESCRIPTION("v4l2 driver module for saa7130/34 based TV cards");
MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int irq_debug;
module_param(irq_debug, int, 0644);
MODULE_PARM_DESC(irq_debug,"enable debug messages [IRQ handler]");
static unsigned int core_debug;
module_param(core_debug, int, 0644);
MODULE_PARM_DESC(core_debug,"enable debug messages [core]");
static unsigned int gpio_tracking;
module_param(gpio_tracking, int, 0644);
MODULE_PARM_DESC(gpio_tracking,"enable debug messages [gpio]");
static unsigned int alsa = 1;
module_param(alsa, int, 0644);
MODULE_PARM_DESC(alsa,"enable/disable ALSA DMA sound [dmasound]");
static unsigned int latency = UNSET;
module_param(latency, int, 0444);
MODULE_PARM_DESC(latency,"pci latency timer");
int saa7134_no_overlay=-1;
module_param_named(no_overlay, saa7134_no_overlay, int, 0444);
MODULE_PARM_DESC(no_overlay,"allow override overlay default (0 disables, 1 enables)"
" [some VIA/SIS chipsets are known to have problem with overlay]");
static unsigned int video_nr[] = ;
static unsigned int vbi_nr[]   = ;
static unsigned int radio_nr[] = ;
static unsigned int tuner[]    = ;
static unsigned int card[]     = ;
module_param_array(video_nr, int, NULL, 0444);
module_param_array(vbi_nr,   int, NULL, 0444);
module_param_array(radio_nr, int, NULL, 0444);
module_param_array(tuner,    int, NULL, 0444);
module_param_array(card,     int, NULL, 0444);
MODULE_PARM_DESC(video_nr, "video device number");
MODULE_PARM_DESC(vbi_nr,   "vbi device number");
MODULE_PARM_DESC(radio_nr, "radio device number");
MODULE_PARM_DESC(tuner,    "tuner type");
MODULE_PARM_DESC(card,     "card type");
DEFINE_MUTEX(saa7134_devlist_lock);
EXPORT_SYMBOL(saa7134_devlist_lock);
LIST_HEAD(saa7134_devlist);
EXPORT_SYMBOL(saa7134_devlist);
static LIST_HEAD(mops_list);
static unsigned int saa7134_devcount;
int (*saa7134_dmasound_init)(struct saa7134_dev *dev);
int (*saa7134_dmasound_exit)(struct saa7134_dev *dev);
#define dprintk(fmt, arg...)	if (core_debug) \
printk(KERN_DEBUG "%s/core: " fmt, dev->name , ## arg)
void saa7134_track_gpio(struct saa7134_dev *dev, char *msg)
void saa7134_set_gpio(struct saa7134_dev *dev, int bit_no, int value)
#if defined(CONFIG_MODULES) && defined(MODULE)
static void request_module_async(struct work_struct *work)
static void request_submodules(struct saa7134_dev *dev)
static void flush_request_submodules(struct saa7134_dev *dev)
#define request_submodules(dev)
#define flush_request_submodules(dev)
static int saa7134_buffer_pages(int size)
int saa7134_buffer_count(unsigned int size, unsigned int count)
int saa7134_buffer_startpage(struct saa7134_buf *buf)
unsigned long saa7134_buffer_base(struct saa7134_buf *buf)
int saa7134_pgtable_alloc(struct pci_dev *pci, struct saa7134_pgtable *pt)
int saa7134_pgtable_build(struct pci_dev *pci, struct saa7134_pgtable *pt,
struct scatterlist *list, unsigned int length,
unsigned int startpage)
void saa7134_pgtable_free(struct pci_dev *pci, struct saa7134_pgtable *pt)
void saa7134_dma_free(struct videobuf_queue *q,struct saa7134_buf *buf)
int saa7134_buffer_queue(struct saa7134_dev *dev,
struct saa7134_dmaqueue *q,
struct saa7134_buf *buf)
void saa7134_buffer_finish(struct saa7134_dev *dev,
struct saa7134_dmaqueue *q,
unsigned int state)
void saa7134_buffer_next(struct saa7134_dev *dev,
struct saa7134_dmaqueue *q)
void saa7134_buffer_timeout(unsigned long data)
int saa7134_set_dmabits(struct saa7134_dev *dev)
static char *irqbits[] = ;
#define IRQBITS ARRAY_SIZE(irqbits)
static void print_irqstatus(struct saa7134_dev *dev, int loop,
unsigned long report, unsigned long status)
static irqreturn_t saa7134_irq(int irq, void *dev_id)
static int saa7134_hw_enable1(struct saa7134_dev *dev)
static int saa7134_hwinit1(struct saa7134_dev *dev)
static int saa7134_hw_enable2(struct saa7134_dev *dev)
static int saa7134_hwinit2(struct saa7134_dev *dev)
static int saa7134_hwfini(struct saa7134_dev *dev)
static void __devinit must_configure_manually(int has_eeprom)
static struct video_device *vdev_init(struct saa7134_dev *dev,
struct video_device *template,
char *type)
static void saa7134_unregister_video(struct saa7134_dev *dev)
static void mpeg_ops_attach(struct saa7134_mpeg_ops *ops,
struct saa7134_dev *dev)
static void mpeg_ops_detach(struct saa7134_mpeg_ops *ops,
struct saa7134_dev *dev)
static int __devinit saa7134_initdev(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static void __devexit saa7134_finidev(struct pci_dev *pci_dev)
static int saa7134_buffer_requeue(struct saa7134_dev *dev,
struct saa7134_dmaqueue *q)
static int saa7134_suspend(struct pci_dev *pci_dev , pm_message_t state)
static int saa7134_resume(struct pci_dev *pci_dev)
int saa7134_ts_register(struct saa7134_mpeg_ops *ops)
void saa7134_ts_unregister(struct saa7134_mpeg_ops *ops)
EXPORT_SYMBOL(saa7134_ts_register);
EXPORT_SYMBOL(saa7134_ts_unregister);
static struct pci_driver saa7134_pci_driver = ;
static int __init saa7134_init(void)
static void __exit saa7134_fini(void)
module_init(saa7134_init);
module_exit(saa7134_fini);
EXPORT_SYMBOL(saa7134_set_gpio);
EXPORT_SYMBOL(saa7134_boards);
EXPORT_SYMBOL(saa7134_dmasound_init);
EXPORT_SYMBOL(saa7134_dmasound_exit);
EXPORT_SYMBOL(saa7134_pgtable_free);
EXPORT_SYMBOL(saa7134_pgtable_build);
EXPORT_SYMBOL(saa7134_pgtable_alloc);
EXPORT_SYMBOL(saa7134_set_dmabits);
