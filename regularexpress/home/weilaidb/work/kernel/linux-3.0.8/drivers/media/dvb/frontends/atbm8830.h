#define __ATBM8830_H__
#define ATBM8830_PROD_8830 0
#define ATBM8830_PROD_8831 1
struct atbm8830_config ;
#if defined(CONFIG_DVB_ATBM8830) || \
(defined(CONFIG_DVB_ATBM8830_MODULE) && defined(MODULE))
extern struct dvb_frontend *atbm8830_attach(const struct atbm8830_config *config,
struct i2c_adapter *i2c);
static inline
struct dvb_frontend *atbm8830_attach(const struct atbm8830_config *config,
struct i2c_adapter *i2c)
