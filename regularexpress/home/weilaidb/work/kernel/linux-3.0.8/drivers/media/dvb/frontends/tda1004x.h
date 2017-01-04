#define TDA1004X_H
enum tda10046_xtal ;
enum tda10046_agc ;
enum tda10046_gpio ;
enum tda10046_if ;
enum tda10046_tsout ;
struct tda1004x_config
;
enum tda1004x_demod ;
struct tda1004x_state ;
#if defined(CONFIG_DVB_TDA1004X) || (defined(CONFIG_DVB_TDA1004X_MODULE) && defined(MODULE))
extern struct dvb_frontend* tda10045_attach(const struct tda1004x_config* config,
struct i2c_adapter* i2c);
extern struct dvb_frontend* tda10046_attach(const struct tda1004x_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* tda10045_attach(const struct tda1004x_config* config,
struct i2c_adapter* i2c)
static inline struct dvb_frontend* tda10046_attach(const struct tda1004x_config* config,
struct i2c_adapter* i2c)
static inline int tda1004x_writereg(struct dvb_frontend *fe, u8 reg, u8 val)
