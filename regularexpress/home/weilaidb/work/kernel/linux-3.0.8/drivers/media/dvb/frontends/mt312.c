struct mt312_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
#define MT312_PLL_CLK		10000000UL
#define MT312_PLL_CLK_10_111	10111000UL
static int mt312_read(struct mt312_state *state, const enum mt312_reg_addr reg,
u8 *buf, const size_t count)
static int mt312_write(struct mt312_state *state, const enum mt312_reg_addr reg,
const u8 *src, const size_t count)
static inline int mt312_readreg(struct mt312_state *state,
const enum mt312_reg_addr reg, u8 *val)
static inline int mt312_writereg(struct mt312_state *state,
const enum mt312_reg_addr reg, const u8 val)
static inline u32 mt312_div(u32 a, u32 b)
static int mt312_reset(struct mt312_state *state, const u8 full)
static int mt312_get_inversion(struct mt312_state *state,
fe_spectral_inversion_t *i)
static int mt312_get_symbol_rate(struct mt312_state *state, u32 *sr)
static int mt312_get_code_rate(struct mt312_state *state, fe_code_rate_t *cr)
static int mt312_initfe(struct dvb_frontend *fe)
static int mt312_send_master_cmd(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *c)
static int mt312_send_burst(struct dvb_frontend *fe, const fe_sec_mini_cmd_t c)
static int mt312_set_tone(struct dvb_frontend *fe, const fe_sec_tone_mode_t t)
static int mt312_set_voltage(struct dvb_frontend *fe, const fe_sec_voltage_t v)
static int mt312_read_status(struct dvb_frontend *fe, fe_status_t *s)
static int mt312_read_ber(struct dvb_frontend *fe, u32 *ber)
static int mt312_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static int mt312_read_snr(struct dvb_frontend *fe, u16 *snr)
static int mt312_read_ucblocks(struct dvb_frontend *fe, u32 *ubc)
static int mt312_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int mt312_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int mt312_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static int mt312_sleep(struct dvb_frontend *fe)
static int mt312_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *fesettings)
static void mt312_release(struct dvb_frontend *fe)
#define MT312_SYS_CLK		90000000UL
static struct dvb_frontend_ops mt312_ops = ;
struct dvb_frontend *mt312_attach(const struct mt312_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(mt312_attach);
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Zarlink VP310/MT312/ZL10313 DVB-S Demodulator driver");
MODULE_AUTHOR("Andreas Oberritter <obi@linuxtv.org>");
MODULE_AUTHOR("Matthias Schwarzott <zzam@gentoo.org>");
MODULE_LICENSE("GPL");
