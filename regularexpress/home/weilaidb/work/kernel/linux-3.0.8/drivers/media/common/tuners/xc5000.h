#define __XC5000_H__
struct dvb_frontend;
struct i2c_adapter;
struct xc5000_config ;
#define XC5000_TUNER_RESET		0
#define XC5000_RADIO_NOT_CONFIGURED		0
#define XC5000_RADIO_FM1			1
#define XC5000_RADIO_FM2			2
#define XC5000_RADIO_FM1_MONO			3
#if defined(CONFIG_MEDIA_TUNER_XC5000) || \
(defined(CONFIG_MEDIA_TUNER_XC5000_MODULE) && defined(MODULE))
extern struct dvb_frontend *xc5000_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
const struct xc5000_config *cfg);
static inline struct dvb_frontend *xc5000_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
const struct xc5000_config *cfg)
