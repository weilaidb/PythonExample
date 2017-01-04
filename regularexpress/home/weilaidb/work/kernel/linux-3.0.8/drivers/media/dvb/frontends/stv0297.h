#define STV0297_H
struct stv0297_config
;
#if defined(CONFIG_DVB_STV0297) || (defined(CONFIG_DVB_STV0297_MODULE) && defined(MODULE))
extern struct dvb_frontend* stv0297_attach(const struct stv0297_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* stv0297_attach(const struct stv0297_config* config,
struct i2c_adapter* i2c)
