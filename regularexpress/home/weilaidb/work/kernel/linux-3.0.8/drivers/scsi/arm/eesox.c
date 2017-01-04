#define EESOX_FAS216_OFFSET	0x3000
#define EESOX_FAS216_SHIFT	5
#define EESOX_DMASTAT		0x2800
#define EESOX_STAT_INTR		0x01
#define EESOX_STAT_DMA		0x02
#define EESOX_CONTROL		0x2800
#define EESOX_INTR_ENABLE	0x04
#define EESOX_TERM_ENABLE	0x02
#define EESOX_RESET		0x01
#define EESOX_DMADATA		0x3800
#define VERSION "1.10 (17/01/2003 2.5.59)"
static int term[MAX_ECARDS] = ;
#define NR_SG	256
struct eesoxscsi_info ;
static void
eesoxscsi_irqenable(struct expansion_card *ec, int irqnr)
static void
eesoxscsi_irqdisable(struct expansion_card *ec, int irqnr)
static const expansioncard_ops_t eesoxscsi_ops = ;
static void
eesoxscsi_terminator_ctl(struct Scsi_Host *host, int on_off)
static irqreturn_t
eesoxscsi_intr(int irq, void *dev_id)
static fasdmatype_t
eesoxscsi_dma_setup(struct Scsi_Host *host, struct scsi_pointer *SCp,
fasdmadir_t direction, fasdmatype_t min_type)
static void eesoxscsi_buffer_in(void *buf, int length, void __iomem *base)
static void eesoxscsi_buffer_out(void *buf, int length, void __iomem *base)
static void
eesoxscsi_dma_pseudo(struct Scsi_Host *host, struct scsi_pointer *SCp,
fasdmadir_t dir, int transfer_size)
static void
eesoxscsi_dma_stop(struct Scsi_Host *host, struct scsi_pointer *SCp)
const char *eesoxscsi_info(struct Scsi_Host *host)
static int
eesoxscsi_set_proc_info(struct Scsi_Host *host, char *buffer, int length)
int eesoxscsi_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset,
int length, int inout)
static ssize_t eesoxscsi_show_term(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t eesoxscsi_store_term(struct device *dev, struct device_attribute *attr, const char *buf, size_t len)
static DEVICE_ATTR(bus_term, S_IRUGO | S_IWUSR,
eesoxscsi_show_term, eesoxscsi_store_term);
static struct scsi_host_template eesox_template = ;
static int __devinit
eesoxscsi_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit eesoxscsi_remove(struct expansion_card *ec)
static const struct ecard_id eesoxscsi_cids[] = ;
static struct ecard_driver eesoxscsi_driver = ;
static int __init eesox_init(void)
static void __exit eesox_exit(void)
module_init(eesox_init);
module_exit(eesox_exit);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("EESOX 'Fast' SCSI driver for Acorn machines");
module_param_array(term, int, NULL, 0);
MODULE_PARM_DESC(term, "SCSI bus termination");
MODULE_LICENSE("GPL");
