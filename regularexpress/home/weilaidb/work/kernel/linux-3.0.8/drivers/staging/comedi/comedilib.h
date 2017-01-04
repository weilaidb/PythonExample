#define _LINUX_COMEDILIB_H
struct comedi_device *comedi_open(const char *path);
int comedi_close(struct comedi_device *dev);
int comedi_dio_config(struct comedi_device *dev, unsigned int subdev,
unsigned int chan, unsigned int io);
int comedi_dio_bitfield(struct comedi_device *dev, unsigned int subdev,
unsigned int mask, unsigned int *bits);
int comedi_find_subdevice_by_type(struct comedi_device *dev, int type,
unsigned int subd);
int comedi_get_n_channels(struct comedi_device *dev, unsigned int subdevice);
