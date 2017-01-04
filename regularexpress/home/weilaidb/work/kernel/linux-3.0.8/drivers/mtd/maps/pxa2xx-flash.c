#define CACHELINESIZE	32
static void pxa2xx_map_inval_cache(struct map_info *map, unsigned long from,
ssize_t len)
struct pxa2xx_flash_info ;
static const char *probes[] = ;
static int __devinit pxa2xx_flash_probe(struct platform_device *pdev)
static int __devexit pxa2xx_flash_remove(struct platform_device *dev)
static void pxa2xx_flash_shutdown(struct platform_device *dev)
#define pxa2xx_flash_shutdown NULL
static struct platform_driver pxa2xx_flash_driver = ;
static int __init init_pxa2xx_flash(void)
static void __exit cleanup_pxa2xx_flash(void)
module_init(init_pxa2xx_flash);
module_exit(cleanup_pxa2xx_flash);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nicolas Pitre <nico@fluxnic.net>");
MODULE_DESCRIPTION("MTD map driver for Intel XScale PXA2xx");
