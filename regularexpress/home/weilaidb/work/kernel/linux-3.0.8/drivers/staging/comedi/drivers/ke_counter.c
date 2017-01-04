#define CNT_DRIVER_NAME         "ke_counter"
#define PCI_VENDOR_ID_KOLTER    0x1001
#define CNT_CARD_DEVICE_ID      0x0014
static int cnt_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int cnt_detach(struct comedi_device *dev);
static DEFINE_PCI_DEVICE_TABLE(cnt_pci_table) = ;
MODULE_DEVICE_TABLE(pci, cnt_pci_table);
struct cnt_board_struct ;
static const struct cnt_board_struct cnt_boards[] = ;
#define cnt_board_nbr (sizeof(cnt_boards)/sizeof(struct cnt_board_struct))
struct cnt_device_private ;
#define devpriv ((struct cnt_device_private *)dev->private)
static struct comedi_driver cnt_driver = ;
static int __devinit cnt_driver_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit cnt_driver_pci_remove(struct pci_dev *dev)
static struct pci_driver cnt_driver_pci_driver = ;
static int __init cnt_driver_init_module(void)
static void __exit cnt_driver_cleanup_module(void)
module_init(cnt_driver_init_module);
module_exit(cnt_driver_cleanup_module);
static int cnt_winsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int cnt_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int cnt_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int cnt_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
