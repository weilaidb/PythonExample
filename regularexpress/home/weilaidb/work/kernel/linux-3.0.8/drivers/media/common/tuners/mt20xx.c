static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable verbose debug messages");
static unsigned int optimize_vco  = 1;
module_param(optimize_vco,      int, 0644);
static unsigned int tv_antenna    = 1;
module_param(tv_antenna,        int, 0644);
static unsigned int radio_antenna;
module_param(radio_antenna,     int, 0644);
#define MT2032 0x04
#define MT2030 0x06
#define MT2040 0x07
#define MT2050 0x42
static char *microtune_part[] = ;
struct microtune_priv ;
static int microtune_release(struct dvb_frontend *fe)
static int microtune_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int mt2032_spurcheck(struct dvb_frontend *fe,
int f1, int f2, int spectrum_from,int spectrum_to)
static int mt2032_compute_freq(struct dvb_frontend *fe,
unsigned int rfin,
unsigned int if1, unsigned int if2,
unsigned int spectrum_from,
unsigned int spectrum_to,
unsigned char *buf,
int *ret_sel,
unsigned int xogc)
static int mt2032_check_lo_lock(struct dvb_frontend *fe)
static int mt2032_optimize_vco(struct dvb_frontend *fe,int sel,int lock)
static void mt2032_set_if_freq(struct dvb_frontend *fe, unsigned int rfin,
unsigned int if1, unsigned int if2,
unsigned int from, unsigned int to)
static int mt2032_set_tv_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int mt2032_set_radio_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int mt2032_set_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static struct dvb_tuner_ops mt2032_tuner_ops = ;
static int mt2032_init(struct dvb_frontend *fe)
static void mt2050_set_antenna(struct dvb_frontend *fe, unsigned char antenna)
static void mt2050_set_if_freq(struct dvb_frontend *fe,unsigned int freq, unsigned int if2)
static int mt2050_set_tv_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int mt2050_set_radio_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int mt2050_set_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static struct dvb_tuner_ops mt2050_tuner_ops = ;
static int mt2050_init(struct dvb_frontend *fe)
struct dvb_frontend *microtune_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr)
EXPORT_SYMBOL_GPL(microtune_attach);
MODULE_DESCRIPTION("Microtune tuner driver");
MODULE_AUTHOR("Ralph Metzler, Gerd Knorr, Gunther Mayer");
MODULE_LICENSE("GPL");
