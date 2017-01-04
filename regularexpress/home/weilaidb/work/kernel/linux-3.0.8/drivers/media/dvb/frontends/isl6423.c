static unsigned int verbose;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "Set Verbosity level");
#define FE_ERROR				0
#define FE_NOTICE				1
#define FE_INFO					2
#define FE_DEBUG				3
#define FE_DEBUGREG				4
#define dprintk(__y, __z, format, arg...) do  while (0)
struct isl6423_dev ;
static int isl6423_write(struct isl6423_dev *isl6423, u8 reg)
static int isl6423_set_modulation(struct dvb_frontend *fe)
static int isl6423_voltage_boost(struct dvb_frontend *fe, long arg)
static int isl6423_set_voltage(struct dvb_frontend *fe,
enum fe_sec_voltage voltage)
static int isl6423_set_current(struct dvb_frontend *fe)
static void isl6423_release(struct dvb_frontend *fe)
struct dvb_frontend *isl6423_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
const struct isl6423_config *config)
EXPORT_SYMBOL(isl6423_attach);
MODULE_DESCRIPTION("ISL6423 SEC");
MODULE_AUTHOR("Manu Abraham");
MODULE_LICENSE("GPL");
