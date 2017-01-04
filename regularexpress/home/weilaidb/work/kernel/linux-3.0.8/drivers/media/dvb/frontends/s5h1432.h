#define __S5H1432_H__
#define S5H1432_I2C_TOP_ADDR (0x02 >> 1)
#define TAIWAN_HI_IF_FREQ_44_MHZ 44000000
#define EUROPE_HI_IF_FREQ_36_MHZ 36000000
#define IF_FREQ_6_MHZ             6000000
#define IF_FREQ_3point3_MHZ       3300000
#define IF_FREQ_3point5_MHZ       3500000
#define IF_FREQ_4_MHZ             4000000
struct s5h1432_config ;
#if defined(CONFIG_DVB_S5H1432) || \
(defined(CONFIG_DVB_S5H1432_MODULE) && defined(MODULE))
extern struct dvb_frontend *s5h1432_attach(const struct s5h1432_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *s5h1432_attach(const struct s5h1432_config
*config,
struct i2c_adapter *i2c)
