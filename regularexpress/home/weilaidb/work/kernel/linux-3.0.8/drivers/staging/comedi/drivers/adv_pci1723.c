#define PCI_VENDOR_ID_ADVANTECH		0x13fe
#define TYPE_PCI1723 0
#define IORANGE_1723  0x2A
#define PCI1723_DA(N)   ((N)<<1)
#define PCI1723_SYN_SET  0x12
#define PCI1723_ALL_CHNNELE_SYN_STROBE  0x12
#define PCI1723_RANGE_CALIBRATION_MODE 0x14
#define PCI1723_RANGE_CALIBRATION_STATUS 0x14
#define PCI1723_CONTROL_CMD_CALIBRATION_FUN 0x16
#define PCI1723_STATUS_CMD_CALIBRATION_FUN 0x16
#define PCI1723_CALIBRATION_PARA_STROBE 0x18
#define PCI1723_DIGITAL_IO_PORT_SET 0x1A
#define PCI1723_DIGITAL_IO_PORT_MODE 0x1A
#define PCI1723_WRITE_DIGITAL_OUTPUT_CMD 0x1C
#define PCI1723_READ_DIGITAL_INPUT_DATA 0x1C
#define PCI1723_WRITE_CAL_CMD 0x1E
#define PCI1723_READ_CAL_STATUS 0x1E
#define PCI1723_SYN_STROBE 0x20
#define PCI1723_RESET_ALL_CHN_STROBE 0x22
#define PCI1723_RESET_CAL_CONTROL_STROBE 0x24
#define PCI1723_CHANGE_CHA_OUTPUT_TYPE_STROBE 0x26
#define PCI1723_SELECT_CALIBRATION 0x28
static const struct comedi_lrange range_pci1723 = ;
struct pci1723_board ;
static const struct pci1723_board boardtypes[] = ;
static DEFINE_PCI_DEVICE_TABLE(pci1723_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci1723_pci_table);
static int pci1723_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci1723_detach(struct comedi_device *dev);
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pci1723_board))
static struct comedi_driver driver_pci1723 = ;
struct pci1723_private ;
#define devpriv ((struct pci1723_private *)dev->private)
#define this_board boardtypes
static int pci1723_reset(struct comedi_device *dev)
static int pci1723_insn_read_ao(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1723_ao_write_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1723_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1723_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1723_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pci1723_detach(struct comedi_device *dev)
static int __devinit driver_pci1723_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_pci1723_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_pci1723_pci_driver = ;
static int __init driver_pci1723_init_module(void)
static void __exit driver_pci1723_cleanup_module(void)
module_init(driver_pci1723_init_module);
module_exit(driver_pci1723_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
