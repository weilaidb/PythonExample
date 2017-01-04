#define __MB86A16_H
struct mb86a16_config ;
#if defined(CONFIG_DVB_MB86A16) || (defined(CONFIG_DVB_MB86A16_MODULE) && defined(MODULE))
extern struct dvb_frontend *mb86a16_attach(const struct mb86a16_config *config,
struct i2c_adapter *i2c_adap);
static inline struct dvb_frontend *mb86a16_attach(const struct mb86a16_config *config,
struct i2c_adapter *i2c_adap)
