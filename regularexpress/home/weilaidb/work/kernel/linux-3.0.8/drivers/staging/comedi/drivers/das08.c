#define DRV_NAME "das08"
#define PCI_VENDOR_ID_COMPUTERBOARDS 0x1307
#define PCI_DEVICE_ID_PCIDAS08 0x29
#define PCIDAS08_SIZE 0x54
#define INTCSR               0x4c
#define   INTR1_ENABLE         0x1
#define   INTR1_HIGH_POLARITY  0x2
#define   PCI_INTR_ENABLE      0x40
#define   INTR1_EDGE_TRIG      0x100
#define CNTRL                0x50
#define   CNTRL_DIR            0x2
#define   CNTRL_INTR           0x4
#define DAS08_LSB		0
#define DAS08_MSB		1
#define DAS08_TRIG_12BIT	1
#define DAS08_STATUS		2
#define   DAS08_EOC			(1<<7)
#define   DAS08_IRQ			(1<<3)
#define   DAS08_IP(x)			(((x)>>4)&0x7)
#define DAS08_CONTROL		2
#define   DAS08_MUX_MASK	0x7
#define   DAS08_MUX(x)		((x) & DAS08_MUX_MASK)
#define   DAS08_INTE			(1<<3)
#define   DAS08_DO_MASK		0xf0
#define   DAS08_OP(x)		(((x) << 4) & DAS08_DO_MASK)
#define DAS08JR_DIO		3
#define DAS08JR_AO_LSB(x)	((x) ? 6 : 4)
#define DAS08JR_AO_MSB(x)	((x) ? 7 : 5)
#define DAS08AO_GAIN_CONTROL	3
#define DAS08AO_GAIN_STATUS	3
#define DAS08AO_AO_LSB(x)	((x) ? 0xa : 8)
#define DAS08AO_AO_MSB(x)	((x) ? 0xb : 9)
#define DAS08AO_AO_UPDATE	8
static int das08_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das08_di_rbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das08_do_wbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das08jr_di_rbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das08jr_do_wbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das08jr_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das08ao_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static void i8254_set_mode_low(unsigned int base, int channel,
unsigned int mode);
static const struct comedi_lrange range_das08_pgl = ;
static const struct comedi_lrange range_das08_pgh = ;
static const struct comedi_lrange range_das08_pgm = ;
static const struct comedi_lrange *const das08_ai_lranges[] = ;
static const int das08_pgh_gainlist[] = ;
static const int das08_pgl_gainlist[] = ;
static const int das08_pgm_gainlist[] = ;
static const int *const das08_gainlists[] = ;
static const struct das08_board_struct das08_boards[] = ;
struct das08_board_struct das08_cs_boards[NUM_DAS08_CS_BOARDS] = ;
static DEFINE_PCI_DEVICE_TABLE(das08_pci_table) = ;
MODULE_DEVICE_TABLE(pci, das08_pci_table);
#define devpriv ((struct das08_private_struct *)dev->private)
#define thisboard ((const struct das08_board_struct *)dev->board_ptr)
#define TIMEOUT 100000
static int das08_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08_di_rbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08_do_wbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08jr_di_rbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08jr_do_wbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08jr_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08ao_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static unsigned int i8254_read_channel_low(unsigned int base, int chan)
static void i8254_write_channel_low(unsigned int base, int chan,
unsigned int value)
static unsigned int i8254_read_channel(struct i8254_struct *st, int channel)
static void i8254_write_channel(struct i8254_struct *st, int channel,
unsigned int value)
static void i8254_initialize(struct i8254_struct *st)
static void i8254_set_mode_low(unsigned int base, int channel,
unsigned int mode)
static void i8254_set_mode(struct i8254_struct *st, int channel,
unsigned int mode)
static unsigned int i8254_read_status_low(unsigned int base, int channel)
static unsigned int i8254_read_status(struct i8254_struct *st, int channel)
static int das08_counter_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08_counter_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08_counter_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das08_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static struct comedi_driver driver_das08 = ;
int das08_common_attach(struct comedi_device *dev, unsigned long iobase)
EXPORT_SYMBOL_GPL(das08_common_attach);
static int das08_attach(struct comedi_device *dev, struct comedi_devconfig *it)
int das08_common_detach(struct comedi_device *dev)
EXPORT_SYMBOL_GPL(das08_common_detach);
static int __devinit driver_das08_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_das08_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_das08_pci_driver = ;
static int __init driver_das08_init_module(void)
static void __exit driver_das08_cleanup_module(void)
module_init(driver_das08_init_module);
module_exit(driver_das08_cleanup_module);
static int __init driver_das08_init_module(void)
static void __exit driver_das08_cleanup_module(void)
module_init(driver_das08_init_module);
module_exit(driver_das08_cleanup_module);
EXPORT_SYMBOL_GPL(das08_cs_boards);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
