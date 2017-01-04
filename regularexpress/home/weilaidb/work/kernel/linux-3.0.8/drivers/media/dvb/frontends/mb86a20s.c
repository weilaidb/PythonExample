static int debug = 1;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activates frontend debugging (default:0)");
#define rc(args...)  do  while (0)
#define dprintk(args...)						\
do  while (0)
struct mb86a20s_state ;
struct regdata ;
static struct regdata mb86a20s_init[] = ;
static struct regdata mb86a20s_reset_reception[] = ;
static int mb86a20s_i2c_writereg(struct mb86a20s_state *state,
u8 i2c_addr, int reg, int data)
static int mb86a20s_i2c_writeregdata(struct mb86a20s_state *state,
u8 i2c_addr, struct regdata *rd, int size)
static int mb86a20s_i2c_readreg(struct mb86a20s_state *state,
u8 i2c_addr, u8 reg)
#define mb86a20s_readreg(state, reg) \
mb86a20s_i2c_readreg(state, state->config->demod_address, reg)
#define mb86a20s_writereg(state, reg, val) \
mb86a20s_i2c_writereg(state, state->config->demod_address, reg, val)
#define mb86a20s_writeregdata(state, regdata) \
mb86a20s_i2c_writeregdata(state, state->config->demod_address, \
regdata, ARRAY_SIZE(regdata))
static int mb86a20s_initfe(struct dvb_frontend *fe)
static int mb86a20s_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int mb86a20s_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int mb86a20s_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int mb86a20s_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int mb86a20s_tune(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params,
unsigned int mode_flags,
unsigned int *delay,
fe_status_t *status)
static void mb86a20s_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops mb86a20s_ops;
struct dvb_frontend *mb86a20s_attach(const struct mb86a20s_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(mb86a20s_attach);
static struct dvb_frontend_ops mb86a20s_ops = ;
MODULE_DESCRIPTION("DVB Frontend module for Fujitsu mb86A20s hardware");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_LICENSE("GPL");
