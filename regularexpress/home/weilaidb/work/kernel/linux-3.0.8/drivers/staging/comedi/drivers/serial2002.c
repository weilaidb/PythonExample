struct serial2002_board ;
static const struct serial2002_board serial2002_boards[] = ;
#define thisboard ((const struct serial2002_board *)dev->board_ptr)
struct serial2002_range_table_t ;
struct serial2002_private ;
#define devpriv ((struct serial2002_private *)dev->private)
static int serial2002_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int serial2002_detach(struct comedi_device *dev);
struct comedi_driver driver_serial2002 = ;
static int serial2002_di_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int serial2002_do_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int serial2002_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int serial2002_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int serial2002_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
struct serial_data ;
static long tty_ioctl(struct file *f, unsigned op, unsigned long param)
static int tty_write(struct file *f, unsigned char *buf, int count)
static int tty_read(struct file *f, int timeout)
static void tty_setspeed(struct file *f, int speed)
static void poll_digital(struct file *f, int channel)
static void poll_channel(struct file *f, int channel)
static struct serial_data serial_read(struct file *f, int timeout)
static void serial_write(struct file *f, struct serial_data data)
static int serial_2002_open(struct comedi_device *dev)
static void serial_2002_close(struct comedi_device *dev)
static int serial2002_di_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int serial2002_do_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int serial2002_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int serial2002_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int serial2002_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int serial2002_ei_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int serial2002_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int serial2002_detach(struct comedi_device *dev)
static int __init driver_serial2002_init_module(void)
static void __exit driver_serial2002_cleanup_module(void)
module_init(driver_serial2002_init_module);
module_exit(driver_serial2002_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
