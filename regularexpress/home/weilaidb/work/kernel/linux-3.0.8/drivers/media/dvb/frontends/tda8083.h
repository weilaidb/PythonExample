#define TDA8083_H
struct tda8083_config
;
#if defined(CONFIG_DVB_TDA8083) || (defined(CONFIG_DVB_TDA8083_MODULE) && defined(MODULE))
extern struct dvb_frontend* tda8083_attach(const struct tda8083_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* tda8083_attach(const struct tda8083_config* config,
struct i2c_adapter* i2c)
