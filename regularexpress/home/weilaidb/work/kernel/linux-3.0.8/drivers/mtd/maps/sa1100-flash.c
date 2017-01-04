struct sa_subdev_info ;
struct sa_info ;
static void sa1100_set_vpp(struct map_info *map, int on)
static void sa1100_destroy_subdev(struct sa_subdev_info *subdev)
static int sa1100_probe_subdev(struct sa_subdev_info *subdev, struct resource *res)
static void sa1100_destroy(struct sa_info *info, struct flash_platform_data *plat)
static struct sa_info *__devinit
sa1100_setup_mtd(struct platform_device *pdev, struct flash_platform_data *plat)
static const char *part_probes[] = ;
static int __devinit sa1100_mtd_probe(struct platform_device *pdev)
static int __exit sa1100_mtd_remove(struct platform_device *pdev)
static void sa1100_mtd_shutdown(struct platform_device *dev)
#define sa1100_mtd_shutdown NULL
static struct platform_driver sa1100_mtd_driver = ;
static int __init sa1100_mtd_init(void)
static void __exit sa1100_mtd_exit(void)
module_init(sa1100_mtd_init);
module_exit(sa1100_mtd_exit);
MODULE_AUTHOR("Nicolas Pitre");
MODULE_DESCRIPTION("SA1100 CFI map driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sa1100-mtd");
