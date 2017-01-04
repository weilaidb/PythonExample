static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
#define deb(args...)  do  while (0)
#define warn(args...) do  while (0)
#define info(args...) do  while (0)
static int itd1000_write_regs(struct itd1000_state *state, u8 reg, u8 v[], u8 len)
static int itd1000_read_reg(struct itd1000_state *state, u8 reg)
static inline int itd1000_write_reg(struct itd1000_state *state, u8 r, u8 v)
static struct  itd1000_lpf_pga[] = ;
static void itd1000_set_lpf_bw(struct itd1000_state *state, u32 symbol_rate)
static struct  itd1000_vcorg[] = ;
static void itd1000_set_vco(struct itd1000_state *state, u32 freq_khz)
static const struct  itd1000_fre_values[] = ;
#define FREF 16
static void itd1000_set_lo(struct itd1000_state *state, u32 freq_khz)
static int itd1000_set_parameters(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static int itd1000_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int itd1000_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static u8 itd1000_init_tab[][2] = ;
static u8 itd1000_reinit_tab[][2] = ;
static int itd1000_init(struct dvb_frontend *fe)
static int itd1000_sleep(struct dvb_frontend *fe)
static int itd1000_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops itd1000_tuner_ops = ;
struct dvb_frontend *itd1000_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct itd1000_config *cfg)
EXPORT_SYMBOL(itd1000_attach);
MODULE_AUTHOR("Patrick Boettcher <pb@linuxtv.org>");
MODULE_DESCRIPTION("Integrant ITD1000 driver");
MODULE_LICENSE("GPL");
