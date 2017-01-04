#define STV0900_H
struct stv0900_reg ;
struct stv0900_config ;
#if defined(CONFIG_DVB_STV0900) || (defined(CONFIG_DVB_STV0900_MODULE) \
&& defined(MODULE))
extern struct dvb_frontend *stv0900_attach(const struct stv0900_config *config,
struct i2c_adapter *i2c, int demod);
static inline struct dvb_frontend *stv0900_attach(const struct stv0900_config *config,
struct i2c_adapter *i2c, int demod)
