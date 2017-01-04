static int debug;
#define info(args...) do  while (0)
#define err(args...)  do  while (0)
#define dprintk(args...) \
do  while (0)
struct cx24113_state ;
static int cx24113_writereg(struct cx24113_state *state, int reg, int data)
static int cx24113_readreg(struct cx24113_state *state, u8 reg)
static void cx24113_set_parameters(struct cx24113_state *state)
#define VGA_0 0x00
#define VGA_1 0x04
#define VGA_2 0x02
#define VGA_3 0x06
#define VGA_4 0x01
#define VGA_5 0x05
#define VGA_6 0x03
#define VGA_7 0x07
#define RFVGA_0 0x00
#define RFVGA_1 0x01
#define RFVGA_2 0x02
#define RFVGA_3 0x03
static int cx24113_set_gain_settings(struct cx24113_state *state,
s16 power_estimation)
static int cx24113_set_Fref(struct cx24113_state *state, u8 high)
static int cx24113_enable(struct cx24113_state *state, u8 enable)
static int cx24113_set_bandwidth(struct cx24113_state *state, u32 bandwidth_khz)
static int cx24113_set_clk_inversion(struct cx24113_state *state, u8 on)
static int cx24113_get_status(struct dvb_frontend *fe, u32 *status)
static u8 cx24113_set_ref_div(struct cx24113_state *state, u8 refdiv)
static void cx24113_calc_pll_nf(struct cx24113_state *state, u16 *n, s32 *f)
static void cx24113_set_nfr(struct cx24113_state *state, u16 n, s32 f, u8 r)
static int cx24113_set_frequency(struct cx24113_state *state, u32 frequency)
static int cx24113_init(struct dvb_frontend *fe)
static int cx24113_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static s8 cx24113_agc_table[2][10] = ;
void cx24113_agc_callback(struct dvb_frontend *fe)
EXPORT_SYMBOL(cx24113_agc_callback);
static int cx24113_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int cx24113_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops cx24113_tuner_ops = ;
struct dvb_frontend *cx24113_attach(struct dvb_frontend *fe,
const struct cx24113_config *config, struct i2c_adapter *i2c)
EXPORT_SYMBOL(cx24113_attach);
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activates frontend debugging (default:0)");
MODULE_AUTHOR("Patrick Boettcher <pb@linuxtv.org>");
MODULE_DESCRIPTION("DVB Frontend module for Conexant CX24113/CX24128hardware");
MODULE_LICENSE("GPL");
