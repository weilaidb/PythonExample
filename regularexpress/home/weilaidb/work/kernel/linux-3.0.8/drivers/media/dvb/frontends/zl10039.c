static int debug;
#define dprintk(args...) \
do  while (0)
enum zl10039_model_id ;
struct zl10039_state ;
enum zl10039_reg_addr ;
static int zl10039_read(const struct zl10039_state *state,
const enum zl10039_reg_addr reg, u8 *buf,
const size_t count)
static int zl10039_write(struct zl10039_state *state,
const enum zl10039_reg_addr reg, const u8 *src,
const size_t count)
static inline int zl10039_readreg(struct zl10039_state *state,
const enum zl10039_reg_addr reg, u8 *val)
static inline int zl10039_writereg(struct zl10039_state *state,
const enum zl10039_reg_addr reg,
const u8 val)
static int zl10039_init(struct dvb_frontend *fe)
static int zl10039_sleep(struct dvb_frontend *fe)
static int zl10039_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int zl10039_release(struct dvb_frontend *fe)
static struct dvb_tuner_ops zl10039_ops = ;
struct dvb_frontend *zl10039_attach(struct dvb_frontend *fe,
u8 i2c_addr, struct i2c_adapter *i2c)
EXPORT_SYMBOL(zl10039_attach);
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Zarlink ZL10039 DVB-S tuner driver");
MODULE_AUTHOR("Jan D. Louw <jd.louw@mweb.co.za>");
MODULE_LICENSE("GPL");
