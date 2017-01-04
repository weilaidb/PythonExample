#define DEB(x) x
#define DEB(x)
struct aha1740_hostdata ;
struct aha1740_sg ;
#define HOSTDATA(host) ((struct aha1740_hostdata *) &host->hostdata)
static inline struct ecb *ecb_dma_to_cpu (struct Scsi_Host *host,
dma_addr_t dma)
static inline dma_addr_t ecb_cpu_to_dma (struct Scsi_Host *host, void *cpu)
static int aha1740_proc_info(struct Scsi_Host *shpnt, char *buffer,
char **start, off_t offset,
int length, int inout)
static int aha1740_makecode(unchar *sense, unchar *status)
static int aha1740_test_port(unsigned int base)
static irqreturn_t aha1740_intr_handle(int irq, void *dev_id)
static int aha1740_queuecommand_lck(Scsi_Cmnd * SCpnt, void (*done)(Scsi_Cmnd *))
static DEF_SCSI_QCMD(aha1740_queuecommand)
static void aha1740_getconfig(unsigned int base, unsigned int *irq_level,
unsigned int *irq_type,
unsigned int *translation)
static int aha1740_biosparam(struct scsi_device *sdev,
struct block_device *dev,
sector_t capacity, int* ip)
static int aha1740_eh_abort_handler (Scsi_Cmnd *dummy)
static struct scsi_host_template aha1740_template = ;
static int aha1740_probe (struct device *dev)
static __devexit int aha1740_remove (struct device *dev)
static struct eisa_device_id aha1740_ids[] = ;
MODULE_DEVICE_TABLE(eisa, aha1740_ids);
static struct eisa_driver aha1740_driver = ;
static __init int aha1740_init (void)
static __exit void aha1740_exit (void)
module_init (aha1740_init);
module_exit (aha1740_exit);
MODULE_LICENSE("GPL");
