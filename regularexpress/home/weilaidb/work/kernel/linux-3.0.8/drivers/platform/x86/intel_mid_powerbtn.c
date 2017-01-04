#define DRIVER_NAME "msic_power_btn"
#define MSIC_PB_STATUS	0x3f
#define MSIC_PB_LEVEL	(1 << 3)
static irqreturn_t mfld_pb_isr(int irq, void *dev_id)
static int __devinit mfld_pb_probe(struct platform_device *pdev)
static int __devexit mfld_pb_remove(struct platform_device *pdev)
static struct platform_driver mfld_pb_driver = ;
static int __init mfld_pb_init(void)
module_init(mfld_pb_init);
static void __exit mfld_pb_exit(void)
module_exit(mfld_pb_exit);
MODULE_AUTHOR("Hong Liu <hong.liu@intel.com>");
MODULE_DESCRIPTION("Intel Medfield Power Button Driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRIVER_NAME);
