#define _LINUX_I2C_MUX_H
struct i2c_adapter *i2c_add_mux_adapter(struct i2c_adapter *parent,
void *mux_dev, u32 force_nr, u32 chan_id,
int (*select) (struct i2c_adapter *,
void *mux_dev, u32 chan_id),
int (*deselect) (struct i2c_adapter *,
void *mux_dev, u32 chan_id));
int i2c_del_mux_adapter(struct i2c_adapter *adap);
