#define __TDA8261_H
enum tda8261_step ;
struct tda8261_config ;
#if defined(CONFIG_DVB_TDA8261) || (defined(CONFIG_DVB_TDA8261_MODULE) && defined(MODULE))
extern struct dvb_frontend *tda8261_attach(struct dvb_frontend *fe,
const struct tda8261_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *tda8261_attach(struct dvb_frontend *fe,
const struct tda8261_config *config,
struct i2c_adapter *i2c)
