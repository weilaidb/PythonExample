#define __TEA5767_H__
enum tea5767_xtal ;
struct tea5767_ctrl ;
#if defined(CONFIG_MEDIA_TUNER_TEA5767) || (defined(CONFIG_MEDIA_TUNER_TEA5767_MODULE) && defined(MODULE))
extern int tea5767_autodetection(struct i2c_adapter* i2c_adap, u8 i2c_addr);
extern struct dvb_frontend *tea5767_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr);
static inline int tea5767_autodetection(struct i2c_adapter* i2c_adap,
u8 i2c_addr)
static inline struct dvb_frontend *tea5767_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr)
