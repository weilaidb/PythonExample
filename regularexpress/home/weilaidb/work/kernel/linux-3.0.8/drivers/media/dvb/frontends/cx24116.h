#define CX24116_H
struct cx24116_config ;
#if defined(CONFIG_DVB_CX24116) || \
(defined(CONFIG_DVB_CX24116_MODULE) && defined(MODULE))
extern struct dvb_frontend *cx24116_attach(
const struct cx24116_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *cx24116_attach(
const struct cx24116_config *config,
struct i2c_adapter *i2c)
