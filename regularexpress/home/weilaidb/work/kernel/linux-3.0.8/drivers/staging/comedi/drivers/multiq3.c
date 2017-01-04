#define MULTIQ3_SIZE 16
#define MULTIQ3_DIGIN_PORT 0
#define MULTIQ3_DIGOUT_PORT 0
#define MULTIQ3_DAC_DATA 2
#define MULTIQ3_AD_DATA 4
#define MULTIQ3_AD_CS 4
#define MULTIQ3_STATUS 6
#define MULTIQ3_CONTROL 6
#define MULTIQ3_CLK_DATA 8
#define MULTIQ3_ENC_DATA 12
#define MULTIQ3_ENC_CONTROL 14
#define MULTIQ3_AD_MUX_EN      0x0040
#define MULTIQ3_AD_AUTOZ       0x0080
#define MULTIQ3_AD_AUTOCAL     0x0100
#define MULTIQ3_AD_SH          0x0200
#define MULTIQ3_AD_CLOCK_4M    0x0400
#define MULTIQ3_DA_LOAD                0x1800
#define MULTIQ3_CONTROL_MUST    0x0600
#define MULTIQ3_STATUS_EOC      0x008
#define MULTIQ3_STATUS_EOC_I    0x010
#define MULTIQ3_CLOCK_DATA      0x00
#define MULTIQ3_CLOCK_SETUP     0x18
#define MULTIQ3_INPUT_SETUP     0x41
#define MULTIQ3_QUAD_X4         0x38
#define MULTIQ3_BP_RESET        0x01
#define MULTIQ3_CNTR_RESET      0x02
#define MULTIQ3_TRSFRPR_CTR     0x08
#define MULTIQ3_TRSFRCNTR_OL    0x10
#define MULTIQ3_EFLAG_RESET     0x06
#define MULTIQ3_TIMEOUT 30
static int multiq3_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int multiq3_detach(struct comedi_device *dev);
static struct comedi_driver driver_multiq3 = ;
static int __init driver_multiq3_init_module(void)
static void __exit driver_multiq3_cleanup_module(void)
module_init(driver_multiq3_init_module);
module_exit(driver_multiq3_cleanup_module);
struct multiq3_private ;
#define devpriv ((struct multiq3_private *)dev->private)
static int multiq3_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int multiq3_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int multiq3_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int multiq3_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int multiq3_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int multiq3_encoder_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static void encoder_reset(struct comedi_device *dev)
static int multiq3_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int multiq3_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
