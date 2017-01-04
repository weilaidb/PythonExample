#define __STV6110x_H
struct stv6110x_config ;
enum tuner_mode ;
enum tuner_status ;
struct stv6110x_devctl ;
#if defined(CONFIG_DVB_STV6110x) || (defined(CONFIG_DVB_STV6110x_MODULE) && defined(MODULE))
extern struct stv6110x_devctl *stv6110x_attach(struct dvb_frontend *fe,
const struct stv6110x_config *config,
struct i2c_adapter *i2c);
static inline struct stv6110x_devctl *stv6110x_attach(struct dvb_frontend *fe,
const struct stv6110x_config *config,
struct i2c_adapter *i2c)
