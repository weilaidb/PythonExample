#define DVB_ZL10036_H
struct zl10036_config ;
#if defined(CONFIG_DVB_ZL10036) || \
(defined(CONFIG_DVB_ZL10036_MODULE) && defined(MODULE))
extern struct dvb_frontend *zl10036_attach(struct dvb_frontend *fe,
const struct zl10036_config *config, struct i2c_adapter *i2c);
static inline struct dvb_frontend *zl10036_attach(struct dvb_frontend *fe,
const struct zl10036_config *config, struct i2c_adapter *i2c)
