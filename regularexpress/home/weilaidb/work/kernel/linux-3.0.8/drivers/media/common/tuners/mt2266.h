#define MT2266_H
struct dvb_frontend;
struct i2c_adapter;
struct mt2266_config ;
#if defined(CONFIG_MEDIA_TUNER_MT2266) || (defined(CONFIG_MEDIA_TUNER_MT2266_MODULE) && defined(MODULE))
extern struct dvb_frontend * mt2266_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct mt2266_config *cfg);
static inline struct dvb_frontend * mt2266_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct mt2266_config *cfg)
