#define LAYER_ALL -1
#define LAYER_A   1
#define LAYER_B   2
#define LAYER_C   3
#define FE_CALLBACK_TIME_NEVER 0xffffffff
#define MAX_NUMBER_OF_FRONTENDS 6
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "turn on debugging (default: 0)");
#define dprintk(args...) do  while (0)
#define FE_STATUS_TUNE_FAILED 0
struct i2c_device ;
struct dib8000_state ;
enum dib8000_power_mode ;
static u16 dib8000_i2c_read16(struct i2c_device *i2c, u16 reg)
static u16 dib8000_read_word(struct dib8000_state *state, u16 reg)
static u32 dib8000_read32(struct dib8000_state *state, u16 reg)
static int dib8000_i2c_write16(struct i2c_device *i2c, u16 reg, u16 val)
static int dib8000_write_word(struct dib8000_state *state, u16 reg, u16 val)
static const s16 coeff_2k_sb_1seg_dqpsk[8] = ;
static const s16 coeff_2k_sb_1seg[8] = ;
static const s16 coeff_2k_sb_3seg_0dqpsk_1dqpsk[8] = ;
static const s16 coeff_2k_sb_3seg_0dqpsk[8] = ;
static const s16 coeff_2k_sb_3seg_1dqpsk[8] = ;
static const s16 coeff_2k_sb_3seg[8] = ;
static const s16 coeff_4k_sb_1seg_dqpsk[8] = ;
static const s16 coeff_4k_sb_1seg[8] = ;
static const s16 coeff_4k_sb_3seg_0dqpsk_1dqpsk[8] = ;
static const s16 coeff_4k_sb_3seg_0dqpsk[8] = ;
static const s16 coeff_4k_sb_3seg_1dqpsk[8] = ;
static const s16 coeff_4k_sb_3seg[8] = ;
static const s16 coeff_8k_sb_1seg_dqpsk[8] = ;
static const s16 coeff_8k_sb_1seg[8] = ;
static const s16 coeff_8k_sb_3seg_0dqpsk_1dqpsk[8] = ;
static const s16 coeff_8k_sb_3seg_0dqpsk[8] = ;
static const s16 coeff_8k_sb_3seg_1dqpsk[8] = ;
static const s16 coeff_8k_sb_3seg[8] = ;
static const s16 ana_fe_coeff_3seg[24] = ;
static const s16 ana_fe_coeff_1seg[24] = ;
static const s16 ana_fe_coeff_13seg[24] = ;
static u16 fft_to_mode(struct dib8000_state *state)
static void dib8000_set_acquisition_mode(struct dib8000_state *state)
static int dib8000_set_output_mode(struct dvb_frontend *fe, int mode)
static int dib8000_set_diversity_in(struct dvb_frontend *fe, int onoff)
static void dib8000_set_power_mode(struct dib8000_state *state, enum dib8000_power_mode mode)
static int dib8000_set_adc_state(struct dib8000_state *state, enum dibx000_adc_states no)
static int dib8000_set_bandwidth(struct dvb_frontend *fe, u32 bw)
static int dib8000_sad_calib(struct dib8000_state *state)
int dib8000_set_wbd_ref(struct dvb_frontend *fe, u16 value)
EXPORT_SYMBOL(dib8000_set_wbd_ref);
static void dib8000_reset_pll_common(struct dib8000_state *state, const struct dibx000_bandwidth_config *bw)
static void dib8000_reset_pll(struct dib8000_state *state)
static int dib8000_reset_gpio(struct dib8000_state *st)
static int dib8000_cfg_gpio(struct dib8000_state *st, u8 num, u8 dir, u8 val)
int dib8000_set_gpio(struct dvb_frontend *fe, u8 num, u8 dir, u8 val)
EXPORT_SYMBOL(dib8000_set_gpio);
static const u16 dib8000_defaults[] = ;
static u16 dib8000_identify(struct i2c_device *client)
static int dib8000_reset(struct dvb_frontend *fe)
static void dib8000_restart_agc(struct dib8000_state *state)
static int dib8000_update_lna(struct dib8000_state *state)
static int dib8000_set_agc_config(struct dib8000_state *state, u8 band)
void dib8000_pwm_agc_reset(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib8000_pwm_agc_reset);
static int dib8000_agc_soft_split(struct dib8000_state *state)
static int dib8000_agc_startup(struct dvb_frontend *fe)
static const s32 lut_1000ln_mant[] =
;
s32 dib8000_get_adc_power(struct dvb_frontend *fe, u8 mode)
EXPORT_SYMBOL(dib8000_get_adc_power);
static void dib8000_update_timf(struct dib8000_state *state)
static const u16 adc_target_16dB[11] = ;
static const u8 permu_seg[] = ;
static void dib8000_set_channel(struct dib8000_state *state, u8 seq, u8 autosearching)
else if (state->isdbt_cfg_loaded == 0)
if (state->fe[0]->dtv_property_cache.isdbt_sb_mode == 1 && state->fe[0]->dtv_property_cache.isdbt_partial_reception == 0)
dib8000_write_word(state, 178, 64);
else
dib8000_write_word(state, 178, 32);
dib8000_write_word(state, 189, ~seg_mask13 | seg_diff_mask);
dib8000_write_word(state, 192, ~seg_mask13 | seg_diff_mask);
dib8000_write_word(state, 225, ~seg_mask13 | seg_diff_mask);
if ((!state->fe[0]->dtv_property_cache.isdbt_sb_mode) && (state->cfg.pll->ifreq == 0))
dib8000_write_word(state, 266, ~seg_mask13 | seg_diff_mask | 0x40);
else
dib8000_write_word(state, 266, ~seg_mask13 | seg_diff_mask);
dib8000_write_word(state, 287, ~seg_mask13 | 0x1000);
if (!autosearching)
dib8000_write_word(state, 288, (~seg_mask13 | seg_diff_mask) & 0x1fff);
else
dib8000_write_word(state, 288, 0x1fff);
dprintk("287 = %X (%d)", ~seg_mask13 | 0x1000, ~seg_mask13 | 0x1000);
dib8000_write_word(state, 211, seg_mask13 & (~seg_diff_mask));
if (state->fe[0]->dtv_property_cache.isdbt_sb_mode == 1)  else
dib8000_write_word(state, 32, ((9 - mode) << 12) | (6 << 8) | 0x80);
if (state->fe[0]->dtv_property_cache.isdbt_sb_mode == 1)  else
dib8000_write_word(state, 37, (3 << 5) | (0 << 4) | (8 - mode));
switch (state->fe[0]->dtv_property_cache.transmission_mode)
if (state->cfg.diversity_delay == 0)
mode = (mode * (1 << (guard)) * 3) / 2 + 48;
else
mode = (mode * (1 << (guard)) * 3) / 2 + state->cfg.diversity_delay;
mode <<= 4;
dib8000_write_word(state, 273, (dib8000_read_word(state, 273) & 0x000f) | mode);
switch (max_constellation)
for (mode = 0; mode < 4; mode++)
dib8000_write_word(state, 215 + mode, coeff[mode]);
dib8000_write_word(state, 116, ana_gain);
if (ana_gain)  else
if (state->fe[0]->dtv_property_cache.isdbt_sb_mode)  else
ana_fe = ana_fe_coeff_13seg;
if (state->fe[0]->dtv_property_cache.isdbt_sb_mode == 1 || state->isdbt_cfg_loaded == 0)
for (mode = 0; mode < 24; mode++)
dib8000_write_word(state, 117 + mode, ana_fe[mode]);
for (i = 0; i < 13; i++)
dib8000_write_word(state, 222, P_cfr_left_edge);
dib8000_write_word(state, 223, P_cfr_right_edge);
if (state->fe[0]->dtv_property_cache.isdbt_sb_mode == 1)  else if (state->isdbt_cfg_loaded == 0)
for (i = 0; i < 3; i++)
tmcc_pow +=
(((state->fe[0]->dtv_property_cache.layer[i].modulation == DQPSK) * 4 + 1) * state->fe[0]->dtv_property_cache.layer[i].segment_count);
tmcc_pow *= (1 << (9 - 2));
dib8000_write_word(state, 290, tmcc_pow);
dib8000_write_word(state, 291, tmcc_pow);
dib8000_write_word(state, 292, tmcc_pow);
if (state->isdbt_cfg_loaded == 0)
dib8000_write_word(state, 250, 3285);
if (state->fe[0]->dtv_property_cache.isdbt_sb_mode == 1)
state->isdbt_cfg_loaded = 0;
else
state->isdbt_cfg_loaded = 1;
}
static int dib8000_autosearch_start(struct dvb_frontend *fe)
static int dib8000_autosearch_irq(struct dvb_frontend *fe)
static int dib8000_tune(struct dvb_frontend *fe)
static int dib8000_wakeup(struct dvb_frontend *fe)
static int dib8000_sleep(struct dvb_frontend *fe)
enum frontend_tune_state dib8000_get_tune_state(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib8000_get_tune_state);
int dib8000_set_tune_state(struct dvb_frontend *fe, enum frontend_tune_state tune_state)
EXPORT_SYMBOL(dib8000_set_tune_state);
static int dib8000_get_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static int dib8000_set_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static u16 dib8000_read_lock(struct dvb_frontend *fe)
static int dib8000_read_status(struct dvb_frontend *fe, fe_status_t * stat)
static int dib8000_read_ber(struct dvb_frontend *fe, u32 * ber)
static int dib8000_read_unc_blocks(struct dvb_frontend *fe, u32 * unc)
static int dib8000_read_signal_strength(struct dvb_frontend *fe, u16 * strength)
static u32 dib8000_get_snr(struct dvb_frontend *fe)
static int dib8000_read_snr(struct dvb_frontend *fe, u16 * snr)
int dib8000_set_slave_frontend(struct dvb_frontend *fe, struct dvb_frontend *fe_slave)
EXPORT_SYMBOL(dib8000_set_slave_frontend);
int dib8000_remove_slave_frontend(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib8000_remove_slave_frontend);
struct dvb_frontend *dib8000_get_slave_frontend(struct dvb_frontend *fe, int slave_index)
EXPORT_SYMBOL(dib8000_get_slave_frontend);
int dib8000_i2c_enumeration(struct i2c_adapter *host, int no_of_demods, u8 default_addr, u8 first_addr)
EXPORT_SYMBOL(dib8000_i2c_enumeration);
static int dib8000_fe_get_tune_settings(struct dvb_frontend *fe, struct dvb_frontend_tune_settings *tune)
static void dib8000_release(struct dvb_frontend *fe)
struct i2c_adapter *dib8000_get_i2c_master(struct dvb_frontend *fe, enum dibx000_i2c_interface intf, int gating)
EXPORT_SYMBOL(dib8000_get_i2c_master);
int dib8000_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff)
EXPORT_SYMBOL(dib8000_pid_filter_ctrl);
int dib8000_pid_filter(struct dvb_frontend *fe, u8 id, u16 pid, u8 onoff)
EXPORT_SYMBOL(dib8000_pid_filter);
static const struct dvb_frontend_ops dib8000_ops = ;
struct dvb_frontend *dib8000_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib8000_config *cfg)
EXPORT_SYMBOL(dib8000_attach);
MODULE_AUTHOR("Olivier Grenie <Olivier.Grenie@dibcom.fr, " "Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_DESCRIPTION("Driver for the DiBcom 8000 ISDB-T demodulator");
MODULE_LICENSE("GPL");
