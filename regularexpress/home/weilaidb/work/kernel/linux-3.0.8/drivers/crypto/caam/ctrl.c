static int caam_remove(struct platform_device *pdev)
static int caam_probe(struct platform_device *pdev)
static struct of_device_id caam_match[] = ;
MODULE_DEVICE_TABLE(of, caam_match);
static struct platform_driver caam_driver = ;
static int __init caam_base_init(void)
static void __exit caam_base_exit(void)
module_init(caam_base_init);
module_exit(caam_base_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("FSL CAAM request backend");
MODULE_AUTHOR("Freescale Semiconductor - NMG/STC");
