#define __S5H1409_H__
struct s5h1409_config ;
#if defined(CONFIG_DVB_S5H1409) || (defined(CONFIG_DVB_S5H1409_MODULE) \
&& defined(MODULE))
extern struct dvb_frontend *s5h1409_attach(const struct s5h1409_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *s5h1409_attach(
const struct s5h1409_config *config,
struct i2c_adapter *i2c)
