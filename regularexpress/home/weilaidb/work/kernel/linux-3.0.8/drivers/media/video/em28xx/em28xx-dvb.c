MODULE_DESCRIPTION("driver for em28xx based DVB cards");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_LICENSE("GPL");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages [dvb]");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define dprintk(level, fmt, arg...) do  while (0)
#define EM28XX_DVB_NUM_BUFS 5
#define EM28XX_DVB_MAX_PACKETS 64
struct em28xx_dvb ;
static inline void print_err_status(struct em28xx *dev,
int packet, int status)
static inline int dvb_isoc_copy(struct em28xx *dev, struct urb *urb)
static int start_streaming(struct em28xx_dvb *dvb)
static int stop_streaming(struct em28xx_dvb *dvb)
static int start_feed(struct dvb_demux_feed *feed)
static int stop_feed(struct dvb_demux_feed *feed)
static int em28xx_dvb_bus_ctrl(struct dvb_frontend *fe, int acquire)
static struct lgdt330x_config em2880_lgdt3303_dev = ;
static struct lgdt3305_config em2870_lgdt3304_dev = ;
static struct s921_config sharp_isdbt = ;
static struct zl10353_config em28xx_zl10353_with_xc3028 = ;
static struct s5h1409_config em28xx_s5h1409_with_xc3028 = ;
static struct tda18271_std_map kworld_a340_std_map = ;
static struct tda18271_config kworld_a340_config = ;
static struct zl10353_config em28xx_zl10353_xc3028_no_i2c_gate = ;
static struct drxd_config em28xx_drxd = ;
static int mt352_terratec_xs_init(struct dvb_frontend *fe)
static struct mt352_config terratec_xs_mt352_cfg = ;
static struct tda10023_config em28xx_tda10023_config = ;
static struct cxd2820r_config em28xx_cxd2820r_config = ;
static struct tda18271_config em28xx_cxd2820r_tda18271_config = ;
static int attach_xc3028(u8 addr, struct em28xx *dev)
static int register_dvb(struct em28xx_dvb *dvb,
struct module *module,
struct em28xx *dev,
struct device *device)
static void unregister_dvb(struct em28xx_dvb *dvb)
static int dvb_init(struct em28xx *dev)
static int dvb_fini(struct em28xx *dev)
static struct em28xx_ops dvb_ops = ;
static int __init em28xx_dvb_register(void)
static void __exit em28xx_dvb_unregister(void)
module_init(em28xx_dvb_register);
module_exit(em28xx_dvb_unregister);
