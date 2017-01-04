static int debug = 1;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activates frontend debugging (default:0)");
#define rc(args...)  do  while (0)
#define dprintk(args...)						\
do  while (0)
struct s921_state ;
static struct s921_bandselect_val  s921_bandselect[] = ;
struct regdata ;
static struct regdata s921_init[] = ;
static struct regdata s921_prefreq[] = ;
static struct regdata s921_postfreq[] = ;
static int s921_i2c_writereg(struct s921_state *state,
u8 i2c_addr, int reg, int data)
static int s921_i2c_writeregdata(struct s921_state *state, u8 i2c_addr,
struct regdata *rd, int size)
static int s921_i2c_readreg(struct s921_state *state, u8 i2c_addr, u8 reg)
#define s921_readreg(state, reg) \
s921_i2c_readreg(state, state->config->demod_address, reg)
#define s921_writereg(state, reg, val) \
s921_i2c_writereg(state, state->config->demod_address, reg, val)
#define s921_writeregdata(state, regdata) \
s921_i2c_writeregdata(state, state->config->demod_address, \
regdata, ARRAY_SIZE(regdata))
static int s921_pll_tune(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int s921_initfe(struct dvb_frontend *fe)
static int s921_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int s921_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int s921_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int s921_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int s921_tune(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params,
unsigned int mode_flags,
unsigned int *delay,
fe_status_t *status)
static int s921_get_algo(struct dvb_frontend *fe)
static void s921_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops s921_ops;
struct dvb_frontend *s921_attach(const struct s921_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(s921_attach);
static struct dvb_frontend_ops s921_ops = ;
MODULE_DESCRIPTION("DVB Frontend module for Sharp S921 hardware");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_AUTHOR("Douglas Landgraf <dougsland@redhat.com>");
MODULE_LICENSE("GPL");
