#define __DVB_STV6110_H__
#define RSTV6110_CTRL1		0
#define RSTV6110_CTRL2		1
#define RSTV6110_TUNING1	2
#define RSTV6110_TUNING2	3
#define RSTV6110_CTRL3		4
#define RSTV6110_STAT1		5
#define RSTV6110_STAT2		6
#define RSTV6110_STAT3		7
struct stv6110_config ;
#if defined(CONFIG_DVB_STV6110) || (defined(CONFIG_DVB_STV6110_MODULE) \
&& defined(MODULE))
extern struct dvb_frontend *stv6110_attach(struct dvb_frontend *fe,
const struct stv6110_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *stv6110_attach(struct dvb_frontend *fe,
const struct stv6110_config *config,
struct i2c_adapter *i2c)
