#define NXT200X_H
typedef enum nxt_chip_t nxt_chip_type;
struct nxt200x_config
;
#if defined(CONFIG_DVB_NXT200X) || (defined(CONFIG_DVB_NXT200X_MODULE) && defined(MODULE))
extern struct dvb_frontend* nxt200x_attach(const struct nxt200x_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* nxt200x_attach(const struct nxt200x_config* config,
struct i2c_adapter* i2c)
