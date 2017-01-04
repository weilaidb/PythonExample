#define TDA10086_H
enum tda10086_xtal ;
struct tda10086_config
;
#if defined(CONFIG_DVB_TDA10086) || (defined(CONFIG_DVB_TDA10086_MODULE) && defined(MODULE))
extern struct dvb_frontend* tda10086_attach(const struct tda10086_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* tda10086_attach(const struct tda10086_config* config,
struct i2c_adapter* i2c)
