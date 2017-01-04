#define CX24113_H
struct dvb_frontend;
struct cx24113_config ;
#if defined(CONFIG_DVB_TUNER_CX24113) || \
(defined(CONFIG_DVB_TUNER_CX24113_MODULE) && defined(MODULE))
extern struct dvb_frontend *cx24113_attach(struct dvb_frontend *,
const struct cx24113_config *config, struct i2c_adapter *i2c);
extern void cx24113_agc_callback(struct dvb_frontend *fe);
static inline struct dvb_frontend *cx24113_attach(struct dvb_frontend *fe,
const struct cx24113_config *config, struct i2c_adapter *i2c)
static inline void cx24113_agc_callback(struct dvb_frontend *fe)
