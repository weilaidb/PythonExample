#define CX24110_H
struct cx24110_config
;
static inline int cx24110_pll_write(struct dvb_frontend *fe, u32 val)
#if defined(CONFIG_DVB_CX24110) || (defined(CONFIG_DVB_CX24110_MODULE) && defined(MODULE))
extern struct dvb_frontend* cx24110_attach(const struct cx24110_config* config,
struct i2c_adapter* i2c);
static inline struct dvb_frontend* cx24110_attach(const struct cx24110_config* config,
struct i2c_adapter* i2c)
