#define __MT20XX_H__
#if defined(CONFIG_MEDIA_TUNER_MT20XX) || (defined(CONFIG_MEDIA_TUNER_MT20XX_MODULE) && defined(MODULE))
extern struct dvb_frontend *microtune_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr);
static inline struct dvb_frontend *microtune_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr)
