static int debug;
struct stv6110_priv ;
#define dprintk(args...) \
do  while (0)
static s32 abssub(s32 a, s32 b)
;
static int stv6110_release(struct dvb_frontend *fe)
static int stv6110_write_regs(struct dvb_frontend *fe, u8 buf[],
int start, int len)
static int stv6110_read_regs(struct dvb_frontend *fe, u8 regs[],
int start, int len)
static int stv6110_read_reg(struct dvb_frontend *fe, int start)
static int stv6110_sleep(struct dvb_frontend *fe)
static u32 carrier_width(u32 symbol_rate, fe_rolloff_t rolloff)
static int stv6110_set_bandwidth(struct dvb_frontend *fe, u32 bandwidth)
static int stv6110_init(struct dvb_frontend *fe)
static int stv6110_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int stv6110_set_frequency(struct dvb_frontend *fe, u32 frequency)
static int stv6110_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int stv6110_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static struct dvb_tuner_ops stv6110_tuner_ops = ;
struct dvb_frontend *stv6110_attach(struct dvb_frontend *fe,
const struct stv6110_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(stv6110_attach);
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("ST STV6110 driver");
MODULE_AUTHOR("Igor M. Liplianin");
MODULE_LICENSE("GPL");
