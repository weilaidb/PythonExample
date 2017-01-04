struct a2091_hostdata ;
static irqreturn_t a2091_intr(int irq, void *data)
static int dma_setup(struct scsi_cmnd *cmd, int dir_in)
static void dma_stop(struct Scsi_Host *instance, struct scsi_cmnd *SCpnt,
int status)
static int a2091_bus_reset(struct scsi_cmnd *cmd)
static struct scsi_host_template a2091_scsi_template = ;
static int __devinit a2091_probe(struct zorro_dev *z,
const struct zorro_device_id *ent)
static void __devexit a2091_remove(struct zorro_dev *z)
static struct zorro_device_id a2091_zorro_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(zorro, a2091_zorro_tbl);
static struct zorro_driver a2091_driver = ;
static int __init a2091_init(void)
module_init(a2091_init);
static void __exit a2091_exit(void)
module_exit(a2091_exit);
MODULE_DESCRIPTION("Commodore A2091/A590 SCSI");
MODULE_LICENSE("GPL");
