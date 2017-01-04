#define S921_H
struct s921_config ;
#if defined(CONFIG_DVB_S921) || (defined(CONFIG_DVB_S921_MODULE) \
&& defined(MODULE))
extern struct dvb_frontend *s921_attach(const struct s921_config *config,
struct i2c_adapter *i2c);
extern struct i2c_adapter *s921_get_tuner_i2c_adapter(struct dvb_frontend *);
static inline struct dvb_frontend *s921_attach(
const struct s921_config *config, struct i2c_adapter *i2c)
static struct i2c_adapter *
s921_get_tuner_i2c_adapter(struct dvb_frontend *fe)
