#define __S5H1411_H__
#define S5H1411_I2C_TOP_ADDR (0x32 >> 1)
#define S5H1411_I2C_QAM_ADDR (0x34 >> 1)
struct s5h1411_config ;
#if defined(CONFIG_DVB_S5H1411) || \
(defined(CONFIG_DVB_S5H1411_MODULE) && defined(MODULE))
extern struct dvb_frontend *s5h1411_attach(const struct s5h1411_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *s5h1411_attach(
const struct s5h1411_config *config,
struct i2c_adapter *i2c)
