#define STV0299_H
#define STV0299_LOCKOUTPUT_0  0
#define STV0299_LOCKOUTPUT_1  1
#define STV0299_LOCKOUTPUT_CF 2
#define STV0299_LOCKOUTPUT_LK 3
#define STV0299_VOLT13_OP0 0
#define STV0299_VOLT13_OP1 1
struct stv0299_config
;
#if defined(CONFIG_DVB_STV0299) || (defined(CONFIG_DVB_STV0299_MODULE) && defined(MODULE))
extern struct dvb_frontend *stv0299_attach(const struct stv0299_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *stv0299_attach(const struct stv0299_config *config,
struct i2c_adapter *i2c)
static inline int stv0299_writereg(struct dvb_frontend *fe, u8 reg, u8 val)
