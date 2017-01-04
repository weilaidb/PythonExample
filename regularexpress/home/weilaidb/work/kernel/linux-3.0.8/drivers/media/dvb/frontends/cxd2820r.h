#define CXD2820R_H
#define CXD2820R_GPIO_D (0 << 0)
#define CXD2820R_GPIO_E (1 << 0)
#define CXD2820R_GPIO_O (0 << 1)
#define CXD2820R_GPIO_I (1 << 1)
#define CXD2820R_GPIO_L (0 << 2)
#define CXD2820R_GPIO_H (1 << 2)
#define CXD2820R_TS_SERIAL        0x08
#define CXD2820R_TS_SERIAL_MSB    0x28
#define CXD2820R_TS_PARALLEL      0x30
#define CXD2820R_TS_PARALLEL_MSB  0x70
struct cxd2820r_config ;
#if defined(CONFIG_DVB_CXD2820R) || \
(defined(CONFIG_DVB_CXD2820R_MODULE) && defined(MODULE))
extern struct dvb_frontend *cxd2820r_attach(
const struct cxd2820r_config *config,
struct i2c_adapter *i2c,
struct dvb_frontend *fe
);
extern struct i2c_adapter *cxd2820r_get_tuner_i2c_adapter(
struct dvb_frontend *fe
);
static inline struct dvb_frontend *cxd2820r_attach(
const struct cxd2820r_config *config,
struct i2c_adapter *i2c,
struct dvb_frontend *fe
)
static inline struct i2c_adapter *cxd2820r_get_tuner_i2c_adapter(
struct dvb_frontend *fe
)
