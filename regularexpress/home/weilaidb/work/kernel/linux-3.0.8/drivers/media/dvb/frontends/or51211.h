#define OR51211_H
struct or51211_config
;
#if defined(CONFIG_DVB_OR51211) || (defined(CONFIG_DVB_OR51211_MODULE) && defined(MODULE))
extern struct dvb_frontend* or51211_attach(const struct or51211_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* or51211_attach(const struct or51211_config* config,
struct i2c_adapter* i2c)
