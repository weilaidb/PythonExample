#define CX24123_H
struct cx24123_config ;
#if defined(CONFIG_DVB_CX24123) || (defined(CONFIG_DVB_CX24123_MODULE) \
&& defined(MODULE))
extern struct dvb_frontend *cx24123_attach(const struct cx24123_config *config,
struct i2c_adapter *i2c);
extern struct i2c_adapter *cx24123_get_tuner_i2c_adapter(struct dvb_frontend *);
static inline struct dvb_frontend *cx24123_attach(
const struct cx24123_config *config, struct i2c_adapter *i2c)
static struct i2c_adapter *
cx24123_get_tuner_i2c_adapter(struct dvb_frontend *fe)
