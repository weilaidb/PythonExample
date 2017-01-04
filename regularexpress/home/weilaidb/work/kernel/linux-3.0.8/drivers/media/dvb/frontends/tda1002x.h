#define TDA1002x_H
struct tda1002x_config ;
enum tda10023_output_mode ;
struct tda10023_config ;
#if defined(CONFIG_DVB_TDA10021) || (defined(CONFIG_DVB_TDA10021_MODULE) && defined(MODULE))
extern struct dvb_frontend* tda10021_attach(const struct tda1002x_config* config,
struct i2c_adapter* i2c, u8 pwm);
static inline struct dvb_frontend* tda10021_attach(const struct tda1002x_config* config,
struct i2c_adapter* i2c, u8 pwm)
#if defined(CONFIG_DVB_TDA10023) || \
(defined(CONFIG_DVB_TDA10023_MODULE) && defined(MODULE))
extern struct dvb_frontend *tda10023_attach(
const struct tda10023_config *config,
struct i2c_adapter *i2c, u8 pwm);
static inline struct dvb_frontend *tda10023_attach(
const struct tda10023_config *config,
struct i2c_adapter *i2c, u8 pwm)
