static unsigned int verbose;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "Set Verbosity level");
static int stv6110x_read_reg(struct stv6110x_state *stv6110x, u8 reg, u8 *data)
static int stv6110x_write_regs(struct stv6110x_state *stv6110x, int start, u8 data[], int len)
static int stv6110x_write_reg(struct stv6110x_state *stv6110x, u8 reg, u8 data)
static int stv6110x_init(struct dvb_frontend *fe)
static int stv6110x_set_frequency(struct dvb_frontend *fe, u32 frequency)
static int stv6110x_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int stv6110x_set_bandwidth(struct dvb_frontend *fe, u32 bandwidth)
static int stv6110x_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int stv6110x_set_refclock(struct dvb_frontend *fe, u32 refclock)
static int stv6110x_get_bbgain(struct dvb_frontend *fe, u32 *gain)
static int stv6110x_set_bbgain(struct dvb_frontend *fe, u32 gain)
static int stv6110x_set_mode(struct dvb_frontend *fe, enum tuner_mode mode)
static int stv6110x_sleep(struct dvb_frontend *fe)
static int stv6110x_get_status(struct dvb_frontend *fe, u32 *status)
static int stv6110x_release(struct dvb_frontend *fe)
static struct dvb_tuner_ops stv6110x_ops = ;
static struct stv6110x_devctl stv6110x_ctl = ;
struct stv6110x_devctl *stv6110x_attach(struct dvb_frontend *fe,
const struct stv6110x_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(stv6110x_attach);
MODULE_AUTHOR("Manu Abraham");
MODULE_DESCRIPTION("STV6110x Silicon tuner");
MODULE_LICENSE("GPL");
