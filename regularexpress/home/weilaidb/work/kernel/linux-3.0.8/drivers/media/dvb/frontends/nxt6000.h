#define NXT6000_H
struct nxt6000_config
;
#if defined(CONFIG_DVB_NXT6000) || (defined(CONFIG_DVB_NXT6000_MODULE) && defined(MODULE))
extern struct dvb_frontend* nxt6000_attach(const struct nxt6000_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* nxt6000_attach(const struct nxt6000_config* config,
struct i2c_adapter* i2c)
