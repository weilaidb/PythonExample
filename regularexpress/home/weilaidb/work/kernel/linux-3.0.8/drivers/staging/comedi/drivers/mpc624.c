#define MPC624_SIZE             16
#define MPC624_MASTER_CONTROL	0
#define MPC624_GNMUXCH          1
#define MPC624_ADC              2
#define MPC624_EE               3
#define MPC624_LEDS             4
#define MPC624_DIO              5
#define MPC624_IRQ_MASK         6
#define MPC624_ADBUSY           (1<<5)
#define MPC624_ADSDO            (1<<4)
#define MPC624_ADFO             (1<<3)
#define MPC624_ADCS             (1<<2)
#define MPC624_ADSCK            (1<<1)
#define MPC624_ADSDI            (1<<0)
#define MPC624_OSR4             (1<<31)
#define MPC624_OSR3             (1<<30)
#define MPC624_OSR2             (1<<29)
#define MPC624_OSR1             (1<<28)
#define MPC624_OSR0             (1<<27)
#define MPC624_EOC_BIT          (1<<31)
#define MPC624_DMY_BIT          (1<<30)
#define MPC624_SGN_BIT          (1<<29)
#define MPC624_SPEED_3_52_kHz (MPC624_OSR4 | MPC624_OSR0)
#define MPC624_SPEED_1_76_kHz (MPC624_OSR4 | MPC624_OSR1)
#define MPC624_SPEED_880_Hz   (MPC624_OSR4 | MPC624_OSR1 | MPC624_OSR0)
#define MPC624_SPEED_440_Hz   (MPC624_OSR4 | MPC624_OSR2)
#define MPC624_SPEED_220_Hz   (MPC624_OSR4 | MPC624_OSR2 | MPC624_OSR0)
#define MPC624_SPEED_110_Hz   (MPC624_OSR4 | MPC624_OSR2 | MPC624_OSR1)
#define MPC624_SPEED_55_Hz \
(MPC624_OSR4 | MPC624_OSR2 | MPC624_OSR1 | MPC624_OSR0)
#define MPC624_SPEED_27_5_Hz  (MPC624_OSR4 | MPC624_OSR3)
#define MPC624_SPEED_13_75_Hz (MPC624_OSR4 | MPC624_OSR3 | MPC624_OSR0)
#define MPC624_SPEED_6_875_Hz \
(MPC624_OSR4 | MPC624_OSR3 | MPC624_OSR2 | MPC624_OSR1 | MPC624_OSR0)
struct skel_private ;
#define devpriv ((struct skel_private *)dev->private)
static const struct comedi_lrange range_mpc624_bipolar1 = ;
static const struct comedi_lrange range_mpc624_bipolar10 = ;
static int mpc624_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int mpc624_detach(struct comedi_device *dev);
static struct comedi_driver driver_mpc624 = ;
static int mpc624_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int mpc624_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int mpc624_detach(struct comedi_device *dev)
#define TIMEOUT 200
static int mpc624_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int __init driver_mpc624_init_module(void)
static void __exit driver_mpc624_cleanup_module(void)
module_init(driver_mpc624_init_module);
module_exit(driver_mpc624_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
