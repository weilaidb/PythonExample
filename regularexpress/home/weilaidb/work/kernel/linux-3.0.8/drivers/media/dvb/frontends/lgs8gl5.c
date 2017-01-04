#define REG_RESET		0x02
#define REG_RESET_OFF			0x01
#define REG_03			0x03
#define REG_04			0x04
#define REG_07			0x07
#define REG_09			0x09
#define REG_0A			0x0a
#define REG_0B			0x0b
#define REG_0C			0x0c
#define REG_37			0x37
#define REG_STRENGTH		0x4b
#define REG_STRENGTH_MASK		0x7f
#define REG_STRENGTH_CARRIER		0x80
#define REG_INVERSION		0x7c
#define REG_INVERSION_ON		0x80
#define REG_7D			0x7d
#define REG_7E			0x7e
#define REG_A2			0xa2
#define REG_STATUS		0xa4
#define REG_STATUS_SYNC		0x04
#define REG_STATUS_LOCK		0x01
struct lgs8gl5_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static int
lgs8gl5_write_reg(struct lgs8gl5_state *state, u8 reg, u8 data)
static int
lgs8gl5_read_reg(struct lgs8gl5_state *state, u8 reg)
static int
lgs8gl5_update_reg(struct lgs8gl5_state *state, u8 reg, u8 data)
static int
lgs8gl5_update_alt_reg(struct lgs8gl5_state *state, u8 reg, u8 data)
static void
lgs8gl5_soft_reset(struct lgs8gl5_state *state)
static void
lgs8gl5_start_demod(struct lgs8gl5_state *state)
static int
lgs8gl5_init(struct dvb_frontend *fe)
static int
lgs8gl5_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int
lgs8gl5_read_ber(struct dvb_frontend *fe, u32 *ber)
static int
lgs8gl5_read_signal_strength(struct dvb_frontend *fe, u16 *signal_strength)
static int
lgs8gl5_read_snr(struct dvb_frontend *fe, u16 *snr)
static int
lgs8gl5_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int
lgs8gl5_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int
lgs8gl5_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int
lgs8gl5_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *fesettings)
static void
lgs8gl5_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops lgs8gl5_ops;
struct dvb_frontend*
lgs8gl5_attach(const struct lgs8gl5_config *config, struct i2c_adapter *i2c)
EXPORT_SYMBOL(lgs8gl5_attach);
static struct dvb_frontend_ops lgs8gl5_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Legend Silicon LGS-8GL5 DMB-TH Demodulator driver");
MODULE_AUTHOR("Timothy Lee");
MODULE_LICENSE("GPL");
