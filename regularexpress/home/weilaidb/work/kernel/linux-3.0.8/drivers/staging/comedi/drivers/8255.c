#define _8255_SIZE 4
#define _8255_DATA 0
#define _8255_CR 3
#define CR_C_LO_IO	0x01
#define CR_B_IO		0x02
#define CR_B_MODE	0x04
#define CR_C_HI_IO	0x08
#define CR_A_IO		0x10
#define CR_A_MODE(a)	((a)<<5)
#define CR_CW		0x80
struct subdev_8255_struct ;
#define CALLBACK_ARG	(((struct subdev_8255_struct *)s->private)->cb_arg)
#define CALLBACK_FUNC	(((struct subdev_8255_struct *)s->private)->cb_func)
#define subdevpriv	((struct subdev_8255_struct *)s->private)
static int dev_8255_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dev_8255_detach(struct comedi_device *dev);
static struct comedi_driver driver_8255 = ;
static int __init driver_8255_init_module(void)
static void __exit driver_8255_cleanup_module(void)
module_init(driver_8255_init_module);
module_exit(driver_8255_cleanup_module);
static void do_config(struct comedi_device *dev, struct comedi_subdevice *s);
void subdev_8255_interrupt(struct comedi_device *dev,
struct comedi_subdevice *s)
EXPORT_SYMBOL(subdev_8255_interrupt);
static int subdev_8255_cb(int dir, int port, int data, unsigned long arg)
static int subdev_8255_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int subdev_8255_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void do_config(struct comedi_device *dev, struct comedi_subdevice *s)
static int subdev_8255_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int subdev_8255_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int subdev_8255_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
int subdev_8255_init(struct comedi_device *dev, struct comedi_subdevice *s,
int (*cb) (int, int, int, unsigned long),
unsigned long arg)
EXPORT_SYMBOL(subdev_8255_init);
int subdev_8255_init_irq(struct comedi_device *dev, struct comedi_subdevice *s,
int (*cb) (int, int, int, unsigned long),
unsigned long arg)
EXPORT_SYMBOL(subdev_8255_init_irq);
void subdev_8255_cleanup(struct comedi_device *dev, struct comedi_subdevice *s)
EXPORT_SYMBOL(subdev_8255_cleanup);
static int dev_8255_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int dev_8255_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
