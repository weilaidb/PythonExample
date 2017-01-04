static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable verbose debug messages");
static int deemphasis_50;
module_param(deemphasis_50, int, 0644);
MODULE_PARM_DESC(deemphasis_50, "0 - 75us deemphasis; 1 - 50us deemphasis");
struct tda8290_priv ;
static int tda8290_i2c_bridge(struct dvb_frontend *fe, int close)
static int tda8295_i2c_bridge(struct dvb_frontend *fe, int close)
static void set_audio(struct dvb_frontend *fe,
struct analog_parameters *params)
static struct  fm_mode[] = ;
static void tda8290_set_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static void tda8295_power(struct dvb_frontend *fe, int enable)
static void tda8295_set_easy_mode(struct dvb_frontend *fe, int enable)
static void tda8295_set_video_std(struct dvb_frontend *fe)
static void tda8295_agc1_out(struct dvb_frontend *fe, int enable)
static void tda8295_agc2_out(struct dvb_frontend *fe, int enable)
static int tda8295_has_signal(struct dvb_frontend *fe)
static void tda8295_set_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static int tda8290_has_signal(struct dvb_frontend *fe)
static void tda8290_standby(struct dvb_frontend *fe)
static void tda8295_standby(struct dvb_frontend *fe)
static void tda8290_init_if(struct dvb_frontend *fe)
static void tda8295_init_if(struct dvb_frontend *fe)
static void tda8290_init_tuner(struct dvb_frontend *fe)
static void tda829x_release(struct dvb_frontend *fe)
static struct tda18271_config tda829x_tda18271_config = ;
static int tda829x_find_tuner(struct dvb_frontend *fe)
static int tda8290_probe(struct tuner_i2c_props *i2c_props)
static int tda8295_probe(struct tuner_i2c_props *i2c_props)
static struct analog_demod_ops tda8290_ops = ;
static struct analog_demod_ops tda8295_ops = ;
struct dvb_frontend *tda829x_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap, u8 i2c_addr,
struct tda829x_config *cfg)
EXPORT_SYMBOL_GPL(tda829x_attach);
int tda829x_probe(struct i2c_adapter *i2c_adap, u8 i2c_addr)
EXPORT_SYMBOL_GPL(tda829x_probe);
MODULE_DESCRIPTION("Philips/NXP TDA8290/TDA8295 analog IF demodulator driver");
MODULE_AUTHOR("Gerd Knorr, Hartmut Hackmann, Michael Krufky");
MODULE_LICENSE("GPL");
