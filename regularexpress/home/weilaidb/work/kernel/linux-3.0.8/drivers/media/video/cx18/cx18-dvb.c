DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define CX18_REG_DMUX_NUM_PORT_0_CONTROL 0xd5a000
#define CX18_CLOCK_ENABLE2		 0xc71024
#define CX18_DMUX_CLK_MASK		 0x0080
static struct mxl5005s_config hauppauge_hvr1600_tuner = ;
static struct s5h1409_config hauppauge_hvr1600_config = ;
static struct s5h1411_config hcw_s5h1411_config = ;
static struct tda18271_std_map hauppauge_tda18271_std_map = ;
static struct tda18271_config hauppauge_tda18271_config = ;
static struct zl10353_config leadtek_dvr3100h_demod = ;
static int yuan_mpc718_mt352_reqfw(struct cx18_stream *stream,
const struct firmware **fw)
static int yuan_mpc718_mt352_init(struct dvb_frontend *fe)
static struct mt352_config yuan_mpc718_mt352_demod = ;
static struct zl10353_config yuan_mpc718_zl10353_demod = ;
static struct zl10353_config gotview_dvd3_zl10353_demod = ;
static int dvb_register(struct cx18_stream *stream);
static int cx18_dvb_start_feed(struct dvb_demux_feed *feed)
static int cx18_dvb_stop_feed(struct dvb_demux_feed *feed)
int cx18_dvb_register(struct cx18_stream *stream)
void cx18_dvb_unregister(struct cx18_stream *stream)
static int dvb_register(struct cx18_stream *stream)
