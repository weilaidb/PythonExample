#undef DEBUG
struct ip22_hostdata ;
#define host_to_hostdata(host) ((struct ip22_hostdata *)((host)->hostdata))
struct hpc_chunk ;
#define HPC_DMA_SIZE   PAGE_SIZE
#define DMA_DIR(d)   ((d == DATA_OUT_DIR) ? DMA_TO_DEVICE : DMA_FROM_DEVICE)
static irqreturn_t sgiwd93_intr(int irq, void *dev_id)
static inline
void fill_hpc_entries(struct ip22_hostdata *hd, struct scsi_cmnd *cmd, int din)
static int dma_setup(struct scsi_cmnd *cmd, int datainp)
static void dma_stop(struct Scsi_Host *instance, struct scsi_cmnd *SCpnt,
int status)
void sgiwd93_reset(unsigned long base)
EXPORT_SYMBOL_GPL(sgiwd93_reset);
static inline void init_hpc_chain(struct ip22_hostdata *hdata)
static int sgiwd93_bus_reset(struct scsi_cmnd *cmd)
static struct scsi_host_template sgiwd93_template = ;
static int __devinit sgiwd93_probe(struct platform_device *pdev)
static int __exit sgiwd93_remove(struct platform_device *pdev)
static struct platform_driver sgiwd93_driver = ;
static int __init sgiwd93_module_init(void)
static void __exit sgiwd93_module_exit(void)
module_init(sgiwd93_module_init);
module_exit(sgiwd93_module_exit);
MODULE_DESCRIPTION("SGI WD33C93 driver");
MODULE_AUTHOR("Ralf Baechle <ralf@linux-mips.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sgiwd93");
