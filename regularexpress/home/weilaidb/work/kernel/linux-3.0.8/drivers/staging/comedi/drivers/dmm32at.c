#define DMM32AT_MEMSIZE 0x10
#define DMM32AT_CONV 0x00
#define DMM32AT_AILSB 0x00
#define DMM32AT_AUXDOUT 0x01
#define DMM32AT_AIMSB 0x01
#define DMM32AT_AILOW 0x02
#define DMM32AT_AIHIGH 0x03
#define DMM32AT_DACLSB 0x04
#define DMM32AT_DACSTAT 0x04
#define DMM32AT_DACMSB 0x05
#define DMM32AT_FIFOCNTRL 0x07
#define DMM32AT_FIFOSTAT 0x07
#define DMM32AT_CNTRL 0x08
#define DMM32AT_AISTAT 0x08
#define DMM32AT_INTCLOCK 0x09
#define DMM32AT_CNTRDIO 0x0a
#define DMM32AT_AICONF 0x0b
#define DMM32AT_AIRBACK 0x0b
#define DMM32AT_CLK1 0x0d
#define DMM32AT_CLK2 0x0e
#define DMM32AT_CLKCT 0x0f
#define DMM32AT_DIOA 0x0c
#define DMM32AT_DIOB 0x0d
#define DMM32AT_DIOC 0x0e
#define DMM32AT_DIOCONF 0x0f
#define dmm_inb(cdev, reg) inb((cdev->iobase)+reg)
#define dmm_outb(cdev, reg, valu) outb(valu, (cdev->iobase)+reg)
#define DMM32AT_DACBUSY 0x80
#define DMM32AT_FIFORESET 0x02
#define DMM32AT_SCANENABLE 0x04
#define DMM32AT_RESET 0x20
#define DMM32AT_INTRESET 0x08
#define DMM32AT_CLKACC 0x00
#define DMM32AT_DIOACC 0x01
#define DMM32AT_STATUS 0x80
#define DMM32AT_ADINT 0x80
#define DMM32AT_CLKSEL 0x03
#define DMM32AT_FREQ12 0x80
#define DMM32AT_RANGE_U10 0x0c
#define DMM32AT_RANGE_U5 0x0d
#define DMM32AT_RANGE_B10 0x08
#define DMM32AT_RANGE_B5 0x00
#define DMM32AT_SCINT_20 0x00
#define DMM32AT_SCINT_15 0x10
#define DMM32AT_SCINT_10 0x20
#define DMM32AT_SCINT_5 0x30
#define DMM32AT_CLKCT1 0x56
#define DMM32AT_CLKCT2 0xb6
#define DMM32AT_DIENABLE 0x80
#define DMM32AT_DIRA 0x10
#define DMM32AT_DIRB 0x02
#define DMM32AT_DIRCL 0x01
#define DMM32AT_DIRCH 0x08
static const struct comedi_lrange dmm32at_airanges = ;
static const unsigned char dmm32at_rangebits[] = ;
static const struct comedi_lrange dmm32at_aoranges = ;
struct dmm32at_board ;
static const struct dmm32at_board dmm32at_boards[] = ;
#define thisboard ((const struct dmm32at_board *)dev->board_ptr)
struct dmm32at_private ;
#define devpriv ((struct dmm32at_private *)dev->private)
static int dmm32at_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dmm32at_detach(struct comedi_device *dev);
static struct comedi_driver driver_dmm32at = ;
static int dmm32at_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dmm32at_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dmm32at_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dmm32at_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dmm32at_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int dmm32at_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int dmm32at_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int dmm32at_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int dmm32at_ns_to_timer(unsigned int *ns, int round);
static irqreturn_t dmm32at_isr(int irq, void *d);
void dmm32at_setaitimer(struct comedi_device *dev, unsigned int nansec);
static int dmm32at_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int dmm32at_detach(struct comedi_device *dev)
static int dmm32at_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dmm32at_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int dmm32at_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int dmm32at_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static irqreturn_t dmm32at_isr(int irq, void *d)
static int dmm32at_ns_to_timer(unsigned int *ns, int round)
static int dmm32at_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dmm32at_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dmm32at_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dmm32at_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
void dmm32at_setaitimer(struct comedi_device *dev, unsigned int nansec)
static int __init driver_dmm32at_init_module(void)
static void __exit driver_dmm32at_cleanup_module(void)
module_init(driver_dmm32at_init_module);
module_exit(driver_dmm32at_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
