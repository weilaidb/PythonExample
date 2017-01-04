static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
#define dprintk(args...) \
do  while (0)
struct tda827x_priv ;
static void tda827x_set_std(struct dvb_frontend *fe,
struct analog_parameters *params)
struct tda827x_data ;
static const struct tda827x_data tda827x_table[] = ;
static int tuner_transfer(struct dvb_frontend *fe,
struct i2c_msg *msg,
const int size)
static int tda827xo_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int tda827xo_sleep(struct dvb_frontend *fe)
static int tda827xo_set_analog_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static void tda827xo_agcf(struct dvb_frontend *fe)
struct tda827xa_data ;
static struct tda827xa_data tda827xa_dvbt[] = ;
static struct tda827xa_data tda827xa_dvbc[] = ;
static struct tda827xa_data tda827xa_analog[] = ;
static int tda827xa_sleep(struct dvb_frontend *fe)
static void tda827xa_lna_gain(struct dvb_frontend *fe, int high,
struct analog_parameters *params)
static int tda827xa_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int tda827xa_set_analog_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static void tda827xa_agcf(struct dvb_frontend *fe)
static int tda827x_release(struct dvb_frontend *fe)
static int tda827x_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int tda827x_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int tda827x_init(struct dvb_frontend *fe)
static int tda827x_probe_version(struct dvb_frontend *fe);
static int tda827x_initial_init(struct dvb_frontend *fe)
static int tda827x_initial_sleep(struct dvb_frontend *fe)
static struct dvb_tuner_ops tda827xo_tuner_ops = ;
static struct dvb_tuner_ops tda827xa_tuner_ops = ;
static int tda827x_probe_version(struct dvb_frontend *fe)
struct dvb_frontend *tda827x_attach(struct dvb_frontend *fe, int addr,
struct i2c_adapter *i2c,
struct tda827x_config *cfg)
EXPORT_SYMBOL_GPL(tda827x_attach);
MODULE_DESCRIPTION("DVB TDA827x driver");
MODULE_AUTHOR("Hartmut Hackmann <hartmut.hackmann@t-online.de>");
MODULE_AUTHOR("Michael Krufky <mkrufky@linuxtv.org>");
MODULE_LICENSE("GPL");
