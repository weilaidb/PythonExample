#define DIB9000_H
struct dib9000_config ;
#define DEFAULT_DIB9000_I2C_ADDRESS 18
#if defined(CONFIG_DVB_DIB9000) || (defined(CONFIG_DVB_DIB9000_MODULE) && defined(MODULE))
extern struct dvb_frontend *dib9000_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, const struct dib9000_config *cfg);
extern int dib9000_i2c_enumeration(struct i2c_adapter *host, int no_of_demods, u8 default_addr, u8 first_addr);
extern struct i2c_adapter *dib9000_get_tuner_interface(struct dvb_frontend *fe);
extern struct i2c_adapter *dib9000_get_i2c_master(struct dvb_frontend *fe, enum dibx000_i2c_interface intf, int gating);
extern int dib9000_set_gpio(struct dvb_frontend *fe, u8 num, u8 dir, u8 val);
extern int dib9000_fw_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff);
extern int dib9000_fw_pid_filter(struct dvb_frontend *fe, u8 id, u16 pid, u8 onoff);
extern int dib9000_firmware_post_pll_init(struct dvb_frontend *fe);
extern int dib9000_set_slave_frontend(struct dvb_frontend *fe, struct dvb_frontend *fe_slave);
extern int dib9000_remove_slave_frontend(struct dvb_frontend *fe);
extern struct dvb_frontend *dib9000_get_slave_frontend(struct dvb_frontend *fe, int slave_index);
extern struct i2c_adapter *dib9000_get_component_bus_interface(struct dvb_frontend *fe);
extern int dib9000_set_i2c_adapter(struct dvb_frontend *fe, struct i2c_adapter *i2c);
extern int dib9000_fw_set_component_bus_speed(struct dvb_frontend *fe, u16 speed);
static inline struct dvb_frontend *dib9000_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib9000_config *cfg)
static inline struct i2c_adapter *dib9000_get_i2c_master(struct dvb_frontend *fe, enum dibx000_i2c_interface intf, int gating)
static inline int dib9000_i2c_enumeration(struct i2c_adapter *host, int no_of_demods, u8 default_addr, u8 first_addr)
static inline struct i2c_adapter *dib9000_get_tuner_interface(struct dvb_frontend *fe)
static inline int dib9000_set_gpio(struct dvb_frontend *fe, u8 num, u8 dir, u8 val)
static inline int dib9000_fw_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff)
static inline int dib9000_fw_pid_filter(struct dvb_frontend *fe, u8 id, u16 pid, u8 onoff)
static inline int dib9000_firmware_post_pll_init(struct dvb_frontend *fe)
static inline int dib9000_set_slave_frontend(struct dvb_frontend *fe, struct dvb_frontend *fe_slave)
int dib9000_remove_slave_frontend(struct dvb_frontend *fe)
static inline struct dvb_frontend *dib9000_get_slave_frontend(struct dvb_frontend *fe, int slave_index)
static inline struct i2c_adapter *dib9000_get_component_bus_interface(struct dvb_frontend *fe)
static inline int dib9000_set_i2c_adapter(struct dvb_frontend *fe, struct i2c_adapter *i2c)
static inline int dib9000_fw_set_component_bus_speed(struct dvb_frontend *fe, u16 speed)
