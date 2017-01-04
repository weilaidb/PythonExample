MODULE_AUTHOR("James Bottomley");
MODULE_DESCRIPTION("lasi700 SCSI Driver");
MODULE_LICENSE("GPL");
#define LASI_700_SVERSION 0x00071
#define LASI_710_SVERSION 0x00082
#define LASI700_ID_TABLE
#define LASI710_ID_TABLE
#define LASI700_CLOCK	25
#define LASI710_CLOCK	40
#define LASI_SCSI_CORE_OFFSET 0x100
static struct parisc_device_id lasi700_ids[] = ;
static struct scsi_host_template lasi700_template = ;
MODULE_DEVICE_TABLE(parisc, lasi700_ids);
static int __init
lasi700_probe(struct parisc_device *dev)
static int __exit
lasi700_driver_remove(struct parisc_device *dev)
static struct parisc_driver lasi700_driver = ;
static int __init
lasi700_init(void)
static void __exit
lasi700_exit(void)
module_init(lasi700_init);
module_exit(lasi700_exit);
