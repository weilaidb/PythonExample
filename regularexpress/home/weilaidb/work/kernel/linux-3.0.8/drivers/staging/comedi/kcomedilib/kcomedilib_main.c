#define __NO_VERSION__
MODULE_AUTHOR("David Schleef <ds@schleef.org>");
MODULE_DESCRIPTION("Comedi kernel library");
MODULE_LICENSE("GPL");
struct comedi_device *comedi_open(const char *filename)
EXPORT_SYMBOL(comedi_open);
int comedi_close(struct comedi_device *d)
EXPORT_SYMBOL(comedi_close);
static int comedi_do_insn(struct comedi_device *dev, struct comedi_insn *insn)
int comedi_dio_config(struct comedi_device *dev, unsigned int subdev,
unsigned int chan, unsigned int io)
EXPORT_SYMBOL(comedi_dio_config);
int comedi_dio_bitfield(struct comedi_device *dev, unsigned int subdev,
unsigned int mask, unsigned int *bits)
EXPORT_SYMBOL(comedi_dio_bitfield);
int comedi_find_subdevice_by_type(struct comedi_device *dev, int type,
unsigned int subd)
EXPORT_SYMBOL(comedi_find_subdevice_by_type);
int comedi_get_n_channels(struct comedi_device *dev, unsigned int subdevice)
EXPORT_SYMBOL(comedi_get_n_channels);
