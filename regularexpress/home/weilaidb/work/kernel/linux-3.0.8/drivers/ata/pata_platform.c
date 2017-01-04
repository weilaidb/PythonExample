#define DRV_NAME "pata_platform"
#define DRV_VERSION "1.2"
static int pio_mask = 1;
static int pata_platform_set_mode(struct ata_link *link, struct ata_device **unused)
static struct scsi_host_template pata_platform_sht = ;
static struct ata_port_operations pata_platform_port_ops = ;
static void pata_platform_setup_port(struct ata_ioports *ioaddr,
unsigned int shift)
int __devinit __pata_platform_probe(struct device *dev,
struct resource *io_res,
struct resource *ctl_res,
struct resource *irq_res,
unsigned int ioport_shift,
int __pio_mask)
EXPORT_SYMBOL_GPL(__pata_platform_probe);
int __pata_platform_remove(struct device *dev)
EXPORT_SYMBOL_GPL(__pata_platform_remove);
static int __devinit pata_platform_probe(struct platform_device *pdev)
static int __devexit pata_platform_remove(struct platform_device *pdev)
static struct platform_driver pata_platform_driver = ;
static int __init pata_platform_init(void)
static void __exit pata_platform_exit(void)
module_init(pata_platform_init);
module_exit(pata_platform_exit);
module_param(pio_mask, int, 0);
MODULE_AUTHOR("Paul Mundt");
MODULE_DESCRIPTION("low-level driver for platform device ATA");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:" DRV_NAME);
