static struct pcmcia_device *pcmcia_cur_dev = NULL;
#define DIO700_SIZE 8
static int dio700_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dio700_detach(struct comedi_device *dev);
enum dio700_bustype ;
struct dio700_board ;
static const struct dio700_board dio700_boards[] = ;
#define thisboard ((const struct dio700_board *)dev->board_ptr)
struct dio700_private ;
#define devpriv ((struct dio700_private *)dev->private)
static struct comedi_driver driver_dio700 = ;
#define _700_SIZE 8
#define _700_DATA 0
#define DIO_W		0x04
#define DIO_R		0x05
struct subdev_700_struct ;
#define CALLBACK_ARG	(((struct subdev_700_struct *)s->private)->cb_arg)
#define CALLBACK_FUNC	(((struct subdev_700_struct *)s->private)->cb_func)
#define subdevpriv	((struct subdev_700_struct *)s->private)
static void do_config(struct comedi_device *dev, struct comedi_subdevice *s);
void subdev_700_interrupt(struct comedi_device *dev, struct comedi_subdevice *s)
EXPORT_SYMBOL(subdev_700_interrupt);
static int subdev_700_cb(int dir, int port, int data, unsigned long arg)
static int subdev_700_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int subdev_700_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void do_config(struct comedi_device *dev, struct comedi_subdevice *s)
static int subdev_700_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int subdev_700_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int subdev_700_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
int subdev_700_init(struct comedi_device *dev, struct comedi_subdevice *s,
int (*cb) (int, int, int, unsigned long), unsigned long arg)
EXPORT_SYMBOL(subdev_700_init);
int subdev_700_init_irq(struct comedi_device *dev, struct comedi_subdevice *s,
int (*cb) (int, int, int, unsigned long),
unsigned long arg)
EXPORT_SYMBOL(subdev_700_init_irq);
void subdev_700_cleanup(struct comedi_device *dev, struct comedi_subdevice *s)
EXPORT_SYMBOL(subdev_700_cleanup);
static int dio700_attach(struct comedi_device *dev, struct comedi_devconfig *it)
;
static int dio700_detach(struct comedi_device *dev)
;
static void dio700_config(struct pcmcia_device *link);
static void dio700_release(struct pcmcia_device *link);
static int dio700_cs_suspend(struct pcmcia_device *p_dev);
static int dio700_cs_resume(struct pcmcia_device *p_dev);
static int dio700_cs_attach(struct pcmcia_device *);
static void dio700_cs_detach(struct pcmcia_device *);
struct local_info_t ;
static int dio700_cs_attach(struct pcmcia_device *link)
static void dio700_cs_detach(struct pcmcia_device *link)
static int dio700_pcmcia_config_loop(struct pcmcia_device *p_dev,
void *priv_data)
static void dio700_config(struct pcmcia_device *link)
static void dio700_release(struct pcmcia_device *link)
static int dio700_cs_suspend(struct pcmcia_device *link)
static int dio700_cs_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id dio700_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, dio700_cs_ids);
MODULE_AUTHOR("Fred Brooks <nsaspook@nsaspook.com>");
MODULE_DESCRIPTION("Comedi driver for National Instruments "
"PCMCIA DAQCard-700 DIO");
MODULE_LICENSE("GPL");
struct pcmcia_driver dio700_cs_driver = ;
static int __init init_dio700_cs(void)
static void __exit exit_dio700_cs(void)
int __init init_module(void)
void __exit cleanup_module(void)
