#define RTI800_SIZE 16
#define RTI800_CSR 0
#define RTI800_MUXGAIN 1
#define RTI800_CONVERT 2
#define RTI800_ADCLO 3
#define RTI800_ADCHI 4
#define RTI800_DAC0LO 5
#define RTI800_DAC0HI 6
#define RTI800_DAC1LO 7
#define RTI800_DAC1HI 8
#define RTI800_CLRFLAGS 9
#define RTI800_DI 10
#define RTI800_DO 11
#define RTI800_9513A_DATA 12
#define RTI800_9513A_CNTRL 13
#define RTI800_9513A_STATUS 13
#define RTI800_BUSY		0x80
#define RTI800_DONE		0x40
#define RTI800_OVERRUN		0x20
#define RTI800_TCR		0x10
#define RTI800_DMA_ENAB		0x08
#define RTI800_INTR_TC		0x04
#define RTI800_INTR_EC		0x02
#define RTI800_INTR_OVRN	0x01
#define Am9513_8BITBUS
#define Am9513_output_control(a)	outb(a, dev->iobase+RTI800_9513A_CNTRL)
#define Am9513_output_data(a)		outb(a, dev->iobase+RTI800_9513A_DATA)
#define Am9513_input_data()		inb(dev->iobase+RTI800_9513A_DATA)
#define Am9513_input_status()		inb(dev->iobase+RTI800_9513A_STATUS)
static const struct comedi_lrange range_rti800_ai_10_bipolar = ;
static const struct comedi_lrange range_rti800_ai_5_bipolar = ;
static const struct comedi_lrange range_rti800_ai_unipolar = ;
struct rti800_board ;
static const struct rti800_board boardtypes[] = ;
#define this_board ((const struct rti800_board *)dev->board_ptr)
static int rti800_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int rti800_detach(struct comedi_device *dev);
static struct comedi_driver driver_rti800 = ;
static int __init driver_rti800_init_module(void)
static void __exit driver_rti800_cleanup_module(void)
module_init(driver_rti800_init_module);
module_exit(driver_rti800_cleanup_module);
static irqreturn_t rti800_interrupt(int irq, void *dev);
struct rti800_private ;
#define devpriv ((struct rti800_private *)dev->private)
#define RTI800_TIMEOUT 100
static irqreturn_t rti800_interrupt(int irq, void *dev)
static const int gaindelay[] = ;
static int rti800_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int rti800_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int rti800_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int rti800_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int rti800_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int rti800_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int rti800_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
