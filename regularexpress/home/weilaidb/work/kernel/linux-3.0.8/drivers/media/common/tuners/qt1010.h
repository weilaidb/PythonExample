#define QT1010_H
struct qt1010_config ;
#if defined(CONFIG_MEDIA_TUNER_QT1010) || (defined(CONFIG_MEDIA_TUNER_QT1010_MODULE) && defined(MODULE))
extern struct dvb_frontend *qt1010_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct qt1010_config *cfg);
static inline struct dvb_frontend *qt1010_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct qt1010_config *cfg)
