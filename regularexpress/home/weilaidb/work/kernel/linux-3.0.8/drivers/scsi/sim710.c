#define MAX_SLOTS 8
static __u8 __initdata id_array[MAX_SLOTS] = ;
static char *sim710;
MODULE_AUTHOR("Richard Hirst");
MODULE_DESCRIPTION("Simple NCR53C710 driver");
MODULE_LICENSE("GPL");
module_param(sim710, charp, 0);
#define ARG_SEP ' '
#define ARG_SEP ','
static __init int
param_setup(char *str)
__setup("sim710=", param_setup);
static struct scsi_host_template sim710_driver_template = ;
static __devinit int
sim710_probe_common(struct device *dev, unsigned long base_addr,
int irq, int clock, int differential, int scsi_id)
static __devexit int
sim710_device_remove(struct device *dev)
#define MCA_01BB_IO_PORTS
#define MCA_01BB_IRQS
#define MCA_004F_IO_PORTS
#define MCA_004F_IRQS
static short sim710_mca_id_table[] = ;
static __init int
sim710_mca_probe(struct device *dev)
static struct mca_driver sim710_mca_driver = ;
static struct eisa_device_id sim710_eisa_ids[] = ;
MODULE_DEVICE_TABLE(eisa, sim710_eisa_ids);
static __init int
sim710_eisa_probe(struct device *dev)
static struct eisa_driver sim710_eisa_driver = ;
static int __init sim710_init(void)
static void __exit sim710_exit(void)
module_init(sim710_init);
module_exit(sim710_exit);
