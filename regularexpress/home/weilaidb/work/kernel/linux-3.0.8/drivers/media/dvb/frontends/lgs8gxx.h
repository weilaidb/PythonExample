#define __LGS8GXX_H__
#define LGS8GXX_PROD_LGS8913 0
#define LGS8GXX_PROD_LGS8GL5 1
#define LGS8GXX_PROD_LGS8G42 3
#define LGS8GXX_PROD_LGS8G52 4
#define LGS8GXX_PROD_LGS8G54 5
#define LGS8GXX_PROD_LGS8G75 6
struct lgs8gxx_config ;
#if defined(CONFIG_DVB_LGS8GXX) || \
(defined(CONFIG_DVB_LGS8GXX_MODULE) && defined(MODULE))
extern struct dvb_frontend *lgs8gxx_attach(const struct lgs8gxx_config *config,
struct i2c_adapter *i2c);
static inline
struct dvb_frontend *lgs8gxx_attach(const struct lgs8gxx_config *config,
struct i2c_adapter *i2c)
