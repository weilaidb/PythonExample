#define CX22700_H
struct cx22700_config
;
#if defined(CONFIG_DVB_CX22700) || (defined(CONFIG_DVB_CX22700_MODULE) && defined(MODULE))
extern struct dvb_frontend* cx22700_attach(const struct cx22700_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* cx22700_attach(const struct cx22700_config* config,
struct i2c_adapter* i2c)
