#define L64781_H
struct l64781_config
;
#if defined(CONFIG_DVB_L64781) || (defined(CONFIG_DVB_L64781_MODULE) && defined(MODULE))
extern struct dvb_frontend* l64781_attach(const struct l64781_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* l64781_attach(const struct l64781_config* config,
struct i2c_adapter* i2c)
