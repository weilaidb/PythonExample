struct tda665x_state ;
static int tda665x_read(struct tda665x_state *state, u8 *buf)
static int tda665x_write(struct tda665x_state *state, u8 *buf, u8 length)
static int tda665x_get_state(struct dvb_frontend *fe,
enum tuner_param param,
struct tuner_state *tstate)
static int tda665x_get_status(struct dvb_frontend *fe, u32 *status)
static int tda665x_set_state(struct dvb_frontend *fe,
enum tuner_param param,
struct tuner_state *tstate)
static int tda665x_release(struct dvb_frontend *fe)
static struct dvb_tuner_ops tda665x_ops = ;
struct dvb_frontend *tda665x_attach(struct dvb_frontend *fe,
const struct tda665x_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(tda665x_attach);
MODULE_DESCRIPTION("TDA665x driver");
MODULE_AUTHOR("Manu Abraham");
MODULE_LICENSE("GPL");
