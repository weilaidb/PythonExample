static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "turn on debugging (default: 0)");
#define dprintk(args...) do  while (0)
#define CONFIG_SYS_DVBT
#define CONFIG_SYS_ISDBT
#define CONFIG_BAND_CBAND
#define CONFIG_BAND_VHF
#define CONFIG_BAND_UHF
#define CONFIG_DIB0090_USE_PWM_AGC
#define EN_LNA0      0x8000
#define EN_LNA1      0x4000
#define EN_LNA2      0x2000
#define EN_LNA3      0x1000
#define EN_MIX0      0x0800
#define EN_MIX1      0x0400
#define EN_MIX2      0x0200
#define EN_MIX3      0x0100
#define EN_IQADC     0x0040
#define EN_PLL       0x0020
#define EN_TX        0x0010
#define EN_BB        0x0008
#define EN_LO        0x0004
#define EN_BIAS      0x0001
#define EN_IQANA     0x0002
#define EN_DIGCLK    0x0080
#define EN_CRYSTAL   0x0002
#define EN_UHF		 0x22E9
#define EN_VHF		 0x44E9
#define EN_LBD		 0x11E9
#define EN_SBD		 0x44E9
#define EN_CAB		 0x88E9
#define      DC_CAL 0x1
#define     WBD_CAL 0x2
#define    TEMP_CAL 0x4
#define CAPTRIM_CAL 0x8
#define KROSUS_PLL_LOCKED   0x800
#define KROSUS              0x2
#define SOC               0x02
#define SOC_7090_P1G_11R1 0x82
#define SOC_7090_P1G_21R1 0x8a
#define SOC_8090_P1G_11R1 0x86
#define SOC_8090_P1G_21R1 0x8e
#define P1A_B      0x0
#define P1C	   0x1
#define P1D_E_F    0x3
#define P1G	   0x7
#define P1G_21R2   0xf
#define MP001 0x1
#define MP005 0x4
#define MP008 0x6
#define MP009 0x7
#define pgm_read_word(w) (*w)
struct dc_calibration;
struct dib0090_tuning ;
struct dib0090_pll ;
struct dib0090_identity ;
struct dib0090_state ;
struct dib0090_fw_state ;
static u16 dib0090_read_reg(struct dib0090_state *state, u8 reg)
static int dib0090_write_reg(struct dib0090_state *state, u32 reg, u16 val)
static u16 dib0090_fw_read_reg(struct dib0090_fw_state *state, u8 reg)
static int dib0090_fw_write_reg(struct dib0090_fw_state *state, u8 reg, u16 val)
#define HARD_RESET(state) do  while (0)
#define ADC_TARGET -220
#define GAIN_ALPHA 5
#define WBD_ALPHA 6
#define LPF	100
static void dib0090_write_regs(struct dib0090_state *state, u8 r, const u16 * b, u8 c)
static int dib0090_identify(struct dvb_frontend *fe)
static int dib0090_fw_identify(struct dvb_frontend *fe)
static void dib0090_reset_digital(struct dvb_frontend *fe, const struct dib0090_config *cfg)
static int dib0090_fw_reset_digital(struct dvb_frontend *fe, const struct dib0090_config *cfg)
static int dib0090_wakeup(struct dvb_frontend *fe)
static int dib0090_sleep(struct dvb_frontend *fe)
void dib0090_dcc_freq(struct dvb_frontend *fe, u8 fast)
EXPORT_SYMBOL(dib0090_dcc_freq);
static const u16 bb_ramp_pwm_normal_socs[] = ;
static const u16 rf_ramp_pwm_cband_7090[] = ;
static const u16 rf_ramp_pwm_cband_8090[] = ;
static const u16 rf_ramp_pwm_uhf_7090[] = ;
static const u16 rf_ramp_pwm_uhf_8090[] = ;
static const u16 rf_ramp_pwm_cband[] = ;
static const u16 rf_ramp_vhf[] = ;
static const u16 rf_ramp_uhf[] = ;
static const u16 rf_ramp_cband_broadmatching[] =
;
static const u16 rf_ramp_cband[] = ;
static const u16 rf_ramp_pwm_vhf[] = ;
static const u16 rf_ramp_pwm_uhf[] = ;
static const u16 bb_ramp_boost[] = ;
static const u16 bb_ramp_pwm_normal[] = ;
struct slope ;
static u16 slopes_to_scale(const struct slope *slopes, u8 num, s16 val)
static const struct slope dib0090_wbd_slopes[3] = ;
static s16 dib0090_wbd_to_db(struct dib0090_state *state, u16 wbd)
static void dib0090_wbd_target(struct dib0090_state *state, u32 rf)
static const int gain_reg_addr[4] = ;
static void dib0090_gain_apply(struct dib0090_state *state, s16 gain_delta, s16 top_delta, u8 force)
static void dib0090_set_boost(struct dib0090_state *state, int onoff)
static void dib0090_set_rframp(struct dib0090_state *state, const u16 * cfg)
static void dib0090_set_rframp_pwm(struct dib0090_state *state, const u16 * cfg)
static void dib0090_set_bbramp(struct dib0090_state *state, const u16 * cfg)
static void dib0090_set_bbramp_pwm(struct dib0090_state *state, const u16 * cfg)
void dib0090_pwm_gain_reset(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib0090_pwm_gain_reset);
static u32 dib0090_get_slow_adc_val(struct dib0090_state *state)
int dib0090_gain_control(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib0090_gain_control);
void dib0090_get_current_gain(struct dvb_frontend *fe, u16 * rf, u16 * bb, u16 * rf_gain_limit, u16 * rflt)
EXPORT_SYMBOL(dib0090_get_current_gain);
u16 dib0090_get_wbd_offset(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib0090_get_wbd_offset);
static const u16 dib0090_defaults[] = ;
static const u16 dib0090_p1g_additionnal_defaults[] = ;
static void dib0090_set_default_config(struct dib0090_state *state, const u16 * n)
#define CAP_VALUE_MIN (u8)  9
#define CAP_VALUE_MAX (u8) 40
#define HR_MIN	      (u8) 25
#define HR_MAX	      (u8) 40
#define POLY_MIN      (u8)  0
#define POLY_MAX      (u8)  8
void dib0090_set_EFUSE(struct dib0090_state *state)
static int dib0090_reset(struct dvb_frontend *fe)
#define steps(u) (((u) > 15) ? ((u)-16) : (u))
#define INTERN_WAIT 10
static int dib0090_get_offset(struct dib0090_state *state, enum frontend_tune_state *tune_state)
struct dc_calibration ;
static const struct dc_calibration dc_table[] = ;
static const struct dc_calibration dc_p1g_table[] = ;
static void dib0090_set_trim(struct dib0090_state *state)
static int dib0090_dc_offset_calibration(struct dib0090_state *state, enum frontend_tune_state *tune_state)
static int dib0090_wbd_calibration(struct dib0090_state *state, enum frontend_tune_state *tune_state)
static void dib0090_set_bandwidth(struct dib0090_state *state)
static const struct dib0090_pll dib0090_pll_table[] = ;
static const struct dib0090_tuning dib0090_tuning_table_fm_vhf_on_cband[] = ;
static const struct dib0090_tuning dib0090_tuning_table[] = ;
static const struct dib0090_tuning dib0090_p1g_tuning_table[] = ;
static const struct dib0090_pll dib0090_p1g_pll_table[] = ;
static const struct dib0090_tuning dib0090_p1g_tuning_table_fm_vhf_on_cband[] = ;
static const struct dib0090_tuning dib0090_tuning_table_cband_7090[] = ;
static int dib0090_captrim_search(struct dib0090_state *state, enum frontend_tune_state *tune_state)
static int dib0090_get_temperature(struct dib0090_state *state, enum frontend_tune_state *tune_state)
#define WBD     0x781
static int dib0090_tune(struct dvb_frontend *fe)
static int dib0090_release(struct dvb_frontend *fe)
enum frontend_tune_state dib0090_get_tune_state(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib0090_get_tune_state);
int dib0090_set_tune_state(struct dvb_frontend *fe, enum frontend_tune_state tune_state)
EXPORT_SYMBOL(dib0090_set_tune_state);
static int dib0090_get_frequency(struct dvb_frontend *fe, u32 * frequency)
static int dib0090_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static const struct dvb_tuner_ops dib0090_ops = ;
static const struct dvb_tuner_ops dib0090_fw_ops = ;
static const struct dib0090_wbd_slope dib0090_wbd_table_default[] = ;
struct dvb_frontend *dib0090_register(struct dvb_frontend *fe, struct i2c_adapter *i2c, const struct dib0090_config *config)
EXPORT_SYMBOL(dib0090_register);
struct dvb_frontend *dib0090_fw_register(struct dvb_frontend *fe, struct i2c_adapter *i2c, const struct dib0090_config *config)
EXPORT_SYMBOL(dib0090_fw_register);
MODULE_AUTHOR("Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_AUTHOR("Olivier Grenie <olivier.grenie@dibcom.fr>");
MODULE_DESCRIPTION("Driver for the DiBcom 0090 base-band RF Tuner");
MODULE_LICENSE("GPL");
