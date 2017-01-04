#define DRV_NAME	"pata_ixp4xx_cf"
#define DRV_VERSION	"0.2"
static int ixp4xx_set_mode(struct ata_link *link, struct ata_device **error)
static unsigned int ixp4xx_mmio_data_xfer(struct ata_device *dev,
unsigned char *buf, unsigned int buflen, int rw)
static struct scsi_host_template ixp4xx_sht = ;
static struct ata_port_operations ixp4xx_port_ops = ;
static void ixp4xx_setup_port(struct ata_port *ap,
struct ixp4xx_pata_data *data,
unsigned long raw_cs0, unsigned long raw_cs1)
static __devinit int ixp4xx_pata_probe(struct platform_device *pdev)
static __devexit int ixp4xx_pata_remove(struct platform_device *dev)
static struct platform_driver ixp4xx_pata_platform_driver = ;
static int __init ixp4xx_pata_init(void)
static void __exit ixp4xx_pata_exit(void)
MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("low-level driver for ixp4xx Compact Flash PATA");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:" DRV_NAME);
module_init(ixp4xx_pata_init);
module_exit(ixp4xx_pata_exit);
