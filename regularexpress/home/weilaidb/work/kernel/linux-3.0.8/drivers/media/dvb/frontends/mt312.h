#define MT312_H
struct mt312_config ;
#if defined(CONFIG_DVB_MT312) || (defined(CONFIG_DVB_MT312_MODULE) && defined(MODULE))
struct dvb_frontend *mt312_attach(const struct mt312_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *mt312_attach(
const struct mt312_config *config, struct i2c_adapter *i2c)
