MODULE_AUTHOR("Richard Hirst <richard@sleepie.demon.co.uk>");
MODULE_DESCRIPTION("BVME6000 NCR53C710 driver");
MODULE_LICENSE("GPL");
static struct scsi_host_template bvme6000_scsi_driver_template = ;
static struct platform_device *bvme6000_scsi_device;
static __devinit int
bvme6000_probe(struct platform_device *dev)
static __devexit int
bvme6000_device_remove(struct platform_device *dev)
static struct platform_driver bvme6000_scsi_driver = ;
static int __init bvme6000_scsi_init(void)
static void __exit bvme6000_scsi_exit(void)
module_init(bvme6000_scsi_init);
module_exit(bvme6000_scsi_exit);
