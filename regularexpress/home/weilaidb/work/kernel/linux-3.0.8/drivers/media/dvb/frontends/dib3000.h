#define DIB3000_H
struct dib3000_config
;
struct dib_fe_xfer_ops
;
#if defined(CONFIG_DVB_DIB3000MB) || (defined(CONFIG_DVB_DIB3000MB_MODULE) && defined(MODULE))
extern struct dvb_frontend* dib3000mb_attach(const struct dib3000_config* config,
struct i2c_adapter* i2c, struct dib_fe_xfer_ops *xfer_ops);
static inline struct dvb_frontend* dib3000mb_attach(const struct dib3000_config* config,
struct i2c_adapter* i2c, struct dib_fe_xfer_ops *xfer_ops)
