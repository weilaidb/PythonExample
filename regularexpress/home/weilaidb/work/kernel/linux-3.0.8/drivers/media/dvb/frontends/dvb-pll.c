struct dvb_pll_priv ;
#define DVB_PLL_MAX 64
static unsigned int dvb_pll_devcount;
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable verbose debug messages");
static unsigned int id[DVB_PLL_MAX] =
;
module_param_array(id, int, NULL, 0644);
MODULE_PARM_DESC(id, "force pll id to use (DEBUG ONLY)");
struct dvb_pll_desc ;
static struct dvb_pll_desc dvb_pll_thomson_dtt7579 = ;
static void thomson_dtt759x_bw(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static struct dvb_pll_desc dvb_pll_thomson_dtt759x = ;
static struct dvb_pll_desc dvb_pll_lg_z201 = ;
static struct dvb_pll_desc dvb_pll_unknown_1 = ;
static struct dvb_pll_desc dvb_pll_tua6010xs = ;
static struct dvb_pll_desc dvb_pll_env57h1xd5 = ;
static void tda665x_bw(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static struct dvb_pll_desc dvb_pll_tda665x = ;
static void tua6034_bw(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static struct dvb_pll_desc dvb_pll_tua6034 = ;
static void tded4_bw(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static struct dvb_pll_desc dvb_pll_tded4 = ;
static struct dvb_pll_desc dvb_pll_tdhu2 = ;
static struct dvb_pll_desc dvb_pll_samsung_tbmv = ;
static struct dvb_pll_desc dvb_pll_philips_sd1878_tda8261 = ;
static void opera1_bw(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static struct dvb_pll_desc dvb_pll_opera1 = ;
static void samsung_dtos403ih102a_set(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static struct dvb_pll_desc dvb_pll_samsung_dtos403ih102a = ;
static struct dvb_pll_desc dvb_pll_samsung_tdtc9251dh0 = ;
static struct dvb_pll_desc dvb_pll_samsung_tbdu18132 = ;
static struct dvb_pll_desc dvb_pll_samsung_tbmu24112 = ;
static struct dvb_pll_desc dvb_pll_alps_tdee4 = ;
static struct dvb_pll_desc *pll_list[] = ;
static int dvb_pll_configure(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static int dvb_pll_release(struct dvb_frontend *fe)
static int dvb_pll_sleep(struct dvb_frontend *fe)
static int dvb_pll_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int dvb_pll_calc_regs(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params,
u8 *buf, int buf_len)
static int dvb_pll_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int dvb_pll_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int dvb_pll_init(struct dvb_frontend *fe)
static struct dvb_tuner_ops dvb_pll_tuner_ops = ;
struct dvb_frontend *dvb_pll_attach(struct dvb_frontend *fe, int pll_addr,
struct i2c_adapter *i2c,
unsigned int pll_desc_id)
EXPORT_SYMBOL(dvb_pll_attach);
MODULE_DESCRIPTION("dvb pll library");
MODULE_AUTHOR("Gerd Knorr");
MODULE_LICENSE("GPL");
