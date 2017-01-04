#define VES1820_H
#define VES1820_SELAGC_PWM 0
#define VES1820_SELAGC_SIGNAMPERR 1
struct ves1820_config
;
#if defined(CONFIG_DVB_VES1820) || (defined(CONFIG_DVB_VES1820_MODULE) && defined(MODULE))
extern struct dvb_frontend* ves1820_attach(const struct ves1820_config* config,
struct i2c_adapter* i2c, u8 pwm);
static inline struct dvb_frontend* ves1820_attach(const struct ves1820_config* config,
struct i2c_adapter* i2c, u8 pwm)
