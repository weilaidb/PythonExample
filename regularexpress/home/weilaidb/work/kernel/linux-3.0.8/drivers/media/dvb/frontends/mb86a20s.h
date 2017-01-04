#define MB86A20S_H
struct mb86a20s_config ;
#if defined(CONFIG_DVB_MB86A20S) || (defined(CONFIG_DVB_MB86A20S_MODULE) \
&& defined(MODULE))
extern struct dvb_frontend *mb86a20s_attach(const struct mb86a20s_config *config,
struct i2c_adapter *i2c);
extern struct i2c_adapter *mb86a20s_get_tuner_i2c_adapter(struct dvb_frontend *);
static inline struct dvb_frontend *mb86a20s_attach(
const struct mb86a20s_config *config, struct i2c_adapter *i2c)
static struct i2c_adapter *
mb86a20s_get_tuner_i2c_adapter(struct dvb_frontend *fe)
