#define DIB0090_H
struct dvb_frontend;
struct i2c_adapter;
#define DEFAULT_DIB0090_I2C_ADDRESS 0x60
struct dib0090_io_config ;
struct dib0090_wbd_slope ;
struct dib0090_low_if_offset_table ;
struct dib0090_config ;
#if defined(CONFIG_DVB_TUNER_DIB0090) || (defined(CONFIG_DVB_TUNER_DIB0090_MODULE) && defined(MODULE))
extern struct dvb_frontend *dib0090_register(struct dvb_frontend *fe, struct i2c_adapter *i2c, const struct dib0090_config *config);
extern struct dvb_frontend *dib0090_fw_register(struct dvb_frontend *fe, struct i2c_adapter *i2c, const struct dib0090_config *config);
extern void dib0090_dcc_freq(struct dvb_frontend *fe, u8 fast);
extern void dib0090_pwm_gain_reset(struct dvb_frontend *fe);
extern u16 dib0090_get_wbd_offset(struct dvb_frontend *tuner);
extern int dib0090_gain_control(struct dvb_frontend *fe);
extern enum frontend_tune_state dib0090_get_tune_state(struct dvb_frontend *fe);
extern int dib0090_set_tune_state(struct dvb_frontend *fe, enum frontend_tune_state tune_state);
extern void dib0090_get_current_gain(struct dvb_frontend *fe, u16 * rf, u16 * bb, u16 * rf_gain_limit, u16 * rflt);
static inline struct dvb_frontend *dib0090_register(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct dib0090_config *config)
static inline struct dvb_frontend *dib0090_fw_register(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct dib0090_config *config)
static inline void dib0090_dcc_freq(struct dvb_frontend *fe, u8 fast)
static inline void dib0090_pwm_gain_reset(struct dvb_frontend *fe)
static inline u16 dib0090_get_wbd_offset(struct dvb_frontend *tuner)
static inline int dib0090_gain_control(struct dvb_frontend *fe)
static inline enum frontend_tune_state dib0090_get_tune_state(struct dvb_frontend *fe)
static inline int dib0090_set_tune_state(struct dvb_frontend *fe, enum frontend_tune_state tune_state)
static inline void dib0090_get_current_gain(struct dvb_frontend *fe, u16 * rf, u16 * bb, u16 * rf_gain_limit, u16 * rflt)
