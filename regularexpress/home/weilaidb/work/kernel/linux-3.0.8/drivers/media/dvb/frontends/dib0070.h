#define DIB0070_H
struct dvb_frontend;
struct i2c_adapter;
#define DEFAULT_DIB0070_I2C_ADDRESS 0x60
struct dib0070_wbd_gain_cfg ;
struct dib0070_config ;
#if defined(CONFIG_DVB_TUNER_DIB0070) || (defined(CONFIG_DVB_TUNER_DIB0070_MODULE) && defined(MODULE))
extern struct dvb_frontend *dib0070_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct dib0070_config *cfg);
extern u16 dib0070_wbd_offset(struct dvb_frontend *);
extern void dib0070_ctrl_agc_filter(struct dvb_frontend *, u8 open);
extern u8 dib0070_get_rf_output(struct dvb_frontend *fe);
extern int dib0070_set_rf_output(struct dvb_frontend *fe, u8 no);
static inline struct dvb_frontend *dib0070_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct dib0070_config *cfg)
static inline u16 dib0070_wbd_offset(struct dvb_frontend *fe)
static inline void dib0070_ctrl_agc_filter(struct dvb_frontend *fe, u8 open)
