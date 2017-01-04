#define AUTOSENSE
#define NCR5380_read(reg)		inb(port + reg)
#define NCR5380_write(reg, value)	outb(value, port + reg)
#define NCR5380_implementation_fields	unsigned int port
#define NCR5380_local_declare()		NCR5380_implementation_fields
#define NCR5380_setup(instance)		port = instance->io_port
#define DMX3191D_DRIVER_NAME	"dmx3191d"
#define DMX3191D_REGION_LEN	8
static struct scsi_host_template dmx3191d_driver_template = ;
static int __devinit dmx3191d_probe_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit dmx3191d_remove_one(struct pci_dev *pdev)
static struct pci_device_id dmx3191d_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, dmx3191d_pci_tbl);
static struct pci_driver dmx3191d_pci_driver = ;
static int __init dmx3191d_init(void)
static void __exit dmx3191d_exit(void)
module_init(dmx3191d_init);
module_exit(dmx3191d_exit);
MODULE_AUTHOR("Massimo Piccioni <dafastidio@libero.it>");
MODULE_DESCRIPTION("Domex DMX3191D SCSI driver");
MODULE_LICENSE("GPL");
