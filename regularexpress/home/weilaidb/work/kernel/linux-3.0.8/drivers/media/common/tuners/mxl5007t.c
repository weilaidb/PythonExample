static DEFINE_MUTEX(mxl5007t_list_mutex);
static LIST_HEAD(hybrid_tuner_instance_list);
static int mxl5007t_debug;
module_param_named(debug, mxl5007t_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debug level");
#define mxl_printk(kern, fmt, arg...) \
printk(kern "%s: " fmt "\n", __func__, ##arg)
#define mxl_err(fmt, arg...) \
mxl_printk(KERN_ERR, "%d: " fmt, __LINE__, ##arg)
#define mxl_warn(fmt, arg...) \
mxl_printk(KERN_WARNING, fmt, ##arg)
#define mxl_info(fmt, arg...) \
mxl_printk(KERN_INFO, fmt, ##arg)
#define mxl_debug(fmt, arg...)				\
()
#define mxl_fail(ret)							\
()
#define MHz 1000000
enum mxl5007t_mode ;
enum mxl5007t_chip_version ;
struct reg_pair_t ;
static struct reg_pair_t init_tab[] = ;
static struct reg_pair_t init_tab_cable[] = ;
static struct reg_pair_t reg_pair_rftune[] = ;
struct mxl5007t_state ;
static void set_reg_bits(struct reg_pair_t *reg_pair, u8 reg, u8 mask, u8 val)
static void copy_reg_bits(struct reg_pair_t *reg_pair1,
struct reg_pair_t *reg_pair2)
static void mxl5007t_set_mode_bits(struct mxl5007t_state *state,
enum mxl5007t_mode mode,
s32 if_diff_out_level)
static void mxl5007t_set_if_freq_bits(struct mxl5007t_state *state,
enum mxl5007t_if_freq if_freq,
int invert_if)
static void mxl5007t_set_xtal_freq_bits(struct mxl5007t_state *state,
enum mxl5007t_xtal_freq xtal_freq)
static struct reg_pair_t *mxl5007t_calc_init_regs(struct mxl5007t_state *state,
enum mxl5007t_mode mode)
enum mxl5007t_bw_mhz ;
static void mxl5007t_set_bw_bits(struct mxl5007t_state *state,
enum mxl5007t_bw_mhz bw)
static struct
reg_pair_t *mxl5007t_calc_rf_tune_regs(struct mxl5007t_state *state,
u32 rf_freq, enum mxl5007t_bw_mhz bw)
static int mxl5007t_write_reg(struct mxl5007t_state *state, u8 reg, u8 val)
static int mxl5007t_write_regs(struct mxl5007t_state *state,
struct reg_pair_t *reg_pair)
static int mxl5007t_read_reg(struct mxl5007t_state *state, u8 reg, u8 *val)
static int mxl5007t_soft_reset(struct mxl5007t_state *state)
static int mxl5007t_tuner_init(struct mxl5007t_state *state,
enum mxl5007t_mode mode)
static int mxl5007t_tuner_rf_tune(struct mxl5007t_state *state, u32 rf_freq_hz,
enum mxl5007t_bw_mhz bw)
static int mxl5007t_synth_lock_status(struct mxl5007t_state *state,
int *rf_locked, int *ref_locked)
static int mxl5007t_get_status(struct dvb_frontend *fe, u32 *status)
static int mxl5007t_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int mxl5007t_init(struct dvb_frontend *fe)
static int mxl5007t_sleep(struct dvb_frontend *fe)
static int mxl5007t_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int mxl5007t_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int mxl5007t_release(struct dvb_frontend *fe)
static struct dvb_tuner_ops mxl5007t_tuner_ops = ;
static int mxl5007t_get_chip_id(struct mxl5007t_state *state)
struct dvb_frontend *mxl5007t_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, u8 addr,
struct mxl5007t_config *cfg)
EXPORT_SYMBOL_GPL(mxl5007t_attach);
MODULE_DESCRIPTION("MaxLinear MxL5007T Silicon IC tuner driver");
MODULE_AUTHOR("Michael Krufky <mkrufky@linuxtv.org>");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.2");
