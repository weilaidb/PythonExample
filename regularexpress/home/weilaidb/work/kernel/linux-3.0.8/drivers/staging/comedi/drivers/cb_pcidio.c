#define PCI_VENDOR_ID_CB	0x1307
struct pcidio_board ;
static const struct pcidio_board pcidio_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(pcidio_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pcidio_pci_table);
#define thisboard ((const struct pcidio_board *)dev->board_ptr)
struct pcidio_private ;
#define devpriv ((struct pcidio_private *)dev->private)
static int pcidio_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcidio_detach(struct comedi_device *dev);
static struct comedi_driver driver_cb_pcidio = ;
static int pcidio_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcidio_detach(struct comedi_device *dev)
static int __devinit driver_cb_pcidio_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_cb_pcidio_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_cb_pcidio_pci_driver = ;
static int __init driver_cb_pcidio_init_module(void)
static void __exit driver_cb_pcidio_cleanup_module(void)
module_init(driver_cb_pcidio_init_module);
module_exit(driver_cb_pcidio_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
