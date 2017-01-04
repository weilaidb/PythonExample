#if defined(CONFIG_APCI_1710) || defined(CONFIG_APCI_3200) || defined(CONFIG_APCI_3300)
#define ADDIDATA_DRIVER_NAME	"addi_common"
#define devpriv ((struct addi_private *)dev->private)
#define this_board ((const struct addi_board *)dev->board_ptr)
#if defined(CONFIG_APCI_1710) || defined(CONFIG_APCI_3200) || defined(CONFIG_APCI_3300)
void fpu_begin(void)
void fpu_end(void)
#if (defined (CONFIG_APCI_3120) || defined (CONFIG_APCI_3001))
#if (defined (CONFIG_APCI_3200) || defined (CONFIG_APCI_3300))
#define COMEDI_SUBD_TTLIO   11
static DEFINE_PCI_DEVICE_TABLE(addi_apci_tbl) = ;
MODULE_DEVICE_TABLE(pci, addi_apci_tbl);
static const struct addi_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct addi_board))
static struct comedi_driver driver_addi = ;
static int __devinit driver_addi_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_addi_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_addi_pci_driver = ;
static int __init driver_addi_init_module(void)
static void __exit driver_addi_cleanup_module(void)
module_init(driver_addi_init_module);
module_exit(driver_addi_cleanup_module);
static int i_ADDI_Attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int i_ADDI_Detach(struct comedi_device *dev)
static int i_ADDI_Reset(struct comedi_device *dev)
static irqreturn_t v_ADDI_Interrupt(int irq, void *d)
static int i_ADDIDATA_InsnReadEeprom(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
