#define CUMANASCSI2_STATUS		(0x0000)
#define STATUS_INT			(1 << 0)
#define STATUS_DRQ			(1 << 1)
#define STATUS_LATCHED			(1 << 3)
#define CUMANASCSI2_ALATCH		(0x0014)
#define ALATCH_ENA_INT			(3)
#define ALATCH_DIS_INT			(2)
#define ALATCH_ENA_TERM			(5)
#define ALATCH_DIS_TERM			(4)
#define ALATCH_ENA_BIT32		(11)
#define ALATCH_DIS_BIT32		(10)
#define ALATCH_ENA_DMA			(13)
#define ALATCH_DIS_DMA			(12)
#define ALATCH_DMA_OUT			(15)
#define ALATCH_DMA_IN			(14)
#define CUMANASCSI2_PSEUDODMA		(0x0200)
#define CUMANASCSI2_FAS216_OFFSET	(0x0300)
#define CUMANASCSI2_FAS216_SHIFT	2
#define VERSION "1.00 (13/11/2002 2.5.47)"
static int term[MAX_ECARDS] = ;
#define NR_SG	256
struct cumanascsi2_info ;
#define CSTATUS_IRQ	(1 << 0)
#define CSTATUS_DRQ	(1 << 1)
static void
cumanascsi_2_irqenable(struct expansion_card *ec, int irqnr)
static void
cumanascsi_2_irqdisable(struct expansion_card *ec, int irqnr)
static const expansioncard_ops_t cumanascsi_2_ops = ;
static void
cumanascsi_2_terminator_ctl(struct Scsi_Host *host, int on_off)
static irqreturn_t
cumanascsi_2_intr(int irq, void *dev_id)
static fasdmatype_t
cumanascsi_2_dma_setup(struct Scsi_Host *host, struct scsi_pointer *SCp,
fasdmadir_t direction, fasdmatype_t min_type)
static void
cumanascsi_2_dma_pseudo(struct Scsi_Host *host, struct scsi_pointer *SCp,
fasdmadir_t direction, int transfer)
static void
cumanascsi_2_dma_stop(struct Scsi_Host *host, struct scsi_pointer *SCp)
const char *cumanascsi_2_info(struct Scsi_Host *host)
static int
cumanascsi_2_set_proc_info(struct Scsi_Host *host, char *buffer, int length)
int cumanascsi_2_proc_info (struct Scsi_Host *host, char *buffer, char **start, off_t offset,
int length, int inout)
static struct scsi_host_template cumanascsi2_template = ;
static int __devinit
cumanascsi2_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit cumanascsi2_remove(struct expansion_card *ec)
static const struct ecard_id cumanascsi2_cids[] = ;
static struct ecard_driver cumanascsi2_driver = ;
static int __init cumanascsi2_init(void)
static void __exit cumanascsi2_exit(void)
module_init(cumanascsi2_init);
module_exit(cumanascsi2_exit);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("Cumana SCSI-2 driver for Acorn machines");
module_param_array(term, int, NULL, 0);
MODULE_PARM_DESC(term, "SCSI bus termination");
MODULE_LICENSE("GPL");
