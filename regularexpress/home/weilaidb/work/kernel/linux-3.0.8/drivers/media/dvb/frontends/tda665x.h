#define __TDA665x_H
struct tda665x_config ;
#if defined(CONFIG_DVB_TDA665x) || (defined(CONFIG_DVB_TDA665x_MODULE) && defined(MODULE))
extern struct dvb_frontend *tda665x_attach(struct dvb_frontend *fe,
const struct tda665x_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *tda665x_attach(struct dvb_frontend *fe,
const struct tda665x_config *config,
struct i2c_adapter *i2c)
