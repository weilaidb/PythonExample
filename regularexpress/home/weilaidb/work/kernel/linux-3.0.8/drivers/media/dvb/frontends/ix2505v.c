static int ix2505v_debug;
#define dprintk(level, args...) do  while (0)
#define deb_info(args...)  dprintk(0x01, args)
#define deb_i2c(args...)  dprintk(0x02, args)
struct ix2505v_state ;
static int ix2505v_read_status_reg(struct ix2505v_state *state)
static int ix2505v_write(struct ix2505v_state *state, u8 buf[], u8 count)
static int ix2505v_release(struct dvb_frontend *fe)
static int ix2505v_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int ix2505v_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static struct dvb_tuner_ops ix2505v_tuner_ops = ;
struct dvb_frontend *ix2505v_attach(struct dvb_frontend *fe,
const struct ix2505v_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(ix2505v_attach);
module_param_named(debug, ix2505v_debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("DVB IX2505V tuner driver");
MODULE_AUTHOR("Malcolm Priestley");
MODULE_LICENSE("GPL");
