#define DIB7000M_H
struct dib7000m_config ;
#define DEFAULT_DIB7000M_I2C_ADDRESS 18
#if defined(CONFIG_DVB_DIB7000M) || (defined(CONFIG_DVB_DIB7000M_MODULE) && \
defined(MODULE))
extern struct dvb_frontend *dib7000m_attach(struct i2c_adapter *i2c_adap,
u8 i2c_addr,
struct dib7000m_config *cfg);
extern struct i2c_adapter *dib7000m_get_i2c_master(struct dvb_frontend *,
enum dibx000_i2c_interface,
int);
extern int dib7000m_pid_filter(struct dvb_frontend *, u8 id, u16 pid, u8 onoff);
extern int dib7000m_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff);
static inline
struct dvb_frontend *dib7000m_attach(struct i2c_adapter *i2c_adap,
u8 i2c_addr, struct dib7000m_config *cfg)
static inline
struct i2c_adapter *dib7000m_get_i2c_master(struct dvb_frontend *demod,
enum dibx000_i2c_interface intf,
int gating)
static inline int dib7000m_pid_filter(struct dvb_frontend *fe, u8 id,
u16 pid, u8 onoff)
static inline int dib7000m_pid_filter_ctrl(struct dvb_frontend *fe,
uint8_t onoff)
