#define __PMAC_LOW_I2C_H__
enum ;
enum ;
enum ;
enum ;
struct pmac_i2c_bus;
struct i2c_adapter;
extern int pmac_i2c_init(void);
extern struct pmac_i2c_bus *pmac_i2c_find_bus(struct device_node *node);
extern u8 pmac_i2c_get_dev_addr(struct device_node *device);
extern struct device_node *pmac_i2c_get_controller(struct pmac_i2c_bus *bus);
extern struct device_node *pmac_i2c_get_bus_node(struct pmac_i2c_bus *bus);
extern int pmac_i2c_get_type(struct pmac_i2c_bus *bus);
extern int pmac_i2c_get_flags(struct pmac_i2c_bus *bus);
extern int pmac_i2c_get_channel(struct pmac_i2c_bus *bus);
extern struct i2c_adapter *pmac_i2c_get_adapter(struct pmac_i2c_bus *bus);
extern struct pmac_i2c_bus *pmac_i2c_adapter_to_bus(struct i2c_adapter *adapter);
extern int pmac_i2c_match_adapter(struct device_node *dev,
struct i2c_adapter *adapter);
extern int pmac_low_i2c_lock(struct device_node *np);
extern int pmac_low_i2c_unlock(struct device_node *np);
extern int pmac_i2c_open(struct pmac_i2c_bus *bus, int polled);
extern void pmac_i2c_close(struct pmac_i2c_bus *bus);
extern int pmac_i2c_setmode(struct pmac_i2c_bus *bus, int mode);
extern int pmac_i2c_xfer(struct pmac_i2c_bus *bus, u8 addrdir, int subsize,
u32 subaddr, u8 *data,  int len);
extern void pmac_pfunc_i2c_suspend(void);
extern void pmac_pfunc_i2c_resume(void);
