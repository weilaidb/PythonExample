struct rbtx4939_flash_info ;
static int rbtx4939_flash_remove(struct platform_device *dev)
static const char *rom_probe_types[] = ;
static const char *part_probe_types[] = ;
static int rbtx4939_flash_probe(struct platform_device *dev)
static void rbtx4939_flash_shutdown(struct platform_device *dev)
#define rbtx4939_flash_shutdown NULL
static struct platform_driver rbtx4939_flash_driver = ;
static int __init rbtx4939_flash_init(void)
static void __exit rbtx4939_flash_exit(void)
module_init(rbtx4939_flash_init);
module_exit(rbtx4939_flash_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RBTX4939 MTD map driver");
MODULE_ALIAS("platform:rbtx4939-flash");
