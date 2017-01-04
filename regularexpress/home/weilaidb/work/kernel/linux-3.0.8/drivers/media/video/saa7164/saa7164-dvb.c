#define DRIVER_NAME "saa7164"
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static struct tda10048_config hauppauge_hvr2200_1_config = ;
static struct tda10048_config hauppauge_hvr2200_2_config = ;
static struct tda18271_std_map hauppauge_tda18271_std_map = ;
static struct tda18271_config hauppauge_hvr22x0_tuner_config = ;
static struct tda18271_config hauppauge_hvr22x0s_tuner_config = ;
static struct s5h1411_config hauppauge_s5h1411_config = ;
static int saa7164_dvb_stop_port(struct saa7164_port *port)
static int saa7164_dvb_acquire_port(struct saa7164_port *port)
static int saa7164_dvb_pause_port(struct saa7164_port *port)
static int saa7164_dvb_stop_streaming(struct saa7164_port *port)
static int saa7164_dvb_start_port(struct saa7164_port *port)
static int saa7164_dvb_start_feed(struct dvb_demux_feed *feed)
static int saa7164_dvb_stop_feed(struct dvb_demux_feed *feed)
static int dvb_register(struct saa7164_port *port)
int saa7164_dvb_unregister(struct saa7164_port *port)
int saa7164_dvb_register(struct saa7164_port *port)
