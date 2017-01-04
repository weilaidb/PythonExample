#define ZL10039_H
#if defined(CONFIG_DVB_ZL10039) || (defined(CONFIG_DVB_ZL10039_MODULE) \
&& defined(MODULE))
struct dvb_frontend *zl10039_attach(struct dvb_frontend *fe,
u8 i2c_addr,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *zl10039_attach(struct dvb_frontend *fe,
u8 i2c_addr,
struct i2c_adapter *i2c)
