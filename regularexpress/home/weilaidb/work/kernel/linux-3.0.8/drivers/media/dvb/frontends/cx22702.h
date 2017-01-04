#define CX22702_H
struct cx22702_config ;
#if defined(CONFIG_DVB_CX22702) || (defined(CONFIG_DVB_CX22702_MODULE) \
&& defined(MODULE))
extern struct dvb_frontend *cx22702_attach(
const struct cx22702_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *cx22702_attach(
const struct cx22702_config *config,
struct i2c_adapter *i2c)
