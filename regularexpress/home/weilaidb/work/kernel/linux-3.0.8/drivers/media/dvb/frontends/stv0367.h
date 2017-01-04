#define STV0367_H
struct stv0367_config ;
#if defined(CONFIG_DVB_STV0367) || (defined(CONFIG_DVB_STV0367_MODULE) \
&& defined(MODULE))
extern struct
dvb_frontend *stv0367ter_attach(const struct stv0367_config *config,
struct i2c_adapter *i2c);
extern struct
dvb_frontend *stv0367cab_attach(const struct stv0367_config *config,
struct i2c_adapter *i2c);
static inline struct
dvb_frontend *stv0367ter_attach(const struct stv0367_config *config,
struct i2c_adapter *i2c)
static inline struct
dvb_frontend *stv0367cab_attach(const struct stv0367_config *config,
struct i2c_adapter *i2c)
