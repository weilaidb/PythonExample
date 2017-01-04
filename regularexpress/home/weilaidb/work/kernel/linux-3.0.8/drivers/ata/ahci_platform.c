static struct scsi_host_template ahci_platform_sht = ;
static int __init ahci_probe(struct platform_device *pdev)
static int __devexit ahci_remove(struct platform_device *pdev)
static struct platform_driver ahci_driver = ;
static int __init ahci_init(void)
module_init(ahci_init);
static void __exit ahci_exit(void)
module_exit(ahci_exit);
MODULE_DESCRIPTION("AHCI SATA platform driver");
MODULE_AUTHOR("Anton Vorontsov <avorontsov@ru.mvista.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ahci");
