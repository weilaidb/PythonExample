#define __STV090x_H
enum stv090x_demodulator ;
enum stv090x_device ;
enum stv090x_mode ;
enum stv090x_tsmode ;
enum stv090x_clkmode ;
enum stv090x_i2crpt ;
enum stv090x_adc_range ;
struct stv090x_config ;
#if defined(CONFIG_DVB_STV090x) || (defined(CONFIG_DVB_STV090x_MODULE) && defined(MODULE))
extern struct dvb_frontend *stv090x_attach(const struct stv090x_config *config,
struct i2c_adapter *i2c,
enum stv090x_demodulator demod);
extern int stv090x_set_gpio(struct dvb_frontend *fe, u8 gpio,
u8 dir, u8 value, u8 xor_value);
static inline struct dvb_frontend *stv090x_attach(const struct stv090x_config *config,
struct i2c_adapter *i2c,
enum stv090x_demodulator demod)
static inline int stv090x_set_gpio(struct dvb_frontend *fe, u8 gpio,
u8 opd, u8 value, u8 xor_value)
