#define __MXL5005S_H
struct mxl5005s_config ;
#if defined(CONFIG_MEDIA_TUNER_MXL5005S) || \
(defined(CONFIG_MEDIA_TUNER_MXL5005S_MODULE) && defined(MODULE))
extern struct dvb_frontend *mxl5005s_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct mxl5005s_config *config);
static inline struct dvb_frontend *mxl5005s_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct mxl5005s_config *config)
