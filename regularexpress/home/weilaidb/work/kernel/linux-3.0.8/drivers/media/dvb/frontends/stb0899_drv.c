static unsigned int verbose = 0;
module_param(verbose, int, 0644);
static const struct stb0899_tab stb0899_cn_tab[] = ;
static const struct stb0899_tab stb0899_dvbsrf_tab[] = ;
static const struct stb0899_tab stb0899_dvbs2rf_tab[] = ;
static struct stb0899_tab stb0899_quant_tab[] = ;
static struct stb0899_tab stb0899_est_tab[] = ;
static int _stb0899_read_reg(struct stb0899_state *state, unsigned int reg)
int stb0899_read_reg(struct stb0899_state *state, unsigned int reg)
u32 _stb0899_read_s2reg(struct stb0899_state *state,
u32 stb0899_i2cdev,
u32 stb0899_base_addr,
u16 stb0899_reg_offset)
int stb0899_write_s2reg(struct stb0899_state *state,
u32 stb0899_i2cdev,
u32 stb0899_base_addr,
u16 stb0899_reg_offset,
u32 stb0899_data)
int stb0899_read_regs(struct stb0899_state *state, unsigned int reg, u8 *buf, u32 count)
int stb0899_write_regs(struct stb0899_state *state, unsigned int reg, u8 *data, u32 count)
int stb0899_write_reg(struct stb0899_state *state, unsigned int reg, u8 data)
static u32 stb0899_get_mclk(struct stb0899_state *state)
static void stb0899_set_mclk(struct stb0899_state *state, u32 Mclk)
static int stb0899_postproc(struct stb0899_state *state, u8 ctl, int enable)
static void stb0899_release(struct dvb_frontend *fe)
static int stb0899_get_alpha(struct stb0899_state *state)
static void stb0899_init_calc(struct stb0899_state *state)
static int stb0899_wait_diseqc_fifo_empty(struct stb0899_state *state, int timeout)
static int stb0899_send_diseqc_msg(struct dvb_frontend *fe, struct dvb_diseqc_master_cmd *cmd)
static int stb0899_wait_diseqc_rxidle(struct stb0899_state *state, int timeout)
static int stb0899_recv_slave_reply(struct dvb_frontend *fe, struct dvb_diseqc_slave_reply *reply)
static int stb0899_wait_diseqc_txidle(struct stb0899_state *state, int timeout)
static int stb0899_send_diseqc_burst(struct dvb_frontend *fe, fe_sec_mini_cmd_t burst)
static int stb0899_diseqc_init(struct stb0899_state *state)
static int stb0899_sleep(struct dvb_frontend *fe)
static int stb0899_wakeup(struct dvb_frontend *fe)
static int stb0899_init(struct dvb_frontend *fe)
static int stb0899_table_lookup(const struct stb0899_tab *tab, int max, int val)
static int stb0899_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int stb0899_read_snr(struct dvb_frontend *fe, u16 *snr)
static int stb0899_read_status(struct dvb_frontend *fe, enum fe_status *status)
static int stb0899_read_ber(struct dvb_frontend *fe, u32 *ber)
static int stb0899_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int stb0899_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
int stb0899_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static inline void CONVERT32(u32 x, char *str)
int stb0899_get_dev_id(struct stb0899_state *state)
static void stb0899_set_delivery(struct stb0899_state *state)
static void stb0899_set_iterations(struct stb0899_state *state)
static enum dvbfe_search stb0899_search(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static int stb0899_track(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static int stb0899_get_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static enum dvbfe_algo stb0899_frontend_algo(struct dvb_frontend *fe)
static struct dvb_frontend_ops stb0899_ops = ;
struct dvb_frontend *stb0899_attach(struct stb0899_config *config, struct i2c_adapter *i2c)
EXPORT_SYMBOL(stb0899_attach);
MODULE_PARM_DESC(verbose, "Set Verbosity level");
MODULE_AUTHOR("Manu Abraham");
MODULE_DESCRIPTION("STB0899 Multi-Std frontend");
MODULE_LICENSE("GPL");
