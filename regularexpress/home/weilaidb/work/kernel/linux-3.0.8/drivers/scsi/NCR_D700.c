#define NCR_D700_VERSION "2.2"
static char *NCR_D700;
MODULE_AUTHOR("James Bottomley");
MODULE_DESCRIPTION("NCR Dual700 SCSI Driver");
MODULE_LICENSE("GPL");
module_param(NCR_D700, charp, 0);
static __u8 __devinitdata id_array[2*(MCA_MAX_SLOT_NR + 1)] =
;
#define ARG_SEP ' '
#define ARG_SEP ','
static int __init
param_setup(char *string)
static struct scsi_host_template NCR_D700_driver_template = ;
struct NCR_D700_private ;
static int __devinit
NCR_D700_probe_one(struct NCR_D700_private *p, int siop, int irq,
int slot, u32 region, int differential)
static irqreturn_t
NCR_D700_intr(int irq, void *data)
static int __devinit
NCR_D700_probe(struct device *dev)
static void __devexit
NCR_D700_remove_one(struct Scsi_Host *host)
static int __devexit
NCR_D700_remove(struct device *dev)
static short NCR_D700_id_table[] = ;
static struct mca_driver NCR_D700_driver = ;
static int __init NCR_D700_init(void)
static void __exit NCR_D700_exit(void)
module_init(NCR_D700_init);
module_exit(NCR_D700_exit);
__setup("NCR_D700=", param_setup);
