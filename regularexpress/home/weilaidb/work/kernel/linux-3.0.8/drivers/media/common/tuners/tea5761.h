#define __TEA5761_H__
#if defined(CONFIG_MEDIA_TUNER_TEA5761) || (defined(CONFIG_MEDIA_TUNER_TEA5761_MODULE) && defined(MODULE))
extern int tea5761_autodetection(struct i2c_adapter* i2c_adap, u8 i2c_addr);
extern struct dvb_frontend *tea5761_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr);
static inline int tea5761_autodetection(struct i2c_adapter* i2c_adap,
u8 i2c_addr)
static inline struct dvb_frontend *tea5761_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr)
