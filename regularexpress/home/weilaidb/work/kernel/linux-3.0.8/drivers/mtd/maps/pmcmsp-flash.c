static struct mtd_info **msp_flash;
static struct mtd_partition **msp_parts;
static struct map_info *msp_maps;
static int fcnt;
#define DEBUG_MARKER printk(KERN_NOTICE "%s[%d]\n", __func__, __LINE__)
static int __init init_msp_flash(void)
static void __exit cleanup_msp_flash(void)
MODULE_AUTHOR("PMC-Sierra, Inc");
MODULE_DESCRIPTION("MTD map driver for PMC-Sierra MSP boards");
MODULE_LICENSE("GPL");
module_init(init_msp_flash);
module_exit(cleanup_msp_flash);
