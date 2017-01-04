#define BCM3510_H
struct bcm3510_config
;
#if defined(CONFIG_DVB_BCM3510) || (defined(CONFIG_DVB_BCM3510_MODULE) && defined(MODULE))
extern struct dvb_frontend* bcm3510_attach(const struct bcm3510_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* bcm3510_attach(const struct bcm3510_config* config,
struct i2c_adapter* i2c)
