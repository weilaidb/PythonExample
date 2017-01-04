#define DIB7000P_H
struct dib7000p_config ;
#define DEFAULT_DIB7000P_I2C_ADDRESS 18
#if defined(CONFIG_DVB_DIB7000P) || (defined(CONFIG_DVB_DIB7000P_MODULE) && \
defined(MODULE))
extern struct dvb_frontend *dib7000p_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib7000p_config *cfg);
extern struct i2c_adapter *dib7000p_get_i2c_master(struct dvb_frontend *, enum dibx000_i2c_interface, int);
extern int dib7000p_i2c_enumeration(struct i2c_adapter *i2c, int no_of_demods, u8 default_addr, struct dib7000p_config cfg[]);
extern int dib7000p_set_gpio(struct dvb_frontend *, u8 num, u8 dir, u8 val);
extern int dib7000p_set_wbd_ref(struct dvb_frontend *, u16 value);
extern int dib7000pc_detection(struct i2c_adapter *i2c_adap);
extern int dib7000p_pid_filter(struct dvb_frontend *, u8 id, u16 pid, u8 onoff);
extern int dib7000p_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff);
extern int dib7000p_update_pll(struct dvb_frontend *fe, struct dibx000_bandwidth_config *bw);
extern u32 dib7000p_ctrl_timf(struct dvb_frontend *fe, u8 op, u32 timf);
extern int dib7090_agc_restart(struct dvb_frontend *fe, u8 restart);
extern int dib7090_tuner_sleep(struct dvb_frontend *fe, int onoff);
extern int dib7090_get_adc_power(struct dvb_frontend *fe);
extern struct i2c_adapter *dib7090_get_i2c_tuner(struct dvb_frontend *fe);
extern int dib7090_slave_reset(struct dvb_frontend *fe);
static inline struct dvb_frontend *dib7000p_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib7000p_config *cfg)
static inline struct i2c_adapter *dib7000p_get_i2c_master(struct dvb_frontend *fe, enum dibx000_i2c_interface i, int x)
static inline int dib7000p_i2c_enumeration(struct i2c_adapter *i2c, int no_of_demods, u8 default_addr, struct dib7000p_config cfg[])
static inline int dib7000p_set_gpio(struct dvb_frontend *fe, u8 num, u8 dir, u8 val)
static inline int dib7000p_set_wbd_ref(struct dvb_frontend *fe, u16 value)
static inline int dib7000pc_detection(struct i2c_adapter *i2c_adap)
static inline int dib7000p_pid_filter(struct dvb_frontend *fe, u8 id, u16 pid, u8 onoff)
static inline int dib7000p_pid_filter_ctrl(struct dvb_frontend *fe, uint8_t onoff)
static inline int dib7000p_update_pll(struct dvb_frontend *fe, struct dibx000_bandwidth_config *bw)
static inline u32 dib7000p_ctrl_timf(struct dvb_frontend *fe, u8 op, u32 timf)
static inline int dib7090_agc_restart(struct dvb_frontend *fe, u8 restart)
static inline int dib7090_tuner_sleep(struct dvb_frontend *fe, int onoff)
static inline int dib7090_get_adc_power(struct dvb_frontend *fe)
static inline struct i2c_adapter *dib7090_get_i2c_tuner(struct dvb_frontend *fe)
static inline int dib7090_slave_reset(struct dvb_frontend *fe)
