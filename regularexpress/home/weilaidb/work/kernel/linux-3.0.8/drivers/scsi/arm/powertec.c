#define POWERTEC_FAS216_OFFSET	0x3000
#define POWERTEC_FAS216_SHIFT	6
#define POWERTEC_INTR_STATUS	0x2000
#define POWERTEC_INTR_BIT	0x80
#define POWERTEC_RESET_CONTROL	0x1018
#define POWERTEC_RESET_BIT	1
#define POWERTEC_TERM_CONTROL	0x2018
#define POWERTEC_TERM_ENABLE	1
#define POWERTEC_INTR_CONTROL	0x101c
#define POWERTEC_INTR_ENABLE	1
#define POWERTEC_INTR_DISABLE	0
#define VERSION	"1.10 (19/01/2003 2.5.59)"
static int term[MAX_ECARDS] = ;
#define NR_SG	256
struct powertec_info ;
static void
powertecscsi_irqenable(struct expansion_card *ec, int irqnr)
static void
powertecscsi_irqdisable(struct expansion_card *ec, int irqnr)
static const expansioncard_ops_t powertecscsi_ops = ;
static void
powertecscsi_terminator_ctl(struct Scsi_Host *host, int on_off)
static irqreturn_t powertecscsi_intr(int irq, void *dev_id)
static fasdmatype_t
powertecscsi_dma_setup(struct Scsi_Host *host, struct scsi_pointer *SCp,
fasdmadir_t direction, fasdmatype_t min_type)
static void
powertecscsi_dma_stop(struct Scsi_Host *host, struct scsi_pointer *SCp)
const char *powertecscsi_info(struct Scsi_Host *host)
static int
powertecscsi_set_proc_info(struct Scsi_Host *host, char *buffer, int length)
int powertecscsi_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset,
int length, int inout)
static ssize_t powertecscsi_show_term(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
powertecscsi_store_term(struct device *dev, struct device_attribute *attr, const char *buf, size_t len)
static DEVICE_ATTR(bus_term, S_IRUGO | S_IWUSR,
powertecscsi_show_term, powertecscsi_store_term);
static struct scsi_host_template powertecscsi_template = ;
static int __devinit
powertecscsi_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit powertecscsi_remove(struct expansion_card *ec)
static const struct ecard_id powertecscsi_cids[] = ;
static struct ecard_driver powertecscsi_driver = ;
static int __init powertecscsi_init(void)
static void __exit powertecscsi_exit(void)
module_init(powertecscsi_init);
module_exit(powertecscsi_exit);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("Powertec SCSI driver");
module_param_array(term, int, NULL, 0);
MODULE_PARM_DESC(term, "SCSI bus termination");
MODULE_LICENSE("GPL");
