#define BAYCOM_DEBUG
#define BAYCOM_OPTIONS_SOFTDCD  1
static const char bc_drvname[] = "baycom_par";
static const char bc_drvinfo[] = KERN_INFO "baycom_par: (C) 1996-2000 Thomas Sailer, HB9JNX/AE4WA\n"
"baycom_par: version 0.9\n";
#define NR_PORTS 4
static struct net_device *baycom_device[NR_PORTS];
#define PAR96_BURSTBITS 16
#define PAR96_BURST     4
#define PAR96_PTT       2
#define PAR96_TXBIT     1
#define PAR96_ACK       0x40
#define PAR96_RXBIT     0x20
#define PAR96_DCD       0x10
#define PAR97_POWER     0xf8
struct baycom_state ;
static void __inline__ baycom_int_freq(struct baycom_state *bc)
#define PAR96_DESCRAM_TAP1 0x20000
#define PAR96_DESCRAM_TAP2 0x01000
#define PAR96_DESCRAM_TAP3 0x00001
#define PAR96_DESCRAM_TAPSH1 17
#define PAR96_DESCRAM_TAPSH2 12
#define PAR96_DESCRAM_TAPSH3 0
#define PAR96_SCRAM_TAP1 0x20000
#define PAR96_SCRAM_TAPN 0x00021
static __inline__ void par96_tx(struct net_device *dev, struct baycom_state *bc)
static __inline__ void par96_rx(struct net_device *dev, struct baycom_state *bc)
static void par96_interrupt(void *dev_id)
static void par96_wakeup(void *handle)
static int par96_open(struct net_device *dev)
static int par96_close(struct net_device *dev)
static int baycom_ioctl(struct net_device *dev, struct ifreq *ifr,
struct hdlcdrv_ioctl *hi, int cmd);
static struct hdlcdrv_ops par96_ops = ;
static int baycom_setmode(struct baycom_state *bc, const char *modestr)
static int baycom_ioctl(struct net_device *dev, struct ifreq *ifr,
struct hdlcdrv_ioctl *hi, int cmd)
static const char *mode[NR_PORTS] = ;
static int iobase[NR_PORTS] = ;
module_param_array(mode, charp, NULL, 0);
MODULE_PARM_DESC(mode, "baycom operating mode; eg. par96 or picpar");
module_param_array(iobase, int, NULL, 0);
MODULE_PARM_DESC(iobase, "baycom io base address");
MODULE_AUTHOR("Thomas M. Sailer, sailer@ife.ee.ethz.ch, hb9jnx@hb9w.che.eu");
MODULE_DESCRIPTION("Baycom par96 and picpar amateur radio modem driver");
MODULE_LICENSE("GPL");
static int __init init_baycompar(void)
static void __exit cleanup_baycompar(void)
module_init(init_baycompar);
module_exit(cleanup_baycompar);
static int __init baycom_par_setup(char *str)
__setup("baycom_par=", baycom_par_setup);
