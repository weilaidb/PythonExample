#define PCI_VENDOR_ID_JR3 0x1762
#define PCI_DEVICE_ID_JR3_1_CHANNEL 0x3111
#define PCI_DEVICE_ID_JR3_1_CHANNEL_NEW 0x1111
#define PCI_DEVICE_ID_JR3_2_CHANNEL 0x3112
#define PCI_DEVICE_ID_JR3_3_CHANNEL 0x3113
#define PCI_DEVICE_ID_JR3_4_CHANNEL 0x3114
static int jr3_pci_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int jr3_pci_detach(struct comedi_device *dev);
static struct comedi_driver driver_jr3_pci = ;
static DEFINE_PCI_DEVICE_TABLE(jr3_pci_pci_table) = ;
MODULE_DEVICE_TABLE(pci, jr3_pci_pci_table);
struct jr3_pci_dev_private ;
struct poll_delay_t ;
struct jr3_pci_subdev_private ;
static int comedi_load_firmware(struct comedi_device *dev, char *name,
int (*cb)(struct comedi_device *dev,
const u8 *data, size_t size))
static struct poll_delay_t poll_delay_min_max(int min, int max)
static int is_complete(volatile struct jr3_channel *channel)
struct transform_t ;
static void set_transforms(volatile struct jr3_channel *channel,
struct transform_t transf, short num)
static void use_transform(volatile struct jr3_channel *channel,
short transf_num)
static void use_offset(volatile struct jr3_channel *channel, short offset_num)
static void set_offset(volatile struct jr3_channel *channel)
struct six_axis_t ;
static void set_full_scales(volatile struct jr3_channel *channel,
struct six_axis_t full_scale)
static struct six_axis_t get_min_full_scales(volatile struct jr3_channel
*channel)
static struct six_axis_t get_max_full_scales(volatile struct jr3_channel
*channel)
static int jr3_pci_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int jr3_pci_open(struct comedi_device *dev)
int read_idm_word(const u8 * data, size_t size, int *pos, unsigned int *val)
static int jr3_download_firmware(struct comedi_device *dev, const u8 * data,
size_t size)
static struct poll_delay_t jr3_pci_poll_subdevice(struct comedi_subdevice *s)
static void jr3_pci_poll_dev(unsigned long data)
static int jr3_pci_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
MODULE_FIRMWARE("comedi/jr3pci.idm");
static int jr3_pci_detach(struct comedi_device *dev)
static int __devinit driver_jr3_pci_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_jr3_pci_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_jr3_pci_pci_driver = ;
static int __init driver_jr3_pci_init_module(void)
static void __exit driver_jr3_pci_cleanup_module(void)
module_init(driver_jr3_pci_init_module);
module_exit(driver_jr3_pci_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
