#define __TUNER_SIMPLE_H__
#if defined(CONFIG_MEDIA_TUNER_SIMPLE) || (defined(CONFIG_MEDIA_TUNER_SIMPLE_MODULE) && defined(MODULE))
extern struct dvb_frontend *simple_tuner_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap,
u8 i2c_addr,
unsigned int type);
static inline struct dvb_frontend *simple_tuner_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap,
u8 i2c_addr,
unsigned int type)
