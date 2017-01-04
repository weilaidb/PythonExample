#define OR51132_H
struct or51132_config
;
#if defined(CONFIG_DVB_OR51132) || (defined(CONFIG_DVB_OR51132_MODULE) && defined(MODULE))
extern struct dvb_frontend* or51132_attach(const struct or51132_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* or51132_attach(const struct or51132_config* config,
struct i2c_adapter* i2c)
