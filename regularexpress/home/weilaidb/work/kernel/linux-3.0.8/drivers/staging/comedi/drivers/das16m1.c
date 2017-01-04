#define DAS16M1_SIZE 16
#define DAS16M1_SIZE2 8
#define DAS16M1_XTAL 100
#define FIFO_SIZE 1024
#define DAS16M1_AI             0
#define   AI_CHAN(x)             ((x) & 0xf)
#define DAS16M1_CS             2
#define   EXT_TRIG_BIT           0x1
#define   OVRUN                  0x20
#define   IRQDATA                0x80
#define DAS16M1_DIO            3
#define DAS16M1_CLEAR_INTR     4
#define DAS16M1_INTR_CONTROL   5
#define   EXT_PACER              0x2
#define   INT_PACER              0x3
#define   PACER_MASK             0x3
#define   INTE                   0x80
#define DAS16M1_QUEUE_ADDR     6
#define DAS16M1_QUEUE_DATA     7
#define   Q_CHAN(x)              ((x) & 0x7)
#define   Q_RANGE(x)             (((x) & 0xf) << 4)
#define   UNIPOLAR               0x40
#define DAS16M1_8254_FIRST             0x8
#define DAS16M1_8254_FIRST_CNTRL       0xb
#define   TOTAL_CLEAR                    0x30
#define DAS16M1_8254_SECOND            0xc
#define DAS16M1_82C55                  0x400
#define DAS16M1_8254_THIRD             0x404
static const struct comedi_lrange range_das16m1 = ;
static int das16m1_do_wbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16m1_di_rbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16m1_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16m1_cmd_test(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd);
static int das16m1_cmd_exec(struct comedi_device *dev,
struct comedi_subdevice *s);
static int das16m1_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int das16m1_poll(struct comedi_device *dev, struct comedi_subdevice *s);
static irqreturn_t das16m1_interrupt(int irq, void *d);
static void das16m1_handler(struct comedi_device *dev, unsigned int status);
static unsigned int das16m1_set_pacer(struct comedi_device *dev,
unsigned int ns, int round_flag);
static int das16m1_irq_bits(unsigned int irq);
struct das16m1_board ;
static const struct das16m1_board das16m1_boards[] = ;
static int das16m1_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int das16m1_detach(struct comedi_device *dev);
static struct comedi_driver driver_das16m1 = ;
struct das16m1_private_struct ;
#define devpriv ((struct das16m1_private_struct *)(dev->private))
#define thisboard ((const struct das16m1_board *)(dev->board_ptr))
static int __init driver_das16m1_init_module(void)
static void __exit driver_das16m1_cleanup_module(void)
module_init(driver_das16m1_init_module);
module_exit(driver_das16m1_cleanup_module);
static inline short munge_sample(short data)
static int das16m1_cmd_test(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int das16m1_cmd_exec(struct comedi_device *dev,
struct comedi_subdevice *s)
static int das16m1_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int das16m1_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16m1_di_rbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16m1_do_wbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16m1_poll(struct comedi_device *dev, struct comedi_subdevice *s)
static irqreturn_t das16m1_interrupt(int irq, void *d)
static void munge_sample_array(short *array, unsigned int num_elements)
static void das16m1_handler(struct comedi_device *dev, unsigned int status)
static unsigned int das16m1_set_pacer(struct comedi_device *dev,
unsigned int ns, int rounding_flags)
static int das16m1_irq_bits(unsigned int irq)
static int das16m1_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int das16m1_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
