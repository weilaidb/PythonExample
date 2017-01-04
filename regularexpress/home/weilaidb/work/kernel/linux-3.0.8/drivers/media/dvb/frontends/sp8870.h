#define SP8870_H
struct sp8870_config
;
#if defined(CONFIG_DVB_SP8870) || (defined(CONFIG_DVB_SP8870_MODULE) && defined(MODULE))
extern struct dvb_frontend* sp8870_attach(const struct sp8870_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* sp8870_attach(const struct sp8870_config* config,
struct i2c_adapter* i2c)
