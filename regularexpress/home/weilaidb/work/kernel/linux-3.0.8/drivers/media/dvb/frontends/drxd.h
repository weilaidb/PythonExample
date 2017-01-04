#define _DRXD_H_
struct drxd_config ;
extern
struct dvb_frontend *drxd_attach(const struct drxd_config *config,
void *priv, struct i2c_adapter *i2c,
struct device *dev);
extern int drxd_config_i2c(struct dvb_frontend *, int);
