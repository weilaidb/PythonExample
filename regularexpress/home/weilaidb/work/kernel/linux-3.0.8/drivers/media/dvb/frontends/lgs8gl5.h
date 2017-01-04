#define LGS8GL5_H
struct lgs8gl5_config ;
#if defined(CONFIG_DVB_LGS8GL5) || \
(defined(CONFIG_DVB_LGS8GL5_MODULE) && defined(MODULE))
extern struct dvb_frontend *lgs8gl5_attach(
const struct lgs8gl5_config *config, struct i2c_adapter *i2c);
static inline struct dvb_frontend *lgs8gl5_attach(
const struct lgs8gl5_config *config, struct i2c_adapter *i2c)
