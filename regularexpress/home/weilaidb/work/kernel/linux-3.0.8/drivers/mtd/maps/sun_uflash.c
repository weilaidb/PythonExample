#define UFLASH_OBPNAME	"flashprom"
#define DRIVER_NAME	"sun_uflash"
#define PFX		DRIVER_NAME ": "
#define UFLASH_WINDOW_SIZE	0x200000
#define UFLASH_BUSWIDTH		1
MODULE_AUTHOR("Eric Brower <ebrower@usa.net>");
MODULE_DESCRIPTION("User-programmable flash device on Sun Microsystems boardsets");
MODULE_SUPPORTED_DEVICE(DRIVER_NAME);
MODULE_LICENSE("GPL");
MODULE_VERSION("2.1");
struct uflash_dev ;
struct map_info uflash_map_templ = ;
int uflash_devinit(struct platform_device *op, struct device_node *dp)
static int __devinit uflash_probe(struct platform_device *op)
static int __devexit uflash_remove(struct platform_device *op)
static const struct of_device_id uflash_match[] = ;
MODULE_DEVICE_TABLE(of, uflash_match);
static struct platform_driver uflash_driver = ;
static int __init uflash_init(void)
static void __exit uflash_exit(void)
module_init(uflash_init);
module_exit(uflash_exit);
