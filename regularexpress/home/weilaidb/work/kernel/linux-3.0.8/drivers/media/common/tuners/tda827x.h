#define __DVB_TDA827X_H__
struct tda827x_config
;
#if defined(CONFIG_MEDIA_TUNER_TDA827X) || (defined(CONFIG_MEDIA_TUNER_TDA827X_MODULE) && defined(MODULE))
extern struct dvb_frontend* tda827x_attach(struct dvb_frontend *fe, int addr,
struct i2c_adapter *i2c,
struct tda827x_config *cfg);
static inline struct dvb_frontend* tda827x_attach(struct dvb_frontend *fe,
int addr,
struct i2c_adapter *i2c,
struct tda827x_config *cfg)
