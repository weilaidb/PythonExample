static int poc_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int poc_detach(struct comedi_device *dev);
static int readback_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dac02_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pcl733_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pcl734_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
struct boarddef_struct ;
static const struct boarddef_struct boards[] = ;
#define n_boards ARRAY_SIZE(boards)
#define this_board ((const struct boarddef_struct *)dev->board_ptr)
static struct comedi_driver driver_poc = ;
static int poc_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int poc_detach(struct comedi_device *dev)
static int readback_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
#define DAC02_LSB(a)	(2 * a)
#define DAC02_MSB(a)	(2 * a + 1)
static int dac02_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl733_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl734_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __init driver_poc_init_module(void)
static void __exit driver_poc_cleanup_module(void)
module_init(driver_poc_init_module);
module_exit(driver_poc_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
