#define ITD1000_H
struct dvb_frontend;
struct i2c_adapter;
struct itd1000_config ;
#if defined(CONFIG_DVB_TUNER_ITD1000) || (defined(CONFIG_DVB_TUNER_ITD1000_MODULE) && defined(MODULE))
extern struct dvb_frontend *itd1000_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct itd1000_config *cfg);
static inline struct dvb_frontend *itd1000_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct itd1000_config *cfg)
