#define SP887X_H
struct sp887x_config
;
#if defined(CONFIG_DVB_SP887X) || (defined(CONFIG_DVB_SP887X_MODULE) && defined(MODULE))
extern struct dvb_frontend* sp887x_attach(const struct sp887x_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* sp887x_attach(const struct sp887x_config* config,
struct i2c_adapter* i2c)
