#define __TDA8290_H__
struct tda829x_config ;
#if defined(CONFIG_MEDIA_TUNER_TDA8290) || (defined(CONFIG_MEDIA_TUNER_TDA8290_MODULE) && defined(MODULE))
extern int tda829x_probe(struct i2c_adapter *i2c_adap, u8 i2c_addr);
extern struct dvb_frontend *tda829x_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap,
u8 i2c_addr,
struct tda829x_config *cfg);
static inline int tda829x_probe(struct i2c_adapter *i2c_adap, u8 i2c_addr)
static inline struct dvb_frontend *tda829x_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap,
u8 i2c_addr,
struct tda829x_config *cfg)
