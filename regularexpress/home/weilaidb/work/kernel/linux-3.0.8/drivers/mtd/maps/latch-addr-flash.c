#define DRIVER_NAME "latch-addr-flash"
struct latch_addr_flash_info ;
static map_word lf_read(struct map_info *map, unsigned long ofs)
static void lf_write(struct map_info *map, map_word datum, unsigned long ofs)
static void lf_copy_from(struct map_info *map, void *to,
unsigned long from, ssize_t len)
static char *rom_probe_types[] = ;
static char *part_probe_types[] = ;
static int latch_addr_flash_remove(struct platform_device *dev)
static int __devinit latch_addr_flash_probe(struct platform_device *dev)
static struct platform_driver latch_addr_flash_driver = ;
static int __init latch_addr_flash_init(void)
module_init(latch_addr_flash_init);
static void __exit latch_addr_flash_exit(void)
module_exit(latch_addr_flash_exit);
MODULE_AUTHOR("David Griego <dgriego@mvista.com>");
MODULE_DESCRIPTION("MTD map driver for flashes addressed physically with upper "
"address lines being set board specifically");
MODULE_LICENSE("GPL v2");
