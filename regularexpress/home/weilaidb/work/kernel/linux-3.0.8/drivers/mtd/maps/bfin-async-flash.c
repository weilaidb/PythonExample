#define pr_devinit(fmt, args...) ()
#define DRIVER_NAME "bfin-async-flash"
struct async_state ;
static void switch_to_flash(struct async_state *state)
static void switch_back(struct async_state *state)
static map_word bfin_flash_read(struct map_info *map, unsigned long ofs)
static void bfin_flash_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void bfin_flash_write(struct map_info *map, map_word d1, unsigned long ofs)
static void bfin_flash_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static const char *part_probe_types[] = ;
static int __devinit bfin_flash_probe(struct platform_device *pdev)
static int __devexit bfin_flash_remove(struct platform_device *pdev)
static struct platform_driver bfin_flash_driver = ;
static int __init bfin_flash_init(void)
module_init(bfin_flash_init);
static void __exit bfin_flash_exit(void)
module_exit(bfin_flash_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MTD map driver for Blackfins with flash/ethernet on same async bank");
