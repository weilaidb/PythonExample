u32 davinci_vc_read(struct davinci_vc *davinci_vc, int reg)
void davinci_vc_write(struct davinci_vc *davinci_vc,
int reg, u32 val)
static int __init davinci_vc_probe(struct platform_device *pdev)
static int __devexit davinci_vc_remove(struct platform_device *pdev)
static struct platform_driver davinci_vc_driver = ;
static int __init davinci_vc_init(void)
module_init(davinci_vc_init);
static void __exit davinci_vc_exit(void)
module_exit(davinci_vc_exit);
MODULE_AUTHOR("Miguel Aguilar");
MODULE_DESCRIPTION("Texas Instruments DaVinci Voice Codec Core Interface");
MODULE_LICENSE("GPL");
