#define STV0288_H
struct stv0288_config ;
#if defined(CONFIG_DVB_STV0288) || (defined(CONFIG_DVB_STV0288_MODULE) && \
defined(MODULE))
extern struct dvb_frontend *stv0288_attach(const struct stv0288_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *stv0288_attach(const struct stv0288_config *config,
struct i2c_adapter *i2c)
static inline int stv0288_writereg(struct dvb_frontend *fe, u8 reg, u8 val)
