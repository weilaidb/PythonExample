#define _LINUX_I2C_SMBUS_H
struct i2c_smbus_alert_setup ;
struct i2c_client *i2c_setup_smbus_alert(struct i2c_adapter *adapter,
struct i2c_smbus_alert_setup *setup);
int i2c_handle_smbus_alert(struct i2c_client *ara);
