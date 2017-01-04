#define TDA10048_H
struct tda10048_config ;
#if defined(CONFIG_DVB_TDA10048) || \
(defined(CONFIG_DVB_TDA10048_MODULE) && defined(MODULE))
extern struct dvb_frontend *tda10048_attach(
const struct tda10048_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *tda10048_attach(
const struct tda10048_config *config,
struct i2c_adapter *i2c)
