#define TDA18218_H
struct tda18218_config ;
#if defined(CONFIG_MEDIA_TUNER_TDA18218) || \
(defined(CONFIG_MEDIA_TUNER_TDA18218_MODULE) && defined(MODULE))
extern struct dvb_frontend *tda18218_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, struct tda18218_config *cfg);
static inline struct dvb_frontend *tda18218_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, struct tda18218_config *cfg)
