#define EC100_H
struct ec100_config ;
#if defined(CONFIG_DVB_EC100) || \
(defined(CONFIG_DVB_EC100_MODULE) && defined(MODULE))
extern struct dvb_frontend *ec100_attach(const struct ec100_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *ec100_attach(
const struct ec100_config *config, struct i2c_adapter *i2c)
