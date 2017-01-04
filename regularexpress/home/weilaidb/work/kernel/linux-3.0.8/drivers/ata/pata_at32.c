#define DEBUG
#define DRV_NAME "pata_at32"
#define DRV_VERSION "0.0.3"
#define CF_IDE_OFFSET	  0x00c00000
#define CF_ALT_IDE_OFFSET 0x00e00000
#define CF_RES_SIZE	  2048
#undef DEBUG_BUS
enum ;
struct at32_ide_info ;
static int pata_at32_setup_timing(struct device *dev,
struct at32_ide_info *info,
const struct ata_timing *ata)
static void pata_at32_set_piomode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template at32_sht = ;
static struct ata_port_operations at32_port_ops = ;
static int __init pata_at32_init_one(struct device *dev,
struct at32_ide_info *info)
static void __init pata_at32_debug_bus(struct device *dev,
struct at32_ide_info *info)
static int __init pata_at32_probe(struct platform_device *pdev)
static int __exit pata_at32_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:at32_ide");
static struct platform_driver pata_at32_driver = ;
static int __init pata_at32_init(void)
static void __exit pata_at32_exit(void)
module_init(pata_at32_init);
module_exit(pata_at32_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("AVR32 SMC/CFC PATA Driver");
MODULE_AUTHOR("Kristoffer Nyborg Gregertsen <kngregertsen@norway.atmel.com>");
MODULE_VERSION(DRV_VERSION);
