#define __TDA18271_H__
struct tda18271_std_map_item ;
struct tda18271_std_map ;
enum tda18271_role ;
enum tda18271_i2c_gate ;
enum tda18271_output_options ;
enum tda18271_small_i2c ;
struct tda18271_config ;
#define TDA18271_CALLBACK_CMD_AGC_ENABLE 0
enum tda18271_mode ;
#if defined(CONFIG_MEDIA_TUNER_TDA18271) || (defined(CONFIG_MEDIA_TUNER_TDA18271_MODULE) && defined(MODULE))
extern struct dvb_frontend *tda18271_attach(struct dvb_frontend *fe, u8 addr,
struct i2c_adapter *i2c,
struct tda18271_config *cfg);
static inline struct dvb_frontend *tda18271_attach(struct dvb_frontend *fe,
u8 addr,
struct i2c_adapter *i2c,
struct tda18271_config *cfg)
