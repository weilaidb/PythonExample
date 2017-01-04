#define ZL10353_H
struct zl10353_config
;
#if defined(CONFIG_DVB_ZL10353) || (defined(CONFIG_DVB_ZL10353_MODULE) && defined(MODULE))
extern struct dvb_frontend* zl10353_attach(const struct zl10353_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend* zl10353_attach(const struct zl10353_config *config,
struct i2c_adapter *i2c)
