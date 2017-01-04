#define TWL4030_CODEC_CELLS	2
static struct platform_device *twl4030_codec_dev;
struct twl4030_codec_resource ;
struct twl4030_codec ;
static int twl4030_codec_set_resource(enum twl4030_codec_res id, int enable)
static inline int twl4030_codec_get_resource(enum twl4030_codec_res id)
int twl4030_codec_enable_resource(enum twl4030_codec_res id)
EXPORT_SYMBOL_GPL(twl4030_codec_enable_resource);
int twl4030_codec_disable_resource(unsigned id)
EXPORT_SYMBOL_GPL(twl4030_codec_disable_resource);
unsigned int twl4030_codec_get_mclk(void)
EXPORT_SYMBOL_GPL(twl4030_codec_get_mclk);
static int __devinit twl4030_codec_probe(struct platform_device *pdev)
static int __devexit twl4030_codec_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:twl4030-audio");
static struct platform_driver twl4030_codec_driver = ;
static int __devinit twl4030_codec_init(void)
module_init(twl4030_codec_init);
static void __devexit twl4030_codec_exit(void)
module_exit(twl4030_codec_exit);
MODULE_AUTHOR("Peter Ujfalusi <peter.ujfalusi@ti.com>");
MODULE_LICENSE("GPL");
