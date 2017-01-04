static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "turn on debugging (default: 0)");
#define dprintk(args...) do  while (0)
#define DIB0070_P1D  0x00
#define DIB0070_P1F  0x01
#define DIB0070_P1G  0x03
#define DIB0070S_P1A 0x02
struct dib0070_state ;
static uint16_t dib0070_read_reg(struct dib0070_state *state, u8 reg)
static int dib0070_write_reg(struct dib0070_state *state, u8 reg, u16 val)
#define HARD_RESET(state) do  while (0)
static int dib0070_set_bandwidth(struct dvb_frontend *fe, struct dvb_frontend_parameters *ch)
static int dib0070_captrim(struct dib0070_state *state, enum frontend_tune_state *tune_state)
static int dib0070_set_ctrl_lo5(struct dvb_frontend *fe, u8 vco_bias_trim, u8 hf_div_trim, u8 cp_current, u8 third_order_filt)
void dib0070_ctrl_agc_filter(struct dvb_frontend *fe, u8 open)
EXPORT_SYMBOL(dib0070_ctrl_agc_filter);
struct dib0070_tuning ;
struct dib0070_lna_match ;
static const struct dib0070_tuning dib0070s_tuning_table[] = ;
static const struct dib0070_tuning dib0070_tuning_table[] = ;
static const struct dib0070_lna_match dib0070_lna_flip_chip[] = ;
static const struct dib0070_lna_match dib0070_lna[] = ;
#define LPF	100
static int dib0070_tune_digital(struct dvb_frontend *fe, struct dvb_frontend_parameters *ch)
static int dib0070_tune(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static int dib0070_wakeup(struct dvb_frontend *fe)
static int dib0070_sleep(struct dvb_frontend *fe)
u8 dib0070_get_rf_output(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib0070_get_rf_output);
int dib0070_set_rf_output(struct dvb_frontend *fe, u8 no)
EXPORT_SYMBOL(dib0070_set_rf_output);
static const u16 dib0070_p1f_defaults[] =
;
static u16 dib0070_read_wbd_offset(struct dib0070_state *state, u8 gain)
static void dib0070_wbd_offset_calibration(struct dib0070_state *state)
u16 dib0070_wbd_offset(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib0070_wbd_offset);
#define pgm_read_word(w) (*w)
static int dib0070_reset(struct dvb_frontend *fe)
static int dib0070_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int dib0070_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops dib0070_ops = ;
struct dvb_frontend *dib0070_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct dib0070_config *cfg)
EXPORT_SYMBOL(dib0070_attach);
MODULE_AUTHOR("Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_DESCRIPTION("Driver for the DiBcom 0070 base-band RF Tuner");
MODULE_LICENSE("GPL");
