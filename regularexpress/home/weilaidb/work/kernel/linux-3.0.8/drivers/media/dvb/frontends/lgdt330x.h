#define LGDT330X_H
typedef enum lg_chip_t lg_chip_type;
struct lgdt330x_config
;
#if defined(CONFIG_DVB_LGDT330X) || (defined(CONFIG_DVB_LGDT330X_MODULE) && defined(MODULE))
extern struct dvb_frontend* lgdt330x_attach(const struct lgdt330x_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* lgdt330x_attach(const struct lgdt330x_config* config,
struct i2c_adapter* i2c)
