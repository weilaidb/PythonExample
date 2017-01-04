#define _LGDT3305_H_
enum lgdt3305_mpeg_mode ;
enum lgdt3305_tp_clock_edge ;
enum lgdt3305_tp_valid_polarity ;
enum lgdt_demod_chip_type ;
struct lgdt3305_config ;
#if defined(CONFIG_DVB_LGDT3305) || (defined(CONFIG_DVB_LGDT3305_MODULE) && \
defined(MODULE))
extern
struct dvb_frontend *lgdt3305_attach(const struct lgdt3305_config *config,
struct i2c_adapter *i2c_adap);
static inline
struct dvb_frontend *lgdt3305_attach(const struct lgdt3305_config *config,
struct i2c_adapter *i2c_adap)
