MODULE_AUTHOR("Kars de Jong <jongk@linux-m68k.org>");
MODULE_DESCRIPTION("MVME16x NCR53C710 driver");
MODULE_LICENSE("GPL");
static struct scsi_host_template mvme16x_scsi_driver_template = ;
static struct platform_device *mvme16x_scsi_device;
static __devinit int
mvme16x_probe(struct platform_device *dev)
static __devexit int
mvme16x_device_remove(struct platform_device *dev)
static struct platform_driver mvme16x_scsi_driver = ;
static int __init mvme16x_scsi_init(void)
static void __exit mvme16x_scsi_exit(void)
module_init(mvme16x_scsi_init);
module_exit(mvme16x_scsi_exit);
