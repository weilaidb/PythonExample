#define ADQ12B_SIZE     16
#define ADQ12B_CTREG    0x00
#define ADQ12B_STINR    0x00
#define ADQ12B_OUTBR    0x04
#define ADQ12B_ADLOW    0x08
#define ADQ12B_ADHIG    0x09
#define ADQ12B_CONT0    0x0c
#define ADQ12B_CONT1    0x0d
#define ADQ12B_CONT2    0x0e
#define ADQ12B_COWORD   0x0f
#define ADQ12B_EOC     0x20
#define TIMEOUT        20
static const struct comedi_lrange range_adq12b_ai_bipolar = ;
static const struct comedi_lrange range_adq12b_ai_unipolar = ;
struct adq12b_board ;
static const struct adq12b_board adq12b_boards[] = ;
#define thisboard ((const struct adq12b_board *)dev->board_ptr)
struct adq12b_private ;
#define devpriv ((struct adq12b_private *)dev->private)
static int adq12b_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int adq12b_detach(struct comedi_device *dev);
static struct comedi_driver driver_adq12b = ;
static int adq12b_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int adq12b_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int adq12b_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int adq12b_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int adq12b_detach(struct comedi_device *dev)
static int adq12b_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int adq12b_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int adq12b_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __init driver_adq12b_init_module(void)
static void __exit driver_adq12b_cleanup_module(void)
module_init(driver_adq12b_init_module);
module_exit(driver_adq12b_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
