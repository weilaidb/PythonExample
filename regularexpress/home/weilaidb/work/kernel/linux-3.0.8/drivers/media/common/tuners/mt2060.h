#define MT2060_H
struct dvb_frontend;
struct i2c_adapter;
struct mt2060_config ;
#if defined(CONFIG_MEDIA_TUNER_MT2060) || (defined(CONFIG_MEDIA_TUNER_MT2060_MODULE) && defined(MODULE))
extern struct dvb_frontend * mt2060_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct mt2060_config *cfg, u16 if1);
static inline struct dvb_frontend * mt2060_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct mt2060_config *cfg, u16 if1)
