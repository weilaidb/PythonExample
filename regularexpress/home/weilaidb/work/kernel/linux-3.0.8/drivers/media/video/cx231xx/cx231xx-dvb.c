MODULE_DESCRIPTION("driver for cx231xx based DVB cards");
MODULE_AUTHOR("Srinivasa Deevi <srinivasa.deevi@conexant.com>");
MODULE_LICENSE("GPL");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages [dvb]");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define dprintk(level, fmt, arg...) do  while (0)
#define CX231XX_DVB_NUM_BUFS 5
#define CX231XX_DVB_MAX_PACKETSIZE 564
#define CX231XX_DVB_MAX_PACKETS 64
struct cx231xx_dvb ;
static struct s5h1432_config dvico_s5h1432_config = ;
static struct tda18271_std_map cnxt_rde253s_tda18271_std_map = ;
static struct tda18271_std_map mb86a20s_tda18271_config = ;
static struct tda18271_config cnxt_rde253s_tunerconfig = ;
static struct s5h1411_config tda18271_s5h1411_config = ;
static struct s5h1411_config xc5000_s5h1411_config = ;
static struct lgdt3305_config hcw_lgdt3305_config = ;
static struct tda18271_std_map hauppauge_tda18271_std_map = ;
static struct tda18271_config hcw_tda18271_config = ;
static const struct mb86a20s_config pv_mb86a20s_config = ;
static struct tda18271_config pv_tda18271_config = ;
static inline void print_err_status(struct cx231xx *dev, int packet, int status)
static inline int dvb_isoc_copy(struct cx231xx *dev, struct urb *urb)
static inline int dvb_bulk_copy(struct cx231xx *dev, struct urb *urb)
static int start_streaming(struct cx231xx_dvb *dvb)
static int stop_streaming(struct cx231xx_dvb *dvb)
static int start_feed(struct dvb_demux_feed *feed)
static int stop_feed(struct dvb_demux_feed *feed)
static int cx231xx_dvb_bus_ctrl(struct dvb_frontend *fe, int acquire)
static struct xc5000_config cnxt_rde250_tunerconfig = ;
static struct xc5000_config cnxt_rdu250_tunerconfig = ;
int cx231xx_set_analog_freq(struct cx231xx *dev, u32 freq)
int cx231xx_reset_analog_tuner(struct cx231xx *dev)
static int register_dvb(struct cx231xx_dvb *dvb,
struct module *module,
struct cx231xx *dev, struct device *device)
static void unregister_dvb(struct cx231xx_dvb *dvb)
static int dvb_init(struct cx231xx *dev)
static int dvb_fini(struct cx231xx *dev)
static struct cx231xx_ops dvb_ops = ;
static int __init cx231xx_dvb_register(void)
static void __exit cx231xx_dvb_unregister(void)
module_init(cx231xx_dvb_register);
module_exit(cx231xx_dvb_unregister);
