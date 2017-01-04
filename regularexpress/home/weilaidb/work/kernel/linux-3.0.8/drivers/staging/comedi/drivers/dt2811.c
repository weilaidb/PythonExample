static const char *driver_name = "dt2811";
static const struct comedi_lrange range_dt2811_pgh_ai_5_unipolar = ;
static const struct comedi_lrange range_dt2811_pgh_ai_2_5_bipolar = ;
static const struct comedi_lrange range_dt2811_pgh_ai_5_bipolar = ;
static const struct comedi_lrange range_dt2811_pgl_ai_5_unipolar = ;
static const struct comedi_lrange range_dt2811_pgl_ai_2_5_bipolar = ;
static const struct comedi_lrange range_dt2811_pgl_ai_5_bipolar = ;
#define TIMEOUT 10000
#define DT2811_SIZE 8
#define DT2811_ADCSR 0
#define DT2811_ADGCR 1
#define DT2811_ADDATLO 2
#define DT2811_ADDATHI 3
#define DT2811_DADAT0LO 2
#define DT2811_DADAT0HI 3
#define DT2811_DADAT1LO 4
#define DT2811_DADAT1HI 5
#define DT2811_DIO 6
#define DT2811_TMRCTR 7
#define DT2811_ADDONE   0x80
#define DT2811_ADERROR  0x40
#define DT2811_ADBUSY   0x20
#define DT2811_CLRERROR 0x10
#define DT2811_INTENB   0x04
#define DT2811_ADMODE   0x03
struct dt2811_board ;
static const struct dt2811_board boardtypes[] = ;
#define this_board ((const struct dt2811_board *)dev->board_ptr)
static int dt2811_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dt2811_detach(struct comedi_device *dev);
static struct comedi_driver driver_dt2811 = ;
static int __init driver_dt2811_init_module(void)
static void __exit driver_dt2811_cleanup_module(void)
module_init(driver_dt2811_init_module);
module_exit(driver_dt2811_cleanup_module);
static int dt2811_ai_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2811_ao_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2811_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2811_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2811_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
enum ;
struct dt2811_private ;
#define devpriv ((struct dt2811_private *)dev->private)
static const struct comedi_lrange *dac_range_types[] = ;
#define DT2811_TIMEOUT 5
static int dt2811_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int dt2811_detach(struct comedi_device *dev)
static int dt2811_ai_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2811_ao_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2811_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2811_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2811_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
