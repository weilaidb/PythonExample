#define DIB3000MC_H
struct dib3000mc_config ;
#define DEFAULT_DIB3000MC_I2C_ADDRESS 16
#define DEFAULT_DIB3000P_I2C_ADDRESS  24
#if defined(CONFIG_DVB_DIB3000MC) || (defined(CONFIG_DVB_DIB3000MC_MODULE) && \
defined(MODULE))
extern struct dvb_frontend *dib3000mc_attach(struct i2c_adapter *i2c_adap,
u8 i2c_addr,
struct dib3000mc_config *cfg);
extern int dib3000mc_i2c_enumeration(struct i2c_adapter *i2c,
int no_of_demods, u8 default_addr,
struct dib3000mc_config cfg[]);
extern
struct i2c_adapter *dib3000mc_get_tuner_i2c_master(struct dvb_frontend *demod,
int gating);
static inline
struct dvb_frontend *dib3000mc_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr,
struct dib3000mc_config *cfg)
static inline
int dib3000mc_i2c_enumeration(struct i2c_adapter *i2c,
int no_of_demods, u8 default_addr,
struct dib3000mc_config cfg[])
static inline
struct i2c_adapter *dib3000mc_get_tuner_i2c_master(struct dvb_frontend *demod,
int gating)
extern int dib3000mc_pid_control(struct dvb_frontend *fe, int index, int pid,int onoff);
extern int dib3000mc_pid_parse(struct dvb_frontend *fe, int onoff);
extern void dib3000mc_set_config(struct dvb_frontend *, struct dib3000mc_config *);
