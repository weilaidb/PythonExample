#define S5H1420_H
struct s5h1420_config
;
#if defined(CONFIG_DVB_S5H1420) || (defined(CONFIG_DVB_S5H1420_MODULE) && defined(MODULE))
extern struct dvb_frontend *s5h1420_attach(const struct s5h1420_config *config,
struct i2c_adapter *i2c);
extern struct i2c_adapter *s5h1420_get_tuner_i2c_adapter(struct dvb_frontend *fe);
static inline struct dvb_frontend *s5h1420_attach(const struct s5h1420_config *config,
struct i2c_adapter *i2c)
static inline struct i2c_adapter *s5h1420_get_tuner_i2c_adapter(struct dvb_frontend *fe)
