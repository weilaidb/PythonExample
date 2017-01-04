#define DRV_NAME	"pata-rb532-cf"
#define DRV_VERSION	"0.1.0"
#define DRV_DESC	"PATA driver for RouterBOARD 532 Compact Flash"
#define RB500_CF_MAXPORTS	1
#define RB500_CF_IO_DELAY	400
#define RB500_CF_REG_BASE	0x0800
#define RB500_CF_REG_ERR	0x080D
#define RB500_CF_REG_CTRL	0x080E
#define RB500_CF_REG_DBUF32	0x0C00
struct rb532_cf_info ;
static irqreturn_t rb532_pata_irq_handler(int irq, void *dev_instance)
static struct ata_port_operations rb532_pata_port_ops = ;
static struct scsi_host_template rb532_pata_sht = ;
static void rb532_pata_setup_ports(struct ata_host *ah)
static __devinit int rb532_pata_driver_probe(struct platform_device *pdev)
static __devexit int rb532_pata_driver_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:" DRV_NAME);
static struct platform_driver rb532_pata_platform_driver = ;
#define DRV_INFO DRV_DESC " version " DRV_VERSION
static int __init rb532_pata_module_init(void)
static void __exit rb532_pata_module_exit(void)
MODULE_AUTHOR("Gabor Juhos <juhosg at openwrt.org>");
MODULE_AUTHOR("Florian Fainelli <florian@openwrt.org>");
MODULE_DESCRIPTION(DRV_DESC);
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
module_init(rb532_pata_module_init);
module_exit(rb532_pata_module_exit);
