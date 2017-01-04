#define PCI20000_ID			0x1d
#define PCI20341_ID			0x77
#define PCI20006_ID			0xe3
#define PCI20xxx_EMPTY_ID		0xff
#define PCI20000_OFFSET			0x100
#define PCI20000_MODULES		3
#define PCI20000_DIO_0			0x80
#define PCI20000_DIO_1			0x81
#define PCI20000_DIO_2			0xc0
#define PCI20000_DIO_3			0xc1
#define PCI20000_DIO_CONTROL_01		0x83
#define PCI20000_DIO_CONTROL_23		0xc3
#define PCI20000_DIO_BUFFER		0x82
#define PCI20000_DIO_EOC		0xef
#define PCI20000_DIO_OOC		0xfd
#define PCI20000_DIO_EIC		0x90
#define PCI20000_DIO_OIC		0x82
#define DIO_CAND			0x12
#define DIO_BE				0x01
#define DIO_BO				0x04
#define DIO_BI				0x05
#define DIO_PS_0			0x00
#define DIO_PS_1			0x01
#define DIO_PS_2			0x04
#define DIO_PS_3			0x05
#define PCI20006_LCHAN0			0x0d
#define PCI20006_STROBE0		0x0b
#define PCI20006_LCHAN1			0x15
#define PCI20006_STROBE1		0x13
#define PCI20341_INIT			0x04
#define PCI20341_REPMODE		0x00
#define PCI20341_PACER			0x00
#define PCI20341_CHAN_NR		0x04
#define PCI20341_CONFIG_REG		0x10
#define PCI20341_MOD_STATUS		0x01
#define PCI20341_OPT_REG		0x11
#define PCI20341_SET_TIME_REG		0x15
#define PCI20341_LCHAN_ADDR_REG		0x13
#define PCI20341_CHAN_LIST		0x80
#define PCI20341_CC_RESET		0x1b
#define PCI20341_CHAN_RESET		0x19
#define PCI20341_SOFT_PACER		0x04
#define PCI20341_STATUS_REG		0x12
#define PCI20341_LDATA			0x02
#define PCI20341_DAISY_CHAIN		0x20
#define PCI20341_MUX			0x04
#define PCI20341_SCANLIST		0x80
union pci20xxx_subdev_private ;
struct pci20xxx_private ;
#define devpriv ((struct pci20xxx_private *)dev->private)
#define CHAN (CR_CHAN(it->chanlist[0]))
static int pci20xxx_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci20xxx_detach(struct comedi_device *dev);
static struct comedi_driver driver_pci20xxx = ;
static int pci20006_init(struct comedi_device *dev, struct comedi_subdevice *s,
int opt0, int opt1);
static int pci20341_init(struct comedi_device *dev, struct comedi_subdevice *s,
int opt0, int opt1);
static int pci20xxx_dio_init(struct comedi_device *dev,
struct comedi_subdevice *s);
static int pci20xxx_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pci20xxx_detach(struct comedi_device *dev)
static int pci20006_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pci20006_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static const struct comedi_lrange *pci20006_range_list[] = ;
static int pci20006_init(struct comedi_device *dev, struct comedi_subdevice *s,
int opt0, int opt1)
static int pci20006_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci20006_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci20341_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static const int pci20341_timebase[] = ;
static const int pci20341_settling_time[] = ;
static const struct comedi_lrange range_bipolar0_5 = ;
static const struct comedi_lrange range_bipolar0_05 = ;
static const struct comedi_lrange range_bipolar0_025 = ;
static const struct comedi_lrange *const pci20341_ranges[] = ;
static int pci20341_init(struct comedi_device *dev, struct comedi_subdevice *s,
int opt0, int opt1)
static int pci20341_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void pci20xxx_dio_config(struct comedi_device *dev,
struct comedi_subdevice *s);
static int pci20xxx_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pci20xxx_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int pci20xxx_dio_init(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci20xxx_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int pci20xxx_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void pci20xxx_dio_config(struct comedi_device *dev,
struct comedi_subdevice *s)
static int __init driver_pci20xxx_init_module(void)
static void __exit driver_pci20xxx_cleanup_module(void)
module_init(driver_pci20xxx_init_module);
module_exit(driver_pci20xxx_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
