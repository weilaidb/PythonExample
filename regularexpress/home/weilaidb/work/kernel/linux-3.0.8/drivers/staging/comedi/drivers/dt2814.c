#define DT2814_SIZE 2
#define DT2814_CSR 0
#define DT2814_DATA 1
#define DT2814_FINISH 0x80
#define DT2814_ERR 0x40
#define DT2814_BUSY 0x20
#define DT2814_ENB 0x10
#define DT2814_CHANMASK 0x0f
static int dt2814_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dt2814_detach(struct comedi_device *dev);
static struct comedi_driver driver_dt2814 = ;
static int __init driver_dt2814_init_module(void)
static void __exit driver_dt2814_cleanup_module(void)
module_init(driver_dt2814_init_module);
module_exit(driver_dt2814_cleanup_module);
static irqreturn_t dt2814_interrupt(int irq, void *dev);
struct dt2814_private ;
#define devpriv ((struct dt2814_private *)dev->private)
#define DT2814_TIMEOUT 10
#define DT2814_MAX_SPEED 100000
static int dt2814_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2814_ns_to_timer(unsigned int *ns, unsigned int flags)
static int dt2814_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int dt2814_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int dt2814_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int dt2814_detach(struct comedi_device *dev)
static irqreturn_t dt2814_interrupt(int irq, void *d)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
