MODULE_AUTHOR("Richard Hirst");
MODULE_DESCRIPTION("Bluefish/Zalon 720 SCSI Driver");
MODULE_LICENSE("GPL");
#define GSC_SCSI_ZALON_OFFSET 0x800
#define IO_MODULE_EIM		(1*4)
#define IO_MODULE_DC_ADATA	(2*4)
#define IO_MODULE_II_CDATA	(3*4)
#define IO_MODULE_IO_COMMAND	(12*4)
#define IO_MODULE_IO_STATUS	(13*4)
#define IOSTATUS_RY		0x40
#define IOSTATUS_FE		0x80
#define IOIIDATA_SMINT5L	0x40000000
#define IOIIDATA_MINT5EN	0x20000000
#define IOIIDATA_PACKEN		0x10000000
#define IOIIDATA_PREFETCHEN	0x08000000
#define IOIIDATA_IOII		0x00000020
#define CMD_RESET		5
static struct ncr_chip zalon720_chip __initdata = ;
static struct scsi_host_template zalon7xx_template = ;
static int __init
zalon_probe(struct parisc_device *dev)
static struct parisc_device_id zalon_tbl[] = ;
MODULE_DEVICE_TABLE(parisc, zalon_tbl);
static int __exit zalon_remove(struct parisc_device *dev)
static struct parisc_driver zalon_driver = ;
static int __init zalon7xx_init(void)
static void __exit zalon7xx_exit(void)
module_init(zalon7xx_init);
module_exit(zalon7xx_exit);
