#define DVB_IX2505V_H
struct ix2505v_config ;
#if defined(CONFIG_DVB_IX2505V) || \
(defined(CONFIG_DVB_IX2505V_MODULE) && defined(MODULE))
extern struct dvb_frontend *ix2505v_attach(struct dvb_frontend *fe,
const struct ix2505v_config *config, struct i2c_adapter *i2c);
static inline struct dvb_frontend *ix2505v_attach(struct dvb_frontend *fe,
const struct ix2505v_config *config, struct i2c_adapter *i2c)
