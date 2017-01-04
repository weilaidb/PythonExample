static unsigned int verbose;
module_param(verbose, int, 0644);
#define FE_ERROR		0
#define FE_NOTICE		1
#define FE_INFO			2
#define FE_DEBUG		3
#define dprintk(x, y, z, format, arg...) do  while (0)
struct stb6100_lkup ;
static int stb6100_release(struct dvb_frontend *fe);
static const struct stb6100_lkup lkup[] = ;
static const char *stb6100_regnames[] = ;
struct stb6100_regmask ;
static const struct stb6100_regmask stb6100_template[] = ;
static inline void stb6100_normalise_regs(u8 regs[])
static int stb6100_read_regs(struct stb6100_state *state, u8 regs[])
static int stb6100_read_reg(struct stb6100_state *state, u8 reg)
static int stb6100_write_reg_range(struct stb6100_state *state, u8 buf[], int start, int len)
static int stb6100_write_reg(struct stb6100_state *state, u8 reg, u8 data)
static int stb6100_get_status(struct dvb_frontend *fe, u32 *status)
static int stb6100_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int stb6100_set_bandwidth(struct dvb_frontend *fe, u32 bandwidth)
static int stb6100_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int stb6100_set_frequency(struct dvb_frontend *fe, u32 frequency)
static int stb6100_sleep(struct dvb_frontend *fe)
static int stb6100_init(struct dvb_frontend *fe)
static int stb6100_get_state(struct dvb_frontend *fe,
enum tuner_param param,
struct tuner_state *state)
static int stb6100_set_state(struct dvb_frontend *fe,
enum tuner_param param,
struct tuner_state *state)
static struct dvb_tuner_ops stb6100_ops = ;
struct dvb_frontend *stb6100_attach(struct dvb_frontend *fe,
const struct stb6100_config *config,
struct i2c_adapter *i2c)
static int stb6100_release(struct dvb_frontend *fe)
EXPORT_SYMBOL(stb6100_attach);
MODULE_PARM_DESC(verbose, "Set Verbosity level");
MODULE_AUTHOR("Manu Abraham");
MODULE_DESCRIPTION("STB6100 Silicon tuner");
MODULE_LICENSE("GPL");
