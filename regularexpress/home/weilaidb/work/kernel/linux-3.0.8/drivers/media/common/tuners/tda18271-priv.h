#define __TDA18271_PRIV_H__
#define R_ID     0x00
#define R_TM     0x01
#define R_PL     0x02
#define R_EP1    0x03
#define R_EP2    0x04
#define R_EP3    0x05
#define R_EP4    0x06
#define R_EP5    0x07
#define R_CPD    0x08
#define R_CD1    0x09
#define R_CD2    0x0a
#define R_CD3    0x0b
#define R_MPD    0x0c
#define R_MD1    0x0d
#define R_MD2    0x0e
#define R_MD3    0x0f
#define R_EB1    0x10
#define R_EB2    0x11
#define R_EB3    0x12
#define R_EB4    0x13
#define R_EB5    0x14
#define R_EB6    0x15
#define R_EB7    0x16
#define R_EB8    0x17
#define R_EB9    0x18
#define R_EB10   0x19
#define R_EB11   0x1a
#define R_EB12   0x1b
#define R_EB13   0x1c
#define R_EB14   0x1d
#define R_EB15   0x1e
#define R_EB16   0x1f
#define R_EB17   0x20
#define R_EB18   0x21
#define R_EB19   0x22
#define R_EB20   0x23
#define R_EB21   0x24
#define R_EB22   0x25
#define R_EB23   0x26
#define TDA18271_NUM_REGS 39
struct tda18271_rf_tracking_filter_cal ;
enum tda18271_pll ;
struct tda18271_map_layout;
enum tda18271_ver ;
struct tda18271_priv ;
extern int tda18271_debug;
#define DBG_INFO 1
#define DBG_MAP  2
#define DBG_REG  4
#define DBG_ADV  8
#define DBG_CAL  16
#define tda_printk(st, kern, fmt, arg...) do  while (0)
#define tda_dprintk(st, lvl, fmt, arg...) do  while (0)
#define tda_info(fmt, arg...)     printk(KERN_INFO     fmt, ##arg)
#define tda_warn(fmt, arg...) tda_printk(priv, KERN_WARNING, fmt, ##arg)
#define tda_err(fmt, arg...)  tda_printk(priv, KERN_ERR,     fmt, ##arg)
#define tda_dbg(fmt, arg...)  tda_dprintk(priv, DBG_INFO,    fmt, ##arg)
#define tda_map(fmt, arg...)  tda_dprintk(priv, DBG_MAP,     fmt, ##arg)
#define tda_reg(fmt, arg...)  tda_dprintk(priv, DBG_REG,     fmt, ##arg)
#define tda_cal(fmt, arg...)  tda_dprintk(priv, DBG_CAL,     fmt, ##arg)
#define tda_fail(ret)							     \
()
enum tda18271_map_type ;
extern int tda18271_lookup_pll_map(struct dvb_frontend *fe,
enum tda18271_map_type map_type,
u32 *freq, u8 *post_div, u8 *div);
extern int tda18271_lookup_map(struct dvb_frontend *fe,
enum tda18271_map_type map_type,
u32 *freq, u8 *val);
extern int tda18271_lookup_thermometer(struct dvb_frontend *fe);
extern int tda18271_lookup_rf_band(struct dvb_frontend *fe,
u32 *freq, u8 *rf_band);
extern int tda18271_lookup_cid_target(struct dvb_frontend *fe,
u32 *freq, u8 *cid_target,
u16 *count_limit);
extern int tda18271_assign_map_layout(struct dvb_frontend *fe);
extern int tda18271_read_regs(struct dvb_frontend *fe);
extern int tda18271_read_extended(struct dvb_frontend *fe);
extern int tda18271_write_regs(struct dvb_frontend *fe, int idx, int len);
extern int tda18271_init_regs(struct dvb_frontend *fe);
extern int tda18271_charge_pump_source(struct dvb_frontend *fe,
enum tda18271_pll pll, int force);
extern int tda18271_set_standby_mode(struct dvb_frontend *fe,
int sm, int sm_lt, int sm_xt);
extern int tda18271_calc_main_pll(struct dvb_frontend *fe, u32 freq);
extern int tda18271_calc_cal_pll(struct dvb_frontend *fe, u32 freq);
extern int tda18271_calc_bp_filter(struct dvb_frontend *fe, u32 *freq);
extern int tda18271_calc_km(struct dvb_frontend *fe, u32 *freq);
extern int tda18271_calc_rf_band(struct dvb_frontend *fe, u32 *freq);
extern int tda18271_calc_gain_taper(struct dvb_frontend *fe, u32 *freq);
extern int tda18271_calc_ir_measure(struct dvb_frontend *fe, u32 *freq);
extern int tda18271_calc_rf_cal(struct dvb_frontend *fe, u32 *freq);
