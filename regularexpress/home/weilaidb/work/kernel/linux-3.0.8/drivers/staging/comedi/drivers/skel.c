#define SKEL_SIZE 0
#define SKEL_START_AI_CONV	0
#define SKEL_AI_READ		0
struct skel_board ;
static const struct skel_board skel_boards[] = ;
#define PCI_VENDOR_ID_SKEL 0xdafe
static DEFINE_PCI_DEVICE_TABLE(skel_pci_table) = ;
MODULE_DEVICE_TABLE(pci, skel_pci_table);
#define thisboard ((const struct skel_board *)dev->board_ptr)
struct skel_private ;
#define devpriv ((struct skel_private *)dev->private)
static int skel_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int skel_detach(struct comedi_device *dev);
static struct comedi_driver driver_skel = ;
static int skel_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int skel_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int skel_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int skel_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int skel_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int skel_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd);
static int skel_ns_to_timer(unsigned int *ns, int round);
static int skel_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int skel_detach(struct comedi_device *dev)
static int skel_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int skel_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int skel_ns_to_timer(unsigned int *ns, int round)
static int skel_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int skel_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int skel_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int skel_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __devinit driver_skel_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_skel_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_skel_pci_driver = ;
static int __init driver_skel_init_module(void)
static void __exit driver_skel_cleanup_module(void)
module_init(driver_skel_init_module);
module_exit(driver_skel_cleanup_module);
static int __init driver_skel_init_module(void)
static void __exit driver_skel_cleanup_module(void)
module_init(driver_skel_init_module);
module_exit(driver_skel_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
