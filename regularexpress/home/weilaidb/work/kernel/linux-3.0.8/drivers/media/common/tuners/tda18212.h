#define TDA18212_H
struct tda18212_config ;
#if defined(CONFIG_MEDIA_TUNER_TDA18212) || \
(defined(CONFIG_MEDIA_TUNER_TDA18212_MODULE) && defined(MODULE))
extern struct dvb_frontend *tda18212_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, struct tda18212_config *cfg);
static inline struct dvb_frontend *tda18212_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, struct tda18212_config *cfg)
