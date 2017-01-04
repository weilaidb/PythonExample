#define S526_SIZE 64
#define S526_START_AI_CONV	0
#define S526_AI_READ		0
#define S526_IOSIZE 0x40
#define S526_NUM_PORTS 27
#define REG_TCR 0x00
#define REG_WDC 0x02
#define REG_DAC 0x04
#define REG_ADC 0x06
#define REG_ADD 0x08
#define REG_DIO 0x0A
#define REG_IER 0x0C
#define REG_ISR 0x0E
#define REG_MSC 0x10
#define REG_C0L 0x12
#define REG_C0H 0x14
#define REG_C0M 0x16
#define REG_C0C 0x18
#define REG_C1L 0x1A
#define REG_C1H 0x1C
#define REG_C1M 0x1E
#define REG_C1C 0x20
#define REG_C2L 0x22
#define REG_C2H 0x24
#define REG_C2M 0x26
#define REG_C2C 0x28
#define REG_C3L 0x2A
#define REG_C3H 0x2C
#define REG_C3M 0x2E
#define REG_C3C 0x30
#define REG_EED 0x32
#define REG_EEC 0x34
static const int s526_ports[] = ;
struct counter_mode_register_t ;
union cmReg ;
#define MAX_GPCT_CONFIG_DATA 6
enum S526_GPCT_APP_CLASS ;
struct s526GPCTConfig ;
struct s526_board ;
static const struct s526_board s526_boards[] = ;
#define ADDR_REG(reg) (dev->iobase + (reg))
#define ADDR_CHAN_REG(reg, chan) (dev->iobase + (reg) + (chan) * 8)
#define thisboard ((const struct s526_board *)dev->board_ptr)
struct s526_private ;
#define devpriv ((struct s526_private *)dev->private)
static int s526_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int s526_detach(struct comedi_device *dev);
static struct comedi_driver driver_s526 = ;
static int s526_gpct_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int s526_gpct_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s526_gpct_winsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int s526_ai_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s526_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s526_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s526_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s526_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s526_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s526_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int s526_detach(struct comedi_device *dev)
static int s526_gpct_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int s526_gpct_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s526_gpct_winsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
#define ISR_ADC_DONE 0x4
static int s526_ai_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s526_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s526_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s526_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s526_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s526_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __init driver_s526_init_module(void)
static void __exit driver_s526_cleanup_module(void)
module_init(driver_s526_init_module);
module_exit(driver_s526_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
