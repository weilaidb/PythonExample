#define __AU8522_H__
enum au8522_if_freq ;
struct au8522_led_config ;
struct au8522_config ;
#if defined(CONFIG_DVB_AU8522) || 				\
(defined(CONFIG_DVB_AU8522_MODULE) && defined(MODULE))
extern struct dvb_frontend *au8522_attach(const struct au8522_config *config,
struct i2c_adapter *i2c);
static inline
struct dvb_frontend *au8522_attach(const struct au8522_config *config,
struct i2c_adapter *i2c)
enum au8522_video_input ;
enum au8522_audio_input ;
