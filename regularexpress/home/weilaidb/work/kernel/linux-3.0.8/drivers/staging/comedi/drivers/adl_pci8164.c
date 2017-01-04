#define PCI8164_AXIS_X  0x00
#define PCI8164_AXIS_Y  0x08
#define PCI8164_AXIS_Z  0x10
#define PCI8164_AXIS_U  0x18
#define PCI8164_MSTS	0x00
#define PCI8164_SSTS    0x02
#define PCI8164_BUF0    0x04
#define PCI8164_BUF1    0x06
#define PCI8164_CMD     0x00
#define PCI8164_OTP     0x02
#define PCI_DEVICE_ID_PCI8164 0x8164
static DEFINE_PCI_DEVICE_TABLE(adl_pci8164_pci_table) = ;
MODULE_DEVICE_TABLE(pci, adl_pci8164_pci_table);
struct adl_pci8164_private ;
#define devpriv ((struct adl_pci8164_private *)dev->private)
static int adl_pci8164_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int adl_pci8164_detach(struct comedi_device *dev);
static struct comedi_driver driver_adl_pci8164 = ;
static int adl_pci8164_insn_read_msts(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci8164_insn_read_ssts(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci8164_insn_read_buf0(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci8164_insn_read_buf1(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci8164_insn_write_cmd(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci8164_insn_write_otp(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci8164_insn_write_buf0(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci8164_insn_write_buf1(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci8164_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int adl_pci8164_detach(struct comedi_device *dev)
static void adl_pci8164_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data,
char *action, unsigned short offset)
static int adl_pci8164_insn_read_msts(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int adl_pci8164_insn_read_ssts(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int adl_pci8164_insn_read_buf0(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int adl_pci8164_insn_read_buf1(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static void adl_pci8164_insn_out(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data,
char *action, unsigned short offset)
static int adl_pci8164_insn_write_cmd(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int adl_pci8164_insn_write_otp(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int adl_pci8164_insn_write_buf0(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int adl_pci8164_insn_write_buf1(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int __devinit driver_adl_pci8164_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_adl_pci8164_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_adl_pci8164_pci_driver = ;
static int __init driver_adl_pci8164_init_module(void)
static void __exit driver_adl_pci8164_cleanup_module(void)
module_init(driver_adl_pci8164_init_module);
module_exit(driver_adl_pci8164_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
