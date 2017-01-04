#define BCM63XX_BUSWIDTH	2
#define BCM63XX_EXTENDED_SIZE	0xBFC00000
#define PFX KBUILD_MODNAME ": "
static struct mtd_partition *parsed_parts;
static struct mtd_info *bcm963xx_mtd_info;
static struct map_info bcm963xx_map = ;
static int parse_cfe_partitions(struct mtd_info *master,
struct mtd_partition **pparts)
;
static int bcm963xx_detect_cfe(struct mtd_info *master)
static int bcm963xx_probe(struct platform_device *pdev)
static int bcm963xx_remove(struct platform_device *pdev)
static struct platform_driver bcm63xx_mtd_dev = ;
static int __init bcm963xx_mtd_init(void)
static void __exit bcm963xx_mtd_exit(void)
module_init(bcm963xx_mtd_init);
module_exit(bcm963xx_mtd_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Broadcom BCM63xx MTD driver for CFE and RedBoot");
MODULE_AUTHOR("Daniel Dickinson <openwrt@cshore.neomailbox.net>");
MODULE_AUTHOR("Florian Fainelli <florian@openwrt.org>");
MODULE_AUTHOR("Mike Albon <malbon@openwrt.org>");
