#define	REVISION_REG			0x00
#define	SYSTEM_MODE_REG			0x01
#define	TS_CTRL_REG_1			0x02
#define	TS_CTRL_REG_2			0x03
#define	PIN_CTRL_REG_1			0x04
#define	PIN_CTRL_REG_2			0x05
#define	LOCK_STATUS_REG_1		0x0f
#define	LOCK_STATUS_REG_2		0x10
#define	ACQ_STATUS_REG			0x11
#define	ACQ_CTRL_REG_1			0x13
#define	ACQ_CTRL_REG_2			0x14
#define	PLL_DIVISOR_REG			0x15
#define	COARSE_TUNE_REG			0x16
#define	FINE_TUNE_REG_L			0x17
#define	FINE_TUNE_REG_H			0x18
#define	ANALOG_AGC_POWER_LEVEL_REG	0x28
#define	CFO_ESTIMATOR_CTRL_REG_1	0x29
#define	CFO_ESTIMATOR_CTRL_REG_2	0x2a
#define	CFO_ESTIMATOR_CTRL_REG_3	0x2b
#define	SYM_RATE_ESTIMATE_REG_L		0x31
#define	SYM_RATE_ESTIMATE_REG_M		0x32
#define	SYM_RATE_ESTIMATE_REG_H		0x33
#define	CFO_ESTIMATOR_OFFSET_REG_L	0x36
#define	CFO_ESTIMATOR_OFFSET_REG_H	0x37
#define	CFO_ERROR_REG_L			0x38
#define	CFO_ERROR_REG_H			0x39
#define	SYM_RATE_ESTIMATOR_CTRL_REG	0x3a
#define	SYM_RATE_REG_L			0x3f
#define	SYM_RATE_REG_M			0x40
#define	SYM_RATE_REG_H			0x41
#define	SYM_RATE_ESTIMATOR_MAXIMUM_REG	0x42
#define	SYM_RATE_ESTIMATOR_MINIMUM_REG	0x43
#define	C_N_ESTIMATOR_CTRL_REG		0x7c
#define	C_N_ESTIMATOR_THRSHLD_REG	0x7d
#define	C_N_ESTIMATOR_LEVEL_REG_L	0x7e
#define	C_N_ESTIMATOR_LEVEL_REG_H	0x7f
#define	BLIND_SCAN_CTRL_REG		0x80
#define	LSA_CTRL_REG_1			0x8D
#define	SPCTRM_TILT_CORR_THRSHLD_REG	0x8f
#define	ONE_DB_BNDWDTH_THRSHLD_REG	0x90
#define	TWO_DB_BNDWDTH_THRSHLD_REG	0x91
#define	THREE_DB_BNDWDTH_THRSHLD_REG	0x92
#define	INBAND_POWER_THRSHLD_REG	0x93
#define	REF_NOISE_LVL_MRGN_THRSHLD_REG	0x94
#define	VIT_SRCH_CTRL_REG_1		0xa0
#define	VIT_SRCH_CTRL_REG_2		0xa1
#define	VIT_SRCH_CTRL_REG_3		0xa2
#define	VIT_SRCH_STATUS_REG		0xa3
#define	VITERBI_BER_COUNT_REG_L		0xab
#define	REED_SOLOMON_CTRL_REG		0xb0
#define	REED_SOLOMON_ERROR_COUNT_REG_L	0xb1
#define	PRBS_CTRL_REG			0xb5
#define	LNB_CTRL_REG_1			0xc0
#define	LNB_CTRL_REG_2			0xc1
#define	LNB_CTRL_REG_3			0xc2
#define	LNB_CTRL_REG_4			0xc3
#define	LNB_CTRL_STATUS_REG		0xc4
#define	LNB_FIFO_REGS_0			0xc5
#define	LNB_FIFO_REGS_1			0xc6
#define	LNB_FIFO_REGS_2			0xc7
#define	LNB_FIFO_REGS_3			0xc8
#define	LNB_FIFO_REGS_4			0xc9
#define	LNB_FIFO_REGS_5			0xca
#define	LNB_SUPPLY_CTRL_REG_1		0xcb
#define	LNB_SUPPLY_CTRL_REG_2		0xcc
#define	LNB_SUPPLY_CTRL_REG_3		0xcd
#define	LNB_SUPPLY_CTRL_REG_4		0xce
#define	LNB_SUPPLY_STATUS_REG		0xcf
#define FAIL	-1
#define PASS	0
#define ALLOWABLE_FS_COUNT	10
#define STATUS_BER		0
#define STATUS_UCBLOCKS		1
static int debug;
#define dprintk(args...) \
do  while (0)
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct si21xx_state ;
static u8 serit_sp1511lhb_inittab[] = ;
static int si21_writeregs(struct si21xx_state *state, u8 reg1,
u8 *data, int len)
static int si21_writereg(struct si21xx_state *state, u8 reg, u8 data)
static int si21_write(struct dvb_frontend *fe, const u8 buf[], int len)
static u8 si21_readreg(struct si21xx_state *state, u8 reg)
static int si21_readregs(struct si21xx_state *state, u8 reg1, u8 *b, u8 len)
static int si21xx_wait_diseqc_idle(struct si21xx_state *state, int timeout)
static int si21xx_set_symbolrate(struct dvb_frontend *fe, u32 srate)
static int si21xx_send_diseqc_msg(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *m)
static int si21xx_send_diseqc_burst(struct dvb_frontend *fe,
fe_sec_mini_cmd_t burst)
static int si21xx_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static int si21xx_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t volt)
static int si21xx_init(struct dvb_frontend *fe)
static int si21_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int si21_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int si21_read_ber(struct dvb_frontend *fe, u32 *ber)
static int si21_read_snr(struct dvb_frontend *fe, u16 *snr)
static int si21_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int si21xx_setacquire(struct dvb_frontend *fe, int symbrate,
fe_code_rate_t crate)
static int si21xx_set_property(struct dvb_frontend *fe, struct dtv_property *p)
static int si21xx_get_property(struct dvb_frontend *fe, struct dtv_property *p)
static int si21xx_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *dfp)
static int si21xx_sleep(struct dvb_frontend *fe)
static void si21xx_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops si21xx_ops = ;
struct dvb_frontend *si21xx_attach(const struct si21xx_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(si21xx_attach);
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("SL SI21XX DVB Demodulator driver");
MODULE_AUTHOR("Igor M. Liplianin");
MODULE_LICENSE("GPL");
