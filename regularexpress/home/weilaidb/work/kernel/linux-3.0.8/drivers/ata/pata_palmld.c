#define DRV_NAME "pata_palmld"
static struct gpio palmld_hdd_gpios[] = ;
static struct scsi_host_template palmld_sht = ;
static struct ata_port_operations palmld_port_ops = ;
static __devinit int palmld_pata_probe(struct platform_device *pdev)
static __devexit int palmld_pata_remove(struct platform_device *dev)
static struct platform_driver palmld_pata_platform_driver = ;
static int __init palmld_pata_init(void)
static void __exit palmld_pata_exit(void)
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("PalmLD PATA driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
module_init(palmld_pata_init);
module_exit(palmld_pata_exit);
