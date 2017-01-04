#define DRIVER_NAME "uio_pdrv_genirq"
struct uio_pdrv_genirq_platdata ;
static int uio_pdrv_genirq_open(struct uio_info *info, struct inode *inode)
static int uio_pdrv_genirq_release(struct uio_info *info, struct inode *inode)
static irqreturn_t uio_pdrv_genirq_handler(int irq, struct uio_info *dev_info)
static int uio_pdrv_genirq_irqcontrol(struct uio_info *dev_info, s32 irq_on)
static int uio_pdrv_genirq_probe(struct platform_device *pdev)
static int uio_pdrv_genirq_remove(struct platform_device *pdev)
static int uio_pdrv_genirq_runtime_nop(struct device *dev)
static const struct dev_pm_ops uio_pdrv_genirq_dev_pm_ops = ;
static struct platform_driver uio_pdrv_genirq = ;
static int __init uio_pdrv_genirq_init(void)
static void __exit uio_pdrv_genirq_exit(void)
module_init(uio_pdrv_genirq_init);
module_exit(uio_pdrv_genirq_exit);
MODULE_AUTHOR("Magnus Damm");
MODULE_DESCRIPTION("Userspace I/O platform driver with generic IRQ handling");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRIVER_NAME);
