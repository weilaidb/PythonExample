#define _LINUX_I2C_ALGO_BIT_H
struct i2c_algo_bit_data ;
int i2c_bit_add_bus(struct i2c_adapter *);
int i2c_bit_add_numbered_bus(struct i2c_adapter *);
