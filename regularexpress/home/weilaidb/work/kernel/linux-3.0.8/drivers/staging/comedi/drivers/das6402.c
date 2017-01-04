#define DAS6402_SIZE 16
#define N_WORDS (3000*64)
#define STOP    0
#define START   1
#define SCANL 0x3f00
#define BYTE unsigned char
#define WORD unsigned short
#define CLRINT 0x01
#define CLRXTR 0x02
#define CLRXIN 0x04
#define EXTEND 0x10
#define ARMED 0x20
#define POSTMODE 0x40
#define MHZ 0x80
#define IRQ (0x04 << 4)
#define IRQV 10
#define CONVSRC 0x03
#define BURSTEN 0x04
#define XINTE 0x08
#define INTE 0x80
#define TGEN 0x01
#define TGSEL 0x02
#define TGPOL 0x04
#define PRETRIG 0x08
#define EOB 0x0c
#define FIFOHFULL 0x08
#define GAIN 0x01
#define FIFONEPTY 0x04
#define MODE 0x10
#define SEM 0x20
#define BIP 0x40
#define M0 0x00
#define M2 0x04
#define	C0 0x00
#define	C1 0x40
#define	C2 0x80
#define	RWLH 0x30
static int das6402_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int das6402_detach(struct comedi_device *dev);
static struct comedi_driver driver_das6402 = ;
static int __init driver_das6402_init_module(void)
static void __exit driver_das6402_cleanup_module(void)
module_init(driver_das6402_init_module);
module_exit(driver_das6402_cleanup_module);
struct das6402_private ;
#define devpriv ((struct das6402_private *)dev->private)
static void das6402_ai_fifo_dregs(struct comedi_device *dev,
struct comedi_subdevice *s);
static void das6402_setcounter(struct comedi_device *dev)
static irqreturn_t intr_handler(int irq, void *d)
static void das6402_ai_fifo_dregs(struct comedi_device *dev,
struct comedi_subdevice *s)
static int das6402_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int das6402_ai_mode2(struct comedi_device *dev,
struct comedi_subdevice *s, comedi_trig * it)
static int board_init(struct comedi_device *dev)
static int das6402_detach(struct comedi_device *dev)
static int das6402_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
