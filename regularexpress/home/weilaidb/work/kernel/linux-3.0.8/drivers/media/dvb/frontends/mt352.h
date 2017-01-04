#define MT352_H
struct mt352_config
;
#if defined(CONFIG_DVB_MT352) || (defined(CONFIG_DVB_MT352_MODULE) && defined(MODULE))
extern struct dvb_frontend* mt352_attach(const struct mt352_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* mt352_attach(const struct mt352_config* config,
struct i2c_adapter* i2c)
static inline int mt352_write(struct dvb_frontend *fe, const u8 buf[], int len)
