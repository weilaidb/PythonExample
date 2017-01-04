#define DRIVER_NAME "uio_pdrv"
struct uio_platdata ;
static int uio_pdrv_probe(struct platform_device *pdev)
static int uio_pdrv_remove(struct platform_device *pdev)
static struct platform_driver uio_pdrv = ;
static int __init uio_pdrv_init(void)
static void __exit uio_pdrv_exit(void)
module_init(uio_pdrv_init);
module_exit(uio_pdrv_exit);
MODULE_AUTHOR("Uwe Kleine-Koenig");
MODULE_DESCRIPTION("Userspace I/O platform driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRIVER_NAME);
