#define VES1X93_H
struct ves1x93_config
;
#if defined(CONFIG_DVB_VES1X93) || (defined(CONFIG_DVB_VES1X93_MODULE) && defined(MODULE))
extern struct dvb_frontend* ves1x93_attach(const struct ves1x93_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* ves1x93_attach(const struct ves1x93_config* config,
struct i2c_adapter* i2c)
