static DEFINE_MUTEX(ssp_lock);
static LIST_HEAD(ssp_list);
struct ssp_device *pxa_ssp_request(int port, const char *label)
EXPORT_SYMBOL(pxa_ssp_request);
void pxa_ssp_free(struct ssp_device *ssp)
EXPORT_SYMBOL(pxa_ssp_free);
static int __devinit pxa_ssp_probe(struct platform_device *pdev)
static int __devexit pxa_ssp_remove(struct platform_device *pdev)
static const struct platform_device_id ssp_id_table[] = ;
static struct platform_driver pxa_ssp_driver = ;
static int __init pxa_ssp_init(void)
static void __exit pxa_ssp_exit(void)
arch_initcall(pxa_ssp_init);
module_exit(pxa_ssp_exit);
MODULE_DESCRIPTION("PXA SSP driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
