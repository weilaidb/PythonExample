#define __MXL5007T_H__
enum mxl5007t_if_freq ;
enum mxl5007t_xtal_freq ;
enum mxl5007t_clkout_amp ;
struct mxl5007t_config ;
#if defined(CONFIG_MEDIA_TUNER_MXL5007T) || (defined(CONFIG_MEDIA_TUNER_MXL5007T_MODULE) && defined(MODULE))
extern struct dvb_frontend *mxl5007t_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, u8 addr,
struct mxl5007t_config *cfg);
static inline struct dvb_frontend *mxl5007t_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
u8 addr,
struct mxl5007t_config *cfg)
