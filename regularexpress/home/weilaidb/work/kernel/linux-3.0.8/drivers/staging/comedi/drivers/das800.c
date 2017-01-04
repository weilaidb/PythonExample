#define DAS800_SIZE           8
#define TIMER_BASE            1000
#define N_CHAN_AI             8
#define DAS800_LSB            0
#define   FIFO_EMPTY            0x1
#define   FIFO_OVF              0x2
#define DAS800_MSB            1
#define DAS800_CONTROL1       2
#define   CONTROL1_INTE         0x8
#define DAS800_CONV_CONTROL   2
#define   ITE                   0x1
#define   CASC                  0x2
#define   DTEN                  0x4
#define   IEOC                  0x8
#define   EACS                  0x10
#define   CONV_HCEN             0x80
#define DAS800_SCAN_LIMITS    2
#define DAS800_STATUS         2
#define   IRQ                   0x8
#define   BUSY                  0x80
#define DAS800_GAIN           3
#define   CIO_FFOV              0x8
#define   CIO_ENHF              0x90
#define   CONTROL1              0x80
#define   CONV_CONTROL          0xa0
#define   SCAN_LIMITS           0xc0
#define   ID                    0xe0
#define DAS800_8254           4
#define DAS800_STATUS2        7
#define   STATUS2_HCEN          0x80
#define   STATUS2_INTE          0X20
#define DAS800_ID             7
struct das800_board ;
static const struct comedi_lrange range_das800_ai = ;
static const struct comedi_lrange range_das801_ai = ;
static const struct comedi_lrange range_cio_das801_ai = ;
static const struct comedi_lrange range_das802_ai = ;
static const struct comedi_lrange range_das80216_ai = ;
enum ;
static const struct das800_board das800_boards[] = ;
#define thisboard ((const struct das800_board *)dev->board_ptr)
struct das800_private ;
#define devpriv ((struct das800_private *)dev->private)
static int das800_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int das800_detach(struct comedi_device *dev);
static int das800_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static struct comedi_driver driver_das800 = ;
static irqreturn_t das800_interrupt(int irq, void *d);
static void enable_das800(struct comedi_device *dev);
static void disable_das800(struct comedi_device *dev);
static int das800_ai_do_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int das800_ai_do_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int das800_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int das800_di_rbits(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int das800_do_wbits(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int das800_probe(struct comedi_device *dev);
static int das800_set_frequency(struct comedi_device *dev);
static int das800_probe(struct comedi_device *dev)
static int __init driver_das800_init_module(void)
static void __exit driver_das800_cleanup_module(void)
module_init(driver_das800_init_module);
module_exit(driver_das800_cleanup_module);
static irqreturn_t das800_interrupt(int irq, void *d)
static int das800_attach(struct comedi_device *dev, struct comedi_devconfig *it)
;
static int das800_detach(struct comedi_device *dev)
;
static int das800_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static void enable_das800(struct comedi_device *dev)
static void disable_das800(struct comedi_device *dev)
static int das800_ai_do_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int das800_ai_do_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int das800_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int das800_di_rbits(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int das800_do_wbits(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int das800_set_frequency(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
