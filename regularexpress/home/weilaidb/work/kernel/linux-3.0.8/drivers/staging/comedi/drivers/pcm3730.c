#define PCM3730_SIZE 4
#define PCM3730_DOA 0
#define PCM3730_DOB 2
#define PCM3730_DOC 3
#define PCM3730_DIA 0
#define PCM3730_DIB 2
#define PCM3730_DIC 3
static int pcm3730_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcm3730_detach(struct comedi_device *dev);
static struct comedi_driver driver_pcm3730 = ;
static int __init driver_pcm3730_init_module(void)
static void __exit driver_pcm3730_cleanup_module(void)
module_init(driver_pcm3730_init_module);
module_exit(driver_pcm3730_cleanup_module);
static int pcm3730_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcm3730_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcm3730_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pcm3730_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
