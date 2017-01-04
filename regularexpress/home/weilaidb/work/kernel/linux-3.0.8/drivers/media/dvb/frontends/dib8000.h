#define DIB8000_H
struct dib8000_config ;
#define DEFAULT_DIB8000_I2C_ADDRESS 18
#if defined(CONFIG_DVB_DIB8000) || (defined(CONFIG_DVB_DIB8000_MODULE) && defined(MODULE))
extern struct dvb_frontend *dib8000_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib8000_config *cfg);
extern struct i2c_adapter *dib8000_get_i2c_master(struct dvb_frontend *, enum dibx000_i2c_interface, int);
extern int dib8000_i2c_enumeration(struct i2c_adapter *host, int no_of_demods, u8 default_addr, u8 first_addr);
extern int dib8000_set_gpio(struct dvb_frontend *, u8 num, u8 dir, u8 val);
extern int dib8000_set_wbd_ref(struct dvb_frontend *, u16 value);
extern int dib8000_pid_filter_ctrl(struct dvb_frontend *, u8 onoff);
extern int dib8000_pid_filter(struct dvb_frontend *, u8 id, u16 pid, u8 onoff);
extern int dib8000_set_tune_state(struct dvb_frontend *fe, enum frontend_tune_state tune_state);
extern enum frontend_tune_state dib8000_get_tune_state(struct dvb_frontend *fe);
extern void dib8000_pwm_agc_reset(struct dvb_frontend *fe);
extern s32 dib8000_get_adc_power(struct dvb_frontend *fe, u8 mode);
extern int dib8000_set_slave_frontend(struct dvb_frontend *fe, struct dvb_frontend *fe_slave);
extern int dib8000_remove_slave_frontend(struct dvb_frontend *fe);
extern struct dvb_frontend *dib8000_get_slave_frontend(struct dvb_frontend *fe, int slave_index);
static inline struct dvb_frontend *dib8000_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib8000_config *cfg)
static inline struct i2c_adapter *dib8000_get_i2c_master(struct dvb_frontend *fe, enum dibx000_i2c_interface i, int x)
static inline int dib8000_i2c_enumeration(struct i2c_adapter *host, int no_of_demods, u8 default_addr, u8 first_addr)
static inline int dib8000_set_gpio(struct dvb_frontend *fe, u8 num, u8 dir, u8 val)
static inline int dib8000_set_wbd_ref(struct dvb_frontend *fe, u16 value)
static inline int dib8000_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff)
static inline int dib8000_pid_filter(struct dvb_frontend *fe, u8 id, u16 pid, u8 onoff)
static inline int dib8000_set_tune_state(struct dvb_frontend *fe, enum frontend_tune_state tune_state)
static inline enum frontend_tune_state dib8000_get_tune_state(struct dvb_frontend *fe)
static inline void dib8000_pwm_agc_reset(struct dvb_frontend *fe)
static inline s32 dib8000_get_adc_power(struct dvb_frontend *fe, u8 mode)
static inline int dib8000_set_slave_frontend(struct dvb_frontend *fe, struct dvb_frontend *fe_slave)
int dib8000_remove_slave_frontend(struct dvb_frontend *fe)
static inline struct dvb_frontend *dib8000_get_slave_frontend(struct dvb_frontend *fe, int slave_index)
