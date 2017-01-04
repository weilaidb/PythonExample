static int stvdebug;
module_param_named(debug, stvdebug, int, 0644);
static int i2cdebug;
module_param_named(i2c_debug, i2cdebug, int, 0644);
#define dprintk(args...) \
do  while (0)
struct stv0367cab_state ;
struct stv0367ter_state ;
struct stv0367_state ;
struct st_register ;
static struct st_register def0367ter[STV0367TER_NBREGS] = ;
#define RF_LOOKUP_TABLE_SIZE  31
#define RF_LOOKUP_TABLE2_SIZE 16
s32 stv0367cab_RF_LookUp1[RF_LOOKUP_TABLE_SIZE][RF_LOOKUP_TABLE_SIZE] = ;
s32 stv0367cab_RF_LookUp2[RF_LOOKUP_TABLE2_SIZE][RF_LOOKUP_TABLE2_SIZE] = ;
static struct st_register def0367cab[STV0367CAB_NBREGS] = ;
static
int stv0367_writeregs(struct stv0367_state *state, u16 reg, u8 *data, int len)
static int stv0367_writereg(struct stv0367_state *state, u16 reg, u8 data)
static u8 stv0367_readreg(struct stv0367_state *state, u16 reg)
static void extract_mask_pos(u32 label, u8 *mask, u8 *pos)
static void stv0367_writebits(struct stv0367_state *state, u32 label, u8 val)
static void stv0367_setbits(u8 *reg, u32 label, u8 val)
static u8 stv0367_readbits(struct stv0367_state *state, u32 label)
u8 stv0367_getbits(u8 reg, u32 label)
static int stv0367ter_gate_ctrl(struct dvb_frontend *fe, int enable)
static u32 stv0367_get_tuner_freq(struct dvb_frontend *fe)
static u16 CellsCoeffs_8MHz_367cofdm[3][6][5] = ;
static u16 CellsCoeffs_7MHz_367cofdm[3][6][5] = ;
static u16 CellsCoeffs_6MHz_367cofdm[3][6][5] = ;
static u32 stv0367ter_get_mclk(struct stv0367_state *state, u32 ExtClk_Hz)
static int stv0367ter_filt_coeff_init(struct stv0367_state *state,
u16 CellsCoeffs[3][6][5], u32 DemodXtal)
static void stv0367ter_agc_iir_lock_detect_set(struct stv0367_state *state)
static int stv0367_iir_filt_init(struct stv0367_state *state, u8 Bandwidth,
u32 DemodXtalValue)
static void stv0367ter_agc_iir_rst(struct stv0367_state *state)
static int stv0367ter_duration(s32 mode, int tempo1, int tempo2, int tempo3)
static enum
stv0367_ter_signal_type stv0367ter_check_syr(struct stv0367_state *state)
static enum
stv0367_ter_signal_type stv0367ter_check_cpamp(struct stv0367_state *state,
s32 FFTmode)
enum
stv0367_ter_signal_type stv0367ter_lock_algo(struct stv0367_state *state)
static void stv0367ter_set_ts_mode(struct stv0367_state *state,
enum stv0367_ts_mode PathTS)
static void stv0367ter_set_clk_pol(struct stv0367_state *state,
enum stv0367_clk_pol clock)
static int stv0367ter_standby(struct dvb_frontend *fe, u8 standby_on)
static int stv0367ter_sleep(struct dvb_frontend *fe)
int stv0367ter_init(struct dvb_frontend *fe)
static int stv0367ter_algo(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int stv0367ter_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int stv0367ter_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int stv0367ter_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int stv0367ter_read_snr(struct dvb_frontend *fe, u16 *snr)
static int stv0367ter_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int stv0367ter_read_ber(struct dvb_frontend *fe, u32 *ber)
static int stv0367_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings
*fe_tune_settings)
static void stv0367_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops stv0367ter_ops = ;
struct dvb_frontend *stv0367ter_attach(const struct stv0367_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(stv0367ter_attach);
static int stv0367cab_gate_ctrl(struct dvb_frontend *fe, int enable)
static u32 stv0367cab_get_mclk(struct dvb_frontend *fe, u32 ExtClk_Hz)
static u32 stv0367cab_get_adc_freq(struct dvb_frontend *fe, u32 ExtClk_Hz)
enum stv0367cab_mod stv0367cab_SetQamSize(struct stv0367_state *state,
u32 SymbolRate,
enum stv0367cab_mod QAMSize)
static u32 stv0367cab_set_derot_freq(struct stv0367_state *state,
u32 adc_hz, s32 derot_hz)
static u32 stv0367cab_get_derot_freq(struct stv0367_state *state, u32 adc_hz)
static u32 stv0367cab_set_srate(struct stv0367_state *state, u32 adc_hz,
u32 mclk_hz, u32 SymbolRate,
enum stv0367cab_mod QAMSize)
static u32 stv0367cab_GetSymbolRate(struct stv0367_state *state, u32 mclk_hz)
static int stv0367cab_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int stv0367cab_standby(struct dvb_frontend *fe, u8 standby_on)
static int stv0367cab_sleep(struct dvb_frontend *fe)
int stv0367cab_init(struct dvb_frontend *fe)
static
enum stv0367_cab_signal_type stv0367cab_algo(struct stv0367_state *state,
struct dvb_frontend_parameters *param)
static int stv0367cab_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int stv0367cab_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static s32 stv0367cab_get_rf_lvl(struct stv0367_state *state)
static int stv0367cab_read_strength(struct dvb_frontend *fe, u16 *strength)
static int stv0367cab_read_snr(struct dvb_frontend *fe, u16 *snr)
static int stv0367cab_read_ucblcks(struct dvb_frontend *fe, u32 *ucblocks)
;
static struct dvb_frontend_ops stv0367cab_ops = ;
struct dvb_frontend *stv0367cab_attach(const struct stv0367_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(stv0367cab_attach);
MODULE_PARM_DESC(debug, "Set debug");
MODULE_PARM_DESC(i2c_debug, "Set i2c debug");
MODULE_AUTHOR("Igor M. Liplianin");
MODULE_DESCRIPTION("ST STV0367 DVB-C/T demodulator driver");
MODULE_LICENSE("GPL");
