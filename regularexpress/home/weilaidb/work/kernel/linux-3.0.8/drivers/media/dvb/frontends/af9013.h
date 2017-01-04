#define _AF9013_H_
enum af9013_ts_mode ;
enum af9013_tuner ;
#define AF9013_GPIO_ON (1 << 0)
#define AF9013_GPIO_EN (1 << 1)
#define AF9013_GPIO_O  (1 << 2)
#define AF9013_GPIO_I  (1 << 3)
#define AF9013_GPIO_LO (AF9013_GPIO_ON|AF9013_GPIO_EN)
#define AF9013_GPIO_HI (AF9013_GPIO_ON|AF9013_GPIO_EN|AF9013_GPIO_O)
#define AF9013_GPIO_TUNER_ON  (AF9013_GPIO_ON|AF9013_GPIO_EN)
#define AF9013_GPIO_TUNER_OFF (AF9013_GPIO_ON|AF9013_GPIO_EN|AF9013_GPIO_O)
struct af9013_config ;
#if defined(CONFIG_DVB_AF9013) || \
(defined(CONFIG_DVB_AF9013_MODULE) && defined(MODULE))
extern struct dvb_frontend *af9013_attach(const struct af9013_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *af9013_attach(
const struct af9013_config *config, struct i2c_adapter *i2c)
