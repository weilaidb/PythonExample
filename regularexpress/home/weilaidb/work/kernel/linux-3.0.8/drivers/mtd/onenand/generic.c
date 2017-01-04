#define DRIVER_NAME	"onenand-flash"
static const char *part_probes[] = ;
struct onenand_info ;
static int __devinit generic_onenand_probe(struct platform_device *pdev)
static int __devexit generic_onenand_remove(struct platform_device *pdev)
static struct platform_driver generic_onenand_driver = ;
MODULE_ALIAS("platform:" DRIVER_NAME);
static int __init generic_onenand_init(void)
static void __exit generic_onenand_exit(void)
module_init(generic_onenand_init);
module_exit(generic_onenand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kyungmin Park <kyungmin.park@samsung.com>");
MODULE_DESCRIPTION("Glue layer for OneNAND flash on generic boards");
