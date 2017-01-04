#define CHECK_WD33C93
struct gvp11_hostdata ;
static irqreturn_t gvp11_intr(int irq, void *data)
static int gvp11_xfer_mask = 0;
void gvp11_setup(char *str, int *ints)
static int dma_setup(struct scsi_cmnd *cmd, int dir_in)
static void dma_stop(struct Scsi_Host *instance, struct scsi_cmnd *SCpnt,
int status)
static int gvp11_bus_reset(struct scsi_cmnd *cmd)
static struct scsi_host_template gvp11_scsi_template = ;
static int __devinit check_wd33c93(struct gvp11_scsiregs *regs)
static int __devinit gvp11_probe(struct zorro_dev *z,
const struct zorro_device_id *ent)
static void __devexit gvp11_remove(struct zorro_dev *z)
static struct zorro_device_id gvp11_zorro_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(zorro, gvp11_zorro_tbl);
static struct zorro_driver gvp11_driver = ;
static int __init gvp11_init(void)
module_init(gvp11_init);
static void __exit gvp11_exit(void)
module_exit(gvp11_exit);
MODULE_DESCRIPTION("GVP Series II SCSI");
MODULE_LICENSE("GPL");
