#define __DVB_TDA826X_H__
#if defined(CONFIG_DVB_TDA826X) || (defined(CONFIG_DVB_TDA826X_MODULE) && defined(MODULE))
extern struct dvb_frontend* tda826x_attach(struct dvb_frontend *fe, int addr,
struct i2c_adapter *i2c,
int has_loopthrough);
static inline struct dvb_frontend* tda826x_attach(struct dvb_frontend *fe,
int addr,
struct i2c_adapter *i2c,
int has_loopthrough)
