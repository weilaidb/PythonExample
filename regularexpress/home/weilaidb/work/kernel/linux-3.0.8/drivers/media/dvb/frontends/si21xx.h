#define SI21XX_H
struct si21xx_config ;
#if defined(CONFIG_DVB_SI21XX) || \
(defined(CONFIG_DVB_SI21XX_MODULE) && defined(MODULE))
extern struct dvb_frontend *si21xx_attach(const struct si21xx_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *si21xx_attach(
const struct si21xx_config *config, struct i2c_adapter *i2c)
static inline int si21xx_writeregister(struct dvb_frontend *fe, u8 reg, u8 val)
