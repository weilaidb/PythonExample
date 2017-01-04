#define __ISL_6423_H
enum isl6423_current ;
enum isl6423_curlim ;
struct isl6423_config ;
#if defined(CONFIG_DVB_ISL6423) || (defined(CONFIG_DVB_ISL6423_MODULE) && defined(MODULE))
extern struct dvb_frontend *isl6423_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
const struct isl6423_config *config);
static inline struct dvb_frontend *isl6423_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
const struct isl6423_config *config)
