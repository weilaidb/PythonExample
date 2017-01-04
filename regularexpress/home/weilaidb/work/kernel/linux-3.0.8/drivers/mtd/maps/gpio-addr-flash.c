#define pr_devinit(fmt, args...) ()
#define DRIVER_NAME "gpio-addr-flash"
#define PFX DRIVER_NAME ": "
struct async_state ;
#define gf_map_info_to_state(mi) ((struct async_state *)(mi)->map_priv_1)
static void gf_set_gpios(struct async_state *state, unsigned long ofs)
static map_word gf_read(struct map_info *map, unsigned long ofs)
static void gf_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void gf_write(struct map_info *map, map_word d1, unsigned long ofs)
static void gf_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static const char *part_probe_types[] = ;
static int __devinit gpio_flash_probe(struct platform_device *pdev)
static int __devexit gpio_flash_remove(struct platform_device *pdev)
static struct platform_driver gpio_flash_driver = ;
static int __init gpio_flash_init(void)
module_init(gpio_flash_init);
static void __exit gpio_flash_exit(void)
module_exit(gpio_flash_exit);
MODULE_AUTHOR("Mike Frysinger <vapier@gentoo.org>");
MODULE_DESCRIPTION("MTD map driver for flashes addressed physically and with gpios");
MODULE_LICENSE("GPL");
