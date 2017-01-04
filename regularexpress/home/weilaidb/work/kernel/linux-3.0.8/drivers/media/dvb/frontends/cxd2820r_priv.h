#define CXD2820R_PRIV_H
#define LOG_PREFIX "cxd2820r"
#undef dbg
#define dbg(f, arg...) \
if (cxd2820r_debug) \
printk(KERN_INFO   LOG_PREFIX": " f "\n" , ## arg)
#undef err
#define err(f, arg...)  printk(KERN_ERR     LOG_PREFIX": " f "\n" , ## arg)
#undef info
#define info(f, arg...) printk(KERN_INFO    LOG_PREFIX": " f "\n" , ## arg)
#undef warn
#define warn(f, arg...) printk(KERN_WARNING LOG_PREFIX": " f "\n" , ## arg)
struct reg_val_mask ;
struct cxd2820r_priv ;
extern int cxd2820r_debug;
int cxd2820r_gpio(struct dvb_frontend *fe);
int cxd2820r_wr_reg_mask(struct cxd2820r_priv *priv, u32 reg, u8 val,
u8 mask);
int cxd2820r_wr_regs(struct cxd2820r_priv *priv, u32 reginfo, u8 *val,
int len);
u32 cxd2820r_div_u64_round_closest(u64 dividend, u32 divisor);
int cxd2820r_wr_regs(struct cxd2820r_priv *priv, u32 reginfo, u8 *val,
int len);
int cxd2820r_rd_regs(struct cxd2820r_priv *priv, u32 reginfo, u8 *val,
int len);
int cxd2820r_wr_reg(struct cxd2820r_priv *priv, u32 reg, u8 val);
int cxd2820r_rd_reg(struct cxd2820r_priv *priv, u32 reg, u8 *val);
int cxd2820r_get_frontend_c(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p);
int cxd2820r_set_frontend_c(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params);
int cxd2820r_read_status_c(struct dvb_frontend *fe, fe_status_t *status);
int cxd2820r_read_ber_c(struct dvb_frontend *fe, u32 *ber);
int cxd2820r_read_signal_strength_c(struct dvb_frontend *fe, u16 *strength);
int cxd2820r_read_snr_c(struct dvb_frontend *fe, u16 *snr);
int cxd2820r_read_ucblocks_c(struct dvb_frontend *fe, u32 *ucblocks);
int cxd2820r_init_c(struct dvb_frontend *fe);
int cxd2820r_sleep_c(struct dvb_frontend *fe);
int cxd2820r_get_tune_settings_c(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *s);
int cxd2820r_get_frontend_t(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p);
int cxd2820r_set_frontend_t(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params);
int cxd2820r_read_status_t(struct dvb_frontend *fe, fe_status_t *status);
int cxd2820r_read_ber_t(struct dvb_frontend *fe, u32 *ber);
int cxd2820r_read_signal_strength_t(struct dvb_frontend *fe, u16 *strength);
int cxd2820r_read_snr_t(struct dvb_frontend *fe, u16 *snr);
int cxd2820r_read_ucblocks_t(struct dvb_frontend *fe, u32 *ucblocks);
int cxd2820r_init_t(struct dvb_frontend *fe);
int cxd2820r_sleep_t(struct dvb_frontend *fe);
int cxd2820r_get_tune_settings_t(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *s);
int cxd2820r_get_frontend_t2(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p);
int cxd2820r_set_frontend_t2(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params);
int cxd2820r_read_status_t2(struct dvb_frontend *fe, fe_status_t *status);
int cxd2820r_read_ber_t2(struct dvb_frontend *fe, u32 *ber);
int cxd2820r_read_signal_strength_t2(struct dvb_frontend *fe, u16 *strength);
int cxd2820r_read_snr_t2(struct dvb_frontend *fe, u16 *snr);
int cxd2820r_read_ucblocks_t2(struct dvb_frontend *fe, u32 *ucblocks);
int cxd2820r_init_t2(struct dvb_frontend *fe);
int cxd2820r_sleep_t2(struct dvb_frontend *fe);
int cxd2820r_get_tune_settings_t2(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *s);
