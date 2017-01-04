MODULE_DESCRIPTION("Driver for NXP SAA7164 based TV cards");
MODULE_AUTHOR("Steven Toth <stoth@kernellabs.com>");
MODULE_LICENSE("GPL");
unsigned int saa_debug;
module_param_named(debug, saa_debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages");
unsigned int fw_debug;
module_param(fw_debug, int, 0644);
MODULE_PARM_DESC(fw_debug, "Firware debug level def:2");
unsigned int encoder_buffers = SAA7164_MAX_ENCODER_BUFFERS;
module_param(encoder_buffers, int, 0644);
MODULE_PARM_DESC(encoder_buffers, "Total buffers in read queue 16-512 def:64");
unsigned int vbi_buffers = SAA7164_MAX_VBI_BUFFERS;
module_param(vbi_buffers, int, 0644);
MODULE_PARM_DESC(vbi_buffers, "Total buffers in read queue 16-512 def:64");
unsigned int waitsecs = 10;
module_param(waitsecs, int, 0644);
MODULE_PARM_DESC(waitsecs, "timeout on firmware messages");
static unsigned int card[]  = ;
module_param_array(card,  int, NULL, 0444);
MODULE_PARM_DESC(card, "card type");
unsigned int print_histogram = 64;
module_param(print_histogram, int, 0644);
MODULE_PARM_DESC(print_histogram, "print histogram values once");
unsigned int crc_checking = 1;
module_param(crc_checking, int, 0644);
MODULE_PARM_DESC(crc_checking, "enable crc sanity checking on buffers");
unsigned int guard_checking = 1;
module_param(guard_checking, int, 0644);
MODULE_PARM_DESC(guard_checking,
"enable dma sanity checking for buffer overruns");
static unsigned int saa7164_devcount;
static DEFINE_MUTEX(devlist);
LIST_HEAD(saa7164_devlist);
#define INT_SIZE 16
void saa7164_dumphex16FF(struct saa7164_dev *dev, u8 *buf, int len)
static void saa7164_pack_verifier(struct saa7164_buffer *buf)
#define FIXED_VIDEO_PID 0xf1
#define FIXED_AUDIO_PID 0xf2
static void saa7164_ts_verifier(struct saa7164_buffer *buf)
static void saa7164_histogram_reset(struct saa7164_histogram *hg, char *name)
void saa7164_histogram_update(struct saa7164_histogram *hg, u32 val)
static void saa7164_histogram_print(struct saa7164_port *port,
struct saa7164_histogram *hg)
static void saa7164_work_enchandler_helper(struct saa7164_port *port, int bufnr)
static void saa7164_work_enchandler(struct work_struct *w)
static void saa7164_work_vbihandler(struct work_struct *w)
static void saa7164_work_cmdhandler(struct work_struct *w)
static void saa7164_buffer_deliver(struct saa7164_buffer *buf)
static irqreturn_t saa7164_irq_vbi(struct saa7164_port *port)
static irqreturn_t saa7164_irq_encoder(struct saa7164_port *port)
static irqreturn_t saa7164_irq_ts(struct saa7164_port *port)
static irqreturn_t saa7164_irq(int irq, void *dev_id)
void saa7164_getfirmwarestatus(struct saa7164_dev *dev)
u32 saa7164_getcurrentfirmwareversion(struct saa7164_dev *dev)
void saa7164_dumphex16(struct saa7164_dev *dev, u8 *buf, int len)
void saa7164_dumpregs(struct saa7164_dev *dev, u32 addr)
static void saa7164_dump_hwdesc(struct saa7164_dev *dev)
static void saa7164_dump_intfdesc(struct saa7164_dev *dev)
static void saa7164_dump_busdesc(struct saa7164_dev *dev)
static void saa7164_get_descriptors(struct saa7164_dev *dev)
static int saa7164_pci_quirks(struct saa7164_dev *dev)
static int get_resources(struct saa7164_dev *dev)
static int saa7164_port_init(struct saa7164_dev *dev, int portnr)
static int saa7164_dev_setup(struct saa7164_dev *dev)
static void saa7164_dev_unregister(struct saa7164_dev *dev)
static int saa7164_proc_show(struct seq_file *m, void *v)
static int saa7164_proc_open(struct inode *inode, struct file *filp)
static const struct file_operations saa7164_proc_fops = ;
static int saa7164_proc_create(void)
static int saa7164_thread_function(void *data)
static int __devinit saa7164_initdev(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static void saa7164_shutdown(struct saa7164_dev *dev)
static void __devexit saa7164_finidev(struct pci_dev *pci_dev)
static struct pci_device_id saa7164_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, saa7164_pci_tbl);
static struct pci_driver saa7164_pci_driver = ;
static int __init saa7164_init(void)
static void __exit saa7164_fini(void)
module_init(saa7164_init);
module_exit(saa7164_fini);
