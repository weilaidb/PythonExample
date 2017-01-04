static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "set debug level (info=1, reg=2 (or-able))");
#define DBG_INFO 1
#define DBG_REG  2
#define lg_printk(kern, fmt, arg...)					\
printk(kern "%s: " fmt, __func__, ##arg)
#define lg_info(fmt, arg...)	printk(KERN_INFO "lgdt3305: " fmt, ##arg)
#define lg_warn(fmt, arg...)	lg_printk(KERN_WARNING,       fmt, ##arg)
#define lg_err(fmt, arg...)	lg_printk(KERN_ERR,           fmt, ##arg)
#define lg_dbg(fmt, arg...) if (debug & DBG_INFO)			\
lg_printk(KERN_DEBUG,         fmt, ##arg)
#define lg_reg(fmt, arg...) if (debug & DBG_REG)			\
lg_printk(KERN_DEBUG,         fmt, ##arg)
#define lg_fail(ret)							\
()
struct lgdt3305_state ;
#define LGDT3305_GEN_CTRL_1                   0x0000
#define LGDT3305_GEN_CTRL_2                   0x0001
#define LGDT3305_GEN_CTRL_3                   0x0002
#define LGDT3305_GEN_STATUS                   0x0003
#define LGDT3305_GEN_CONTROL                  0x0007
#define LGDT3305_GEN_CTRL_4                   0x000a
#define LGDT3305_DGTL_AGC_REF_1               0x0012
#define LGDT3305_DGTL_AGC_REF_2               0x0013
#define LGDT3305_CR_CTR_FREQ_1                0x0106
#define LGDT3305_CR_CTR_FREQ_2                0x0107
#define LGDT3305_CR_CTR_FREQ_3                0x0108
#define LGDT3305_CR_CTR_FREQ_4                0x0109
#define LGDT3305_CR_MSE_1                     0x011b
#define LGDT3305_CR_MSE_2                     0x011c
#define LGDT3305_CR_LOCK_STATUS               0x011d
#define LGDT3305_CR_CTRL_7                    0x0126
#define LGDT3305_AGC_POWER_REF_1              0x0300
#define LGDT3305_AGC_POWER_REF_2              0x0301
#define LGDT3305_AGC_DELAY_PT_1               0x0302
#define LGDT3305_AGC_DELAY_PT_2               0x0303
#define LGDT3305_RFAGC_LOOP_FLTR_BW_1         0x0306
#define LGDT3305_RFAGC_LOOP_FLTR_BW_2         0x0307
#define LGDT3305_IFBW_1                       0x0308
#define LGDT3305_IFBW_2                       0x0309
#define LGDT3305_AGC_CTRL_1                   0x030c
#define LGDT3305_AGC_CTRL_4                   0x0314
#define LGDT3305_EQ_MSE_1                     0x0413
#define LGDT3305_EQ_MSE_2                     0x0414
#define LGDT3305_EQ_MSE_3                     0x0415
#define LGDT3305_PT_MSE_1                     0x0417
#define LGDT3305_PT_MSE_2                     0x0418
#define LGDT3305_PT_MSE_3                     0x0419
#define LGDT3305_FEC_BLOCK_CTRL               0x0504
#define LGDT3305_FEC_LOCK_STATUS              0x050a
#define LGDT3305_FEC_PKT_ERR_1                0x050c
#define LGDT3305_FEC_PKT_ERR_2                0x050d
#define LGDT3305_TP_CTRL_1                    0x050e
#define LGDT3305_BERT_PERIOD                  0x0801
#define LGDT3305_BERT_ERROR_COUNT_1           0x080a
#define LGDT3305_BERT_ERROR_COUNT_2           0x080b
#define LGDT3305_BERT_ERROR_COUNT_3           0x080c
#define LGDT3305_BERT_ERROR_COUNT_4           0x080d
static int lgdt3305_write_reg(struct lgdt3305_state *state, u16 reg, u8 val)
static int lgdt3305_read_reg(struct lgdt3305_state *state, u16 reg, u8 *val)
#define read_reg(state, reg)						\
()
static int lgdt3305_set_reg_bit(struct lgdt3305_state *state,
u16 reg, int bit, int onoff)
struct lgdt3305_reg ;
static int lgdt3305_write_regs(struct lgdt3305_state *state,
struct lgdt3305_reg *regs, int len)
static int lgdt3305_soft_reset(struct lgdt3305_state *state)
static inline int lgdt3305_mpeg_mode(struct lgdt3305_state *state,
enum lgdt3305_mpeg_mode mode)
static int lgdt3305_mpeg_mode_polarity(struct lgdt3305_state *state,
enum lgdt3305_tp_clock_edge edge,
enum lgdt3305_tp_valid_polarity valid)
static int lgdt3305_set_modulation(struct lgdt3305_state *state,
struct dvb_frontend_parameters *param)
static int lgdt3305_set_filter_extension(struct lgdt3305_state *state,
struct dvb_frontend_parameters *param)
static int lgdt3305_passband_digital_agc(struct lgdt3305_state *state,
struct dvb_frontend_parameters *param)
static int lgdt3305_rfagc_loop(struct lgdt3305_state *state,
struct dvb_frontend_parameters *param)
static int lgdt3305_agc_setup(struct lgdt3305_state *state,
struct dvb_frontend_parameters *param)
static int lgdt3305_set_agc_power_ref(struct lgdt3305_state *state,
struct dvb_frontend_parameters *param)
static int lgdt3305_spectral_inversion(struct lgdt3305_state *state,
struct dvb_frontend_parameters *param,
int inversion)
static int lgdt3305_set_if(struct lgdt3305_state *state,
struct dvb_frontend_parameters *param)
static int lgdt3305_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static int lgdt3305_sleep(struct dvb_frontend *fe)
static int lgdt3305_init(struct dvb_frontend *fe)
static int lgdt3304_set_parameters(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int lgdt3305_set_parameters(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int lgdt3305_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int lgdt3305_read_cr_lock_status(struct lgdt3305_state *state,
int *locked)
static int lgdt3305_read_fec_lock_status(struct lgdt3305_state *state,
int *locked)
static int lgdt3305_read_status(struct dvb_frontend *fe, fe_status_t *status)
static u32 calculate_snr(u32 mse, u32 c)
static int lgdt3305_read_snr(struct dvb_frontend *fe, u16 *snr)
static int lgdt3305_read_signal_strength(struct dvb_frontend *fe,
u16 *strength)
static int lgdt3305_read_ber(struct dvb_frontend *fe, u32 *ber)
static int lgdt3305_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int lgdt3305_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings
*fe_tune_settings)
static void lgdt3305_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops lgdt3304_ops;
static struct dvb_frontend_ops lgdt3305_ops;
struct dvb_frontend *lgdt3305_attach(const struct lgdt3305_config *config,
struct i2c_adapter *i2c_adap)
EXPORT_SYMBOL(lgdt3305_attach);
static struct dvb_frontend_ops lgdt3304_ops = ;
static struct dvb_frontend_ops lgdt3305_ops = ;
MODULE_DESCRIPTION("LG Electronics LGDT3304/5 ATSC/QAM-B Demodulator Driver");
MODULE_AUTHOR("Michael Krufky <mkrufky@linuxtv.org>");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.2");
