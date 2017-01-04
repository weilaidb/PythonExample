#define I2C_ADDRESS 0x60
#define REG_PART_REV   0
#define REG_TUNE       1
#define REG_BAND       6
#define REG_BANDWIDTH  8
#define REG_LOCK       0x12
#define PART_REV 0x85
struct mt2266_priv ;
#define MT2266_VHF 1
#define MT2266_UHF 0
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
#define dprintk(args...) do  while (0)
static int mt2266_readreg(struct mt2266_priv *priv, u8 reg, u8 *val)
static int mt2266_writereg(struct mt2266_priv *priv, u8 reg, u8 val)
static int mt2266_writeregs(struct mt2266_priv *priv,u8 *buf, u8 len)
static u8 mt2266_init1[] = ;
static u8 mt2266_init2[] = ;
static u8 mt2266_init_8mhz[] = ;
static u8 mt2266_init_7mhz[] = ;
static u8 mt2266_init_6mhz[] = ;
static u8 mt2266_uhf[] = ;
static u8 mt2266_vhf[] = ;
#define FREF 30000
static int mt2266_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static void mt2266_calibrate(struct mt2266_priv *priv)
static int mt2266_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int mt2266_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int mt2266_init(struct dvb_frontend *fe)
static int mt2266_sleep(struct dvb_frontend *fe)
static int mt2266_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops mt2266_tuner_ops = ;
struct dvb_frontend * mt2266_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct mt2266_config *cfg)
EXPORT_SYMBOL(mt2266_attach);
MODULE_AUTHOR("Olivier DANET");
MODULE_DESCRIPTION("Microtune MT2266 silicon tuner driver");
MODULE_LICENSE("GPL");
