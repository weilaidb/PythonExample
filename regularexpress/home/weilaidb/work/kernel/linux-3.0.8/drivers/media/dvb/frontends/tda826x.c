static int debug;
#define dprintk(args...) \
do  while (0)
struct tda826x_priv ;
static int tda826x_release(struct dvb_frontend *fe)
static int tda826x_sleep(struct dvb_frontend *fe)
static int tda826x_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static int tda826x_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static struct dvb_tuner_ops tda826x_tuner_ops = ;
struct dvb_frontend *tda826x_attach(struct dvb_frontend *fe, int addr, struct i2c_adapter *i2c, int has_loopthrough)
EXPORT_SYMBOL(tda826x_attach);
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("DVB TDA826x driver");
MODULE_AUTHOR("Andrew de Quincey");
MODULE_LICENSE("GPL");
