#define BAYCOM_DEBUG
static const char bc_drvname[] = "baycom_ser_hdx";
static const char bc_drvinfo[] = KERN_INFO "baycom_ser_hdx: (C) 1996-2000 Thomas Sailer, HB9JNX/AE4WA\n"
"baycom_ser_hdx: version 0.10\n";
#define NR_PORTS 4
static struct net_device *baycom_device[NR_PORTS];
#define RBR(iobase) (iobase+0)
#define THR(iobase) (iobase+0)
#define IER(iobase) (iobase+1)
#define IIR(iobase) (iobase+2)
#define FCR(iobase) (iobase+2)
#define LCR(iobase) (iobase+3)
#define MCR(iobase) (iobase+4)
#define LSR(iobase) (iobase+5)
#define MSR(iobase) (iobase+6)
#define SCR(iobase) (iobase+7)
#define DLL(iobase) (iobase+0)
#define DLM(iobase) (iobase+1)
#define SER12_EXTENT 8
struct baycom_state ;
static inline void baycom_int_freq(struct baycom_state *bc)
static inline void ser12_set_divisor(struct net_device *dev,
unsigned char divisor)
#define SER12_ARB_DIVIDER(bc)  (bc->opt_dcd ? 24 : 36)
#define SER12_DCD_INTERVAL(bc) (bc->opt_dcd ? 12 : 240)
static inline void ser12_tx(struct net_device *dev, struct baycom_state *bc)
static inline void ser12_rx(struct net_device *dev, struct baycom_state *bc)
static irqreturn_t ser12_interrupt(int irq, void *dev_id)
enum uart ;
static const char *uart_str[] = ;
static enum uart ser12_check_uart(unsigned int iobase)
static int ser12_open(struct net_device *dev)
static int ser12_close(struct net_device *dev)
static int baycom_ioctl(struct net_device *dev, struct ifreq *ifr,
struct hdlcdrv_ioctl *hi, int cmd);
static struct hdlcdrv_ops ser12_ops = ;
static int baycom_setmode(struct baycom_state *bc, const char *modestr)
static int baycom_ioctl(struct net_device *dev, struct ifreq *ifr,
struct hdlcdrv_ioctl *hi, int cmd)
static char *mode[NR_PORTS] = ;
static int iobase[NR_PORTS] = ;
static int irq[NR_PORTS] = ;
module_param_array(mode, charp, NULL, 0);
MODULE_PARM_DESC(mode, "baycom operating mode; * for software DCD");
module_param_array(iobase, int, NULL, 0);
MODULE_PARM_DESC(iobase, "baycom io base address");
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(irq, "baycom irq number");
MODULE_AUTHOR("Thomas M. Sailer, sailer@ife.ee.ethz.ch, hb9jnx@hb9w.che.eu");
MODULE_DESCRIPTION("Baycom ser12 half duplex amateur radio modem driver");
MODULE_LICENSE("GPL");
static int __init init_baycomserhdx(void)
static void __exit cleanup_baycomserhdx(void)
module_init(init_baycomserhdx);
module_exit(cleanup_baycomserhdx);
static int __init baycom_ser_hdx_setup(char *str)
__setup("baycom_ser_hdx=", baycom_ser_hdx_setup);
