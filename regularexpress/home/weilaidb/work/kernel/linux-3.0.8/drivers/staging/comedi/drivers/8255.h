#define _8255_H
int subdev_8255_init(struct comedi_device *dev, struct comedi_subdevice *s,
int (*cb) (int, int, int, unsigned long),
unsigned long arg);
int subdev_8255_init_irq(struct comedi_device *dev, struct comedi_subdevice *s,
int (*cb) (int, int, int, unsigned long),
unsigned long arg);
void subdev_8255_cleanup(struct comedi_device *dev, struct comedi_subdevice *s);
void subdev_8255_interrupt(struct comedi_device *dev,
struct comedi_subdevice *s);
