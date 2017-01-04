static DEFINE_SPINLOCK(user_lock);
static LIST_HEAD(ssc_list);
struct ssc_device *ssc_request(unsigned int ssc_num)
EXPORT_SYMBOL(ssc_request);
void ssc_free(struct ssc_device *ssc)
EXPORT_SYMBOL(ssc_free);
static int __init ssc_probe(struct platform_device *pdev)
static int __devexit ssc_remove(struct platform_device *pdev)
static struct platform_driver ssc_driver = ;
static int __init ssc_init(void)
module_init(ssc_init);
static void __exit ssc_exit(void)
module_exit(ssc_exit);
MODULE_AUTHOR("Hans-Christian Egtvedt <hcegtvedt@atmel.com>");
MODULE_DESCRIPTION("SSC driver for Atmel AVR32 and AT91");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ssc");
