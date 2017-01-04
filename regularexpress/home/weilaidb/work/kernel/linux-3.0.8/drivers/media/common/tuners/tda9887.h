#define __TDA9887_H__
#if defined(CONFIG_MEDIA_TUNER_TDA9887) || (defined(CONFIG_MEDIA_TUNER_TDA9887_MODULE) && defined(MODULE))
extern struct dvb_frontend *tda9887_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap,
u8 i2c_addr);
static inline struct dvb_frontend *tda9887_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap,
u8 i2c_addr)
