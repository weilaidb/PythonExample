enum parport_pc_pci_cards ;
struct parport_pc_pci ;
static int __devinit netmos_parallel_init(struct pci_dev *dev, struct parport_pc_pci *par, int autoirq, int autodma)
static struct parport_pc_pci cards[] __devinitdata = ;
static struct pci_device_id parport_serial_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci,parport_serial_pci_tbl);
static struct pciserial_board pci_parport_serial_boards[] __devinitdata = ;
struct parport_serial_private ;
static int __devinit serial_register (struct pci_dev *dev,
const struct pci_device_id *id)
static int __devinit parport_register (struct pci_dev *dev,
const struct pci_device_id *id)
static int __devinit parport_serial_pci_probe (struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit parport_serial_pci_remove (struct pci_dev *dev)
static int parport_serial_pci_suspend(struct pci_dev *dev, pm_message_t state)
static int parport_serial_pci_resume(struct pci_dev *dev)
static struct pci_driver parport_serial_pci_driver = ;
static int __init parport_serial_init (void)
static void __exit parport_serial_exit (void)
MODULE_AUTHOR("Tim Waugh <twaugh@redhat.com>");
MODULE_DESCRIPTION("Driver for common parallel+serial multi-I/O PCI cards");
MODULE_LICENSE("GPL");
module_init(parport_serial_init);
module_exit(parport_serial_exit);
