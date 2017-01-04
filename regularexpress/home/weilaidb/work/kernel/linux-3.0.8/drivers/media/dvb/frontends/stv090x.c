static unsigned int verbose;
module_param(verbose, int, 0644);
struct stv090x_dev ;
static struct stv090x_dev *stv090x_first_dev;
static struct stv090x_dev *find_dev(struct i2c_adapter *i2c_adap,
u8 i2c_addr)
static void remove_dev(struct stv090x_internal *internal)
static struct stv090x_dev *append_internal(struct stv090x_internal *internal)
static const struct stv090x_tab stv090x_s1cn_tab[] = ;
static const struct stv090x_tab stv090x_s2cn_tab[] = ;
static const struct stv090x_tab stv090x_rf_tab[] = ;
static struct stv090x_reg stv0900_initval[] = ;
static struct stv090x_reg stv0903_initval[] = ;
static struct stv090x_reg stv0900_cut20_val[] = ;
static struct stv090x_reg stv0903_cut20_val[] = ;
static struct stv090x_long_frame_crloop stv090x_s2_crl_cut20[] = ;
static	struct stv090x_long_frame_crloop stv090x_s2_crl_cut30[] = ;
static struct stv090x_long_frame_crloop stv090x_s2_apsk_crl_cut20[] = ;
static struct stv090x_long_frame_crloop	stv090x_s2_apsk_crl_cut30[] = ;
static struct stv090x_long_frame_crloop stv090x_s2_lowqpsk_crl_cut20[] = ;
static struct stv090x_long_frame_crloop	stv090x_s2_lowqpsk_crl_cut30[] = ;
static struct stv090x_short_frame_crloop stv090x_s2_short_crl_cut20[] = ;
static struct stv090x_short_frame_crloop stv090x_s2_short_crl_cut30[] = ;
static inline s32 comp2(s32 __x, s32 __width)
static int stv090x_read_reg(struct stv090x_state *state, unsigned int reg)
static int stv090x_write_regs(struct stv090x_state *state, unsigned int reg, u8 *data, u32 count)
static int stv090x_write_reg(struct stv090x_state *state, unsigned int reg, u8 data)
static int stv090x_i2c_gate_ctrl(struct stv090x_state *state, int enable)
static void stv090x_get_lock_tmg(struct stv090x_state *state)
static int stv090x_set_srate(struct stv090x_state *state, u32 srate)
static int stv090x_set_max_srate(struct stv090x_state *state, u32 clk, u32 srate)
static int stv090x_set_min_srate(struct stv090x_state *state, u32 clk, u32 srate)
static u32 stv090x_car_width(u32 srate, enum stv090x_rolloff rolloff)
static int stv090x_set_vit_thacq(struct stv090x_state *state)
static int stv090x_set_vit_thtracq(struct stv090x_state *state)
static int stv090x_set_viterbi(struct stv090x_state *state)
static int stv090x_stop_modcod(struct stv090x_state *state)
static int stv090x_activate_modcod(struct stv090x_state *state)
static int stv090x_activate_modcod_single(struct stv090x_state *state)
static int stv090x_vitclk_ctl(struct stv090x_state *state, int enable)
static int stv090x_dvbs_track_crl(struct stv090x_state *state)
static int stv090x_delivery_search(struct stv090x_state *state)
static int stv090x_start_search(struct stv090x_state *state)
static int stv090x_get_agc2_min_level(struct stv090x_state *state)
static u32 stv090x_get_srate(struct stv090x_state *state, u32 clk)
static u32 stv090x_srate_srch_coarse(struct stv090x_state *state)
static u32 stv090x_srate_srch_fine(struct stv090x_state *state)
static int stv090x_get_dmdlock(struct stv090x_state *state, s32 timeout)
static int stv090x_blind_search(struct stv090x_state *state)
static int stv090x_chk_tmg(struct stv090x_state *state)
static int stv090x_get_coldlock(struct stv090x_state *state, s32 timeout_dmd)
static int stv090x_get_loop_params(struct stv090x_state *state, s32 *freq_inc, s32 *timeout_sw, s32 *steps)
static int stv090x_chk_signal(struct stv090x_state *state)
static int stv090x_search_car_loop(struct stv090x_state *state, s32 inc, s32 timeout, int zigzag, s32 steps_max)
static int stv090x_sw_algo(struct stv090x_state *state)
static enum stv090x_delsys stv090x_get_std(struct stv090x_state *state)
static s32 stv090x_get_car_freq(struct stv090x_state *state, u32 mclk)
static int stv090x_get_viterbi(struct stv090x_state *state)
static enum stv090x_signal_state stv090x_get_sig_params(struct stv090x_state *state)
static u32 stv090x_get_tmgoffst(struct stv090x_state *state, u32 srate)
static u8 stv090x_optimize_carloop(struct stv090x_state *state, enum stv090x_modcod modcod, s32 pilots)
static u8 stv090x_optimize_carloop_short(struct stv090x_state *state)
static int stv090x_optimize_track(struct stv090x_state *state)
static int stv090x_get_feclock(struct stv090x_state *state, s32 timeout)
static int stv090x_get_lock(struct stv090x_state *state, s32 timeout_dmd, s32 timeout_fec)
static int stv090x_set_s2rolloff(struct stv090x_state *state)
static enum stv090x_signal_state stv090x_algo(struct stv090x_state *state)
static enum dvbfe_search stv090x_search(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static int stv090x_read_status(struct dvb_frontend *fe, enum fe_status *status)
static int stv090x_read_per(struct dvb_frontend *fe, u32 *per)
static int stv090x_table_lookup(const struct stv090x_tab *tab, int max, int val)
static int stv090x_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int stv090x_read_cnr(struct dvb_frontend *fe, u16 *cnr)
static int stv090x_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static enum dvbfe_algo stv090x_frontend_algo(struct dvb_frontend *fe)
static int stv090x_send_diseqc_msg(struct dvb_frontend *fe, struct dvb_diseqc_master_cmd *cmd)
static int stv090x_send_diseqc_burst(struct dvb_frontend *fe, fe_sec_mini_cmd_t burst)
static int stv090x_recv_slave_reply(struct dvb_frontend *fe, struct dvb_diseqc_slave_reply *reply)
static int stv090x_sleep(struct dvb_frontend *fe)
static int stv090x_wakeup(struct dvb_frontend *fe)
static void stv090x_release(struct dvb_frontend *fe)
static int stv090x_ldpc_mode(struct stv090x_state *state, enum stv090x_mode ldpc_mode)
static u32 stv090x_get_mclk(struct stv090x_state *state)
static int stv090x_set_mclk(struct stv090x_state *state, u32 mclk, u32 clk)
static int stv090x_set_tspath(struct stv090x_state *state)
static int stv090x_init(struct dvb_frontend *fe)
static int stv090x_setup(struct dvb_frontend *fe)
int stv090x_set_gpio(struct dvb_frontend *fe, u8 gpio, u8 dir, u8 value,
u8 xor_value)
EXPORT_SYMBOL(stv090x_set_gpio);
static struct dvb_frontend_ops stv090x_ops = ;
struct dvb_frontend *stv090x_attach(const struct stv090x_config *config,
struct i2c_adapter *i2c,
enum stv090x_demodulator demod)
EXPORT_SYMBOL(stv090x_attach);
MODULE_PARM_DESC(verbose, "Set Verbosity level");
MODULE_AUTHOR("Manu Abraham");
MODULE_DESCRIPTION("STV090x Multi-Std Broadcast frontend");
MODULE_LICENSE("GPL");
