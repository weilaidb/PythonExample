MODULE_AUTHOR("Thomas Bogendörfer");
MODULE_DESCRIPTION("SNI RM 53c710 SCSI Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:snirm_53c710");
#define SNIRM710_CLOCK	32
static struct scsi_host_template snirm710_template = ;
static int __devinit snirm710_probe(struct platform_device *dev)
static int __exit snirm710_driver_remove(struct platform_device *dev)
static struct platform_driver snirm710_driver = ;
static int __init snirm710_init(void)
static void __exit snirm710_exit(void)
module_init(snirm710_init);
module_exit(snirm710_exit);
