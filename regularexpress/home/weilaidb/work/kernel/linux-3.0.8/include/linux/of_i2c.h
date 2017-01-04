#define __LINUX_OF_I2C_H
#if defined(CONFIG_OF_I2C) || defined(CONFIG_OF_I2C_MODULE)
extern void of_i2c_register_devices(struct i2c_adapter *adap);
extern struct i2c_client *of_find_i2c_device_by_node(struct device_node *node);
static inline void of_i2c_register_devices(struct i2c_adapter *adap)
