#define DS3000_H
struct ds3000_config ;
#if defined(CONFIG_DVB_DS3000) || \
(defined(CONFIG_DVB_DS3000_MODULE) && defined(MODULE))
extern struct dvb_frontend *ds3000_attach(const struct ds3000_config *config,
struct i2c_adapter *i2c);
static inline
struct dvb_frontend *ds3000_attach(const struct ds3000_config *config,
struct i2c_adapter *i2c)
