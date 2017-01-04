static int tda18271_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
;
static void tda18271_dump_regs(struct dvb_frontend *fe, int extended)
int tda18271_read_regs(struct dvb_frontend *fe)
int tda18271_read_extended(struct dvb_frontend *fe)
int tda18271_write_regs(struct dvb_frontend *fe, int idx, int len)
int tda18271_charge_pump_source(struct dvb_frontend *fe,
enum tda18271_pll pll, int force)
int tda18271_init_regs(struct dvb_frontend *fe)
int tda18271_set_standby_mode(struct dvb_frontend *fe,
int sm, int sm_lt, int sm_xt)
int tda18271_calc_main_pll(struct dvb_frontend *fe, u32 freq)
int tda18271_calc_cal_pll(struct dvb_frontend *fe, u32 freq)
int tda18271_calc_bp_filter(struct dvb_frontend *fe, u32 *freq)
int tda18271_calc_km(struct dvb_frontend *fe, u32 *freq)
int tda18271_calc_rf_band(struct dvb_frontend *fe, u32 *freq)
int tda18271_calc_gain_taper(struct dvb_frontend *fe, u32 *freq)
int tda18271_calc_ir_measure(struct dvb_frontend *fe, u32 *freq)
int tda18271_calc_rf_cal(struct dvb_frontend *fe, u32 *freq)
