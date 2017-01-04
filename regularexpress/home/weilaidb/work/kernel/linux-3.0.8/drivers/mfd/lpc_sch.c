#define SMBASE		0x40
#define SMBUS_IO_SIZE	64
#define GPIOBASE	0x44
#define GPIO_IO_SIZE	64
static struct resource smbus_sch_resource = ;
static struct resource gpio_sch_resource = ;
static struct mfd_cell lpc_sch_cells[] = ;
static struct pci_device_id lpc_sch_ids[] = ;
MODULE_DEVICE_TABLE(pci, lpc_sch_ids);
static int __devinit lpc_sch_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit lpc_sch_remove(struct pci_dev *dev)
static struct pci_driver lpc_sch_driver = ;
static int __init lpc_sch_init(void)
static void __exit lpc_sch_exit(void)
module_init(lpc_sch_init);
module_exit(lpc_sch_exit);
MODULE_AUTHOR("Denis Turischev <denis@compulab.co.il>");
MODULE_DESCRIPTION("LPC interface for Intel Poulsbo SCH");
MODULE_LICENSE("GPL");
