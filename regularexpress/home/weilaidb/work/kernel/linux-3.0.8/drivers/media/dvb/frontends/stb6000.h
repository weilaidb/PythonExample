#define __DVB_STB6000_H__
#if defined(CONFIG_DVB_STB6000) || (defined(CONFIG_DVB_STB6000_MODULE) \
&& defined(MODULE))
extern struct dvb_frontend *stb6000_attach(struct dvb_frontend *fe, int addr,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *stb6000_attach(struct dvb_frontend *fe,
int addr,
struct i2c_adapter *i2c)
