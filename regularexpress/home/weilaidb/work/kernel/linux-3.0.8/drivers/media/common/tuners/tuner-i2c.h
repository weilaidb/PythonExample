#define __TUNER_I2C_H__
struct tuner_i2c_props ;
static inline int tuner_i2c_xfer_send(struct tuner_i2c_props *props, char *buf, int len)
static inline int tuner_i2c_xfer_recv(struct tuner_i2c_props *props, char *buf, int len)
static inline int tuner_i2c_xfer_send_recv(struct tuner_i2c_props *props,
char *obuf, int olen,
char *ibuf, int ilen)
#define tuner_printk(kernlvl, i2cprops, fmt, arg...) do  while (0)
#define __tuner_warn(i2cprops, fmt, arg...) do  while (0)
#define __tuner_info(i2cprops, fmt, arg...) do  while (0)
#define __tuner_err(i2cprops, fmt, arg...) do  while (0)
#define __tuner_dbg(i2cprops, fmt, arg...) do  while (0)
#define tuner_warn(fmt, arg...) __tuner_warn(priv->i2c_props, fmt, ##arg)
#define tuner_info(fmt, arg...) __tuner_info(priv->i2c_props, fmt, ##arg)
#define tuner_err(fmt, arg...) __tuner_err(priv->i2c_props, fmt, ##arg)
#define tuner_dbg(fmt, arg...) __tuner_dbg(priv->i2c_props, fmt, ##arg)
#define hybrid_tuner_request_state(type, state, list, i2cadap, i2caddr, devname)\
()
#define hybrid_tuner_release_state(state)				\
()
#define hybrid_tuner_report_instance_count(state)			\
()
