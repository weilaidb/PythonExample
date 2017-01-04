struct tda8261_state ;
static int tda8261_read(struct tda8261_state *state, u8 *buf)
static int tda8261_write(struct tda8261_state *state, u8 *buf)
static int tda8261_get_status(struct dvb_frontend *fe, u32 *status)
static const u32 div_tab[] = ;
static const u8  ref_div[] = ;
static int tda8261_get_state(struct dvb_frontend *fe,
enum tuner_param param,
struct tuner_state *tstate)
static int tda8261_set_state(struct dvb_frontend *fe,
enum tuner_param param,
struct tuner_state *tstate)
static int tda8261_release(struct dvb_frontend *fe)
static struct dvb_tuner_ops tda8261_ops = ;
struct dvb_frontend *tda8261_attach(struct dvb_frontend *fe,
const struct tda8261_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(tda8261_attach);
MODULE_AUTHOR("Manu Abraham");
MODULE_DESCRIPTION("TDA8261 8PSK/QPSK Tuner");
MODULE_LICENSE("GPL");
