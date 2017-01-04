#define _CXD2099_H_
#if defined(CONFIG_DVB_CXD2099) || \
(defined(CONFIG_DVB_CXD2099_MODULE) && defined(MODULE))
struct dvb_ca_en50221 *cxd2099_attach(u8 adr, void *priv, struct i2c_adapter *i2c);
static inline struct dvb_ca_en50221 *cxd2099_attach(u8 adr, void *priv, struct i2c_adapter *i2c)
