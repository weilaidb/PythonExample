#define CSCIR 0x22
#define CSCDR 0x23
#define PAMR  0xa5
#define PADR  0xa9
#define PBMR  0xa4
#define PBDR  0xa8
#define PCMR  0xa3
#define PCDR  0xa7
struct dnp_board ;
static const struct dnp_board dnp_boards[] = ;
#define thisboard ((const struct dnp_board *)dev->board_ptr)
struct dnp_private_data ;
#define devpriv ((dnp_private *)dev->private)
static int dnp_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int dnp_detach(struct comedi_device *dev);
static struct comedi_driver driver_dnp = ;
static int __init driver_dnp_init_module(void)
static void __exit driver_dnp_cleanup_module(void)
module_init(driver_dnp_init_module);
module_exit(driver_dnp_cleanup_module);
static int dnp_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dnp_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dnp_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int dnp_detach(struct comedi_device *dev)
static int dnp_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dnp_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
