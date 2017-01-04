#undef PCI_DIO_EXTDEBUG
#undef DPRINTK
#define DPRINTK(fmt, args...) printk(fmt, ## args)
#define DPRINTK(fmt, args...)
#define PCI_VENDOR_ID_ADVANTECH		0x13fe
enum hw_cards_id ;
enum hw_io_access ;
#define MAX_DI_SUBDEVS	2
#define MAX_DO_SUBDEVS	2
#define MAX_DIO_SUBDEVG	2
#define MAX_8254_SUBDEVS   1
#define SIZE_8254	   4
#define SIZE_8255	   4
#define PCIDIO_MAINREG	   2
#define PCI1730_IDI	   0
#define PCI1730_IDO	   0
#define PCI1730_DI	   2
#define PCI1730_DO	   2
#define PCI1733_IDI	   0
#define	PCI1730_3_INT_EN	0x08
#define	PCI1730_3_INT_RF	0x0c
#define	PCI1730_3_INT_CLR	0x10
#define PCI1734_IDO	   0
#define PCI173x_BOARDID	   4
#define PCI1735_DI	   0
#define PCI1735_DO	   0
#define PCI1735_C8254	   4
#define PCI1735_BOARDID	   8
#define PCI1736_IDI        0
#define PCI1736_IDO        0
#define PCI1736_3_INT_EN        0x08
#define PCI1736_3_INT_RF        0x0c
#define PCI1736_3_INT_CLR       0x10
#define PCI1736_BOARDID    4
#define PCI1736_MAINREG    0
#define PCI1750_IDI	   0
#define PCI1750_IDO	   0
#define PCI1750_ICR	  32
#define PCI1750_ISR	  32
#define PCI1751_DIO	   0
#define PCI1751_CNT	  24
#define PCI1751_ICR	  32
#define PCI1751_ISR	  32
#define PCI1753_DIO	   0
#define PCI1753_ICR0	  16
#define PCI1753_ICR1	  17
#define PCI1753_ICR2	  18
#define PCI1753_ICR3	  19
#define PCI1753E_DIO	  32
#define PCI1753E_ICR0	  48
#define PCI1753E_ICR1	  49
#define PCI1753E_ICR2	  50
#define PCI1753E_ICR3	  51
#define PCI1752_IDO	   0
#define PCI1752_IDO2	   4
#define PCI1754_IDI	   0
#define PCI1754_IDI2	   4
#define PCI1756_IDI	   0
#define PCI1756_IDO	   4
#define PCI1754_6_ICR0	0x08
#define PCI1754_6_ICR1	0x0a
#define PCI1754_ICR2	0x0c
#define PCI1754_ICR3	0x0e
#define PCI1752_6_CFC	0x12
#define PCI175x_BOARDID	0x10
#define PCI1762_RO	   0
#define PCI1762_IDI	   2
#define PCI1762_BOARDID	   4
#define PCI1762_ICR	   6
#define PCI1762_ISR	   6
#define OMB0		0x0c
#define OMB1		0x0d
#define OMB2		0x0e
#define OMB3		0x0f
#define IMB0		0x1c
#define IMB1		0x1d
#define IMB2		0x1e
#define IMB3		0x1f
#define INTCSR0		0x38
#define INTCSR1		0x39
#define INTCSR2		0x3a
#define INTCSR3		0x3b
#define CMD_ClearIMB2		0x00
#define CMD_SetRelaysOutput	0x01
#define CMD_GetRelaysStatus	0x02
#define CMD_ReadCurrentStatus	0x07
#define CMD_ReadFirmwareVersion	0x0e
#define CMD_ReadHardwareVersion	0x0f
#define CMD_EnableIDIFilters	0x20
#define CMD_EnableIDIPatternMatch 0x21
#define CMD_SetIDIPatternMatch	0x22
#define CMD_EnableIDICounters	0x28
#define CMD_ResetIDICounters	0x29
#define CMD_OverflowIDICounters	0x2a
#define CMD_MatchIntIDICounters	0x2b
#define CMD_EdgeIDICounters	0x2c
#define CMD_GetIDICntCurValue	0x2f
#define CMD_SetIDI0CntResetValue 0x40
#define CMD_SetIDI1CntResetValue 0x41
#define CMD_SetIDI2CntResetValue 0x42
#define CMD_SetIDI3CntResetValue 0x43
#define CMD_SetIDI4CntResetValue 0x44
#define CMD_SetIDI5CntResetValue 0x45
#define CMD_SetIDI6CntResetValue 0x46
#define CMD_SetIDI7CntResetValue 0x47
#define CMD_SetIDI0CntMatchValue 0x48
#define CMD_SetIDI1CntMatchValue 0x49
#define CMD_SetIDI2CntMatchValue 0x4a
#define CMD_SetIDI3CntMatchValue 0x4b
#define CMD_SetIDI4CntMatchValue 0x4c
#define CMD_SetIDI5CntMatchValue 0x4d
#define CMD_SetIDI6CntMatchValue 0x4e
#define CMD_SetIDI7CntMatchValue 0x4f
#define OMBCMD_RETRY	0x03
static int pci_dio_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci_dio_detach(struct comedi_device *dev);
struct diosubd_data ;
struct dio_boardtype ;
static DEFINE_PCI_DEVICE_TABLE(pci_dio_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci_dio_pci_table);
static const struct dio_boardtype boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct dio_boardtype))
static struct comedi_driver driver_pci_dio = ;
struct pci_dio_private ;
static struct pci_dio_private *pci_priv = NULL;
#define devpriv ((struct pci_dio_private *)dev->private)
#define this_board ((const struct dio_boardtype *)dev->board_ptr)
static int pci_dio_insn_bits_di_b(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci_dio_insn_bits_di_w(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci_dio_insn_bits_do_b(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci_dio_insn_bits_do_w(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci_8254_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci_8254_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci_8254_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1760_unchecked_mbxrequest(struct comedi_device *dev,
unsigned char *omb, unsigned char *imb,
int repeats)
static int pci1760_clear_imb2(struct comedi_device *dev)
static int pci1760_mbxrequest(struct comedi_device *dev,
unsigned char *omb, unsigned char *imb)
static int pci1760_insn_bits_di(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1760_insn_bits_do(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1760_insn_cnt_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1760_insn_cnt_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci1760_reset(struct comedi_device *dev)
static int pci_dio_reset(struct comedi_device *dev)
static int pci1760_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pci_dio_add_di(struct comedi_device *dev, struct comedi_subdevice *s,
const struct diosubd_data *d, int subdev)
static int pci_dio_add_do(struct comedi_device *dev, struct comedi_subdevice *s,
const struct diosubd_data *d, int subdev)
static int pci_dio_add_8254(struct comedi_device *dev,
struct comedi_subdevice *s,
const struct diosubd_data *d, int subdev)
static int CheckAndAllocCard(struct comedi_device *dev,
struct comedi_devconfig *it,
struct pci_dev *pcidev)
static int pci_dio_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pci_dio_detach(struct comedi_device *dev)
static int __devinit driver_pci_dio_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_pci_dio_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_pci_dio_pci_driver = ;
static int __init driver_pci_dio_init_module(void)
static void __exit driver_pci_dio_cleanup_module(void)
module_init(driver_pci_dio_init_module);
module_exit(driver_pci_dio_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
