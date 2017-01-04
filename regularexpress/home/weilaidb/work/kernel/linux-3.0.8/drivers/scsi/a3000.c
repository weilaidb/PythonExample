struct a3000_hostdata ;
static irqreturn_t a3000_intr(int irq, void *data)
static int dma_setup(struct scsi_cmnd *cmd, int dir_in)
static void dma_stop(struct Scsi_Host *instance, struct scsi_cmnd *SCpnt,
int status)
static int a3000_bus_reset(struct scsi_cmnd *cmd)
static struct scsi_host_template amiga_a3000_scsi_template = ;
static int __init amiga_a3000_scsi_probe(struct platform_device *pdev)
static int __exit amiga_a3000_scsi_remove(struct platform_device *pdev)
static struct platform_driver amiga_a3000_scsi_driver = ;
static int __init amiga_a3000_scsi_init(void)
module_init(amiga_a3000_scsi_init);
static void __exit amiga_a3000_scsi_exit(void)
module_exit(amiga_a3000_scsi_exit);
MODULE_DESCRIPTION("Amiga 3000 built-in SCSI");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:amiga-a3000-scsi");
