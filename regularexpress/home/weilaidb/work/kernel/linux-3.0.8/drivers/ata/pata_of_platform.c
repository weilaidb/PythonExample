static int __devinit pata_of_platform_probe(struct platform_device *ofdev)
static int __devexit pata_of_platform_remove(struct platform_device *ofdev)
static struct of_device_id pata_of_platform_match[] = ;
MODULE_DEVICE_TABLE(of, pata_of_platform_match);
static struct platform_driver pata_of_platform_driver = ;
static int __init pata_of_platform_init(void)
module_init(pata_of_platform_init);
static void __exit pata_of_platform_exit(void)
module_exit(pata_of_platform_exit);
MODULE_DESCRIPTION("OF-platform PATA driver");
MODULE_AUTHOR("Anton Vorontsov <avorontsov@ru.mvista.com>");
MODULE_LICENSE("GPL");
