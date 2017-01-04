#define __MAX2165_H__
struct dvb_frontend;
struct i2c_adapter;
struct max2165_config ;
#if defined(CONFIG_MEDIA_TUNER_MAX2165) || \
(defined(CONFIG_MEDIA_TUNER_MAX2165_MODULE) && defined(MODULE))
extern struct dvb_frontend *max2165_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct max2165_config *cfg);
static inline struct dvb_frontend *max2165_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct max2165_config *cfg)
