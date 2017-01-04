#define AO_VALUE_OFFSET			0x00
#define	AO_CHAN_OFFSET			0x0c
#define	AO_STATUS_OFFSET		0x10
#define AO_CONTROL_OFFSET		0x10
#define	DIO_PORT0_DIR_OFFSET	0x20
#define	DIO_PORT0_DATA_OFFSET	0x24
#define	DIO_PORT1_DIR_OFFSET	0x28
#define	DIO_PORT1_DATA_OFFSET	0x2c
#define	MISC_STATUS_OFFSET		0x14
#define	MISC_CONTROL_OFFSET		0x14
struct ni_670x_board ;
static const struct ni_670x_board ni_670x_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(ni_670x_pci_table) = ;
MODULE_DEVICE_TABLE(pci, ni_670x_pci_table);
#define thisboard ((struct ni_670x_board *)dev->board_ptr)
struct ni_670x_private ;
#define devpriv ((struct ni_670x_private *)dev->private)
#define n_ni_670x_boards ARRAY_SIZE(ni_670x_boards)
static int ni_670x_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int ni_670x_detach(struct comedi_device *dev);
static struct comedi_driver driver_ni_670x = ;
static int __devinit driver_ni_670x_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_ni_670x_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_ni_670x_pci_driver = ;
static int __init driver_ni_670x_init_module(void)
static void __exit driver_ni_670x_cleanup_module(void)
module_init(driver_ni_670x_init_module);
module_exit(driver_ni_670x_cleanup_module);
static struct comedi_lrange range_0_20mA = ;
static int ni_670x_find_device(struct comedi_device *dev, int bus, int slot);
static int ni_670x_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_670x_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_670x_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_670x_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int ni_670x_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int ni_670x_detach(struct comedi_device *dev)
static int ni_670x_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_670x_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_670x_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_670x_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_670x_find_device(struct comedi_device *dev, int bus, int slot)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
