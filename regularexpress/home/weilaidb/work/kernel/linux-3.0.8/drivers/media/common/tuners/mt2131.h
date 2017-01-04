#define __MT2131_H__
struct dvb_frontend;
struct i2c_adapter;
struct mt2131_config ;
#if defined(CONFIG_MEDIA_TUNER_MT2131) || (defined(CONFIG_MEDIA_TUNER_MT2131_MODULE) && defined(MODULE))
extern struct dvb_frontend* mt2131_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct mt2131_config *cfg,
u16 if1);
static inline struct dvb_frontend* mt2131_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct mt2131_config *cfg,
u16 if1)
