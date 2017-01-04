int i2sbus_control_init(struct macio_dev* dev, struct i2sbus_control **c)
void i2sbus_control_destroy(struct i2sbus_control *c)
int i2sbus_control_add_dev(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev)
void i2sbus_control_remove_dev(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev)
int i2sbus_control_enable(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev)
int i2sbus_control_cell(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev,
int enable)
int i2sbus_control_clock(struct i2sbus_control *c,
struct i2sbus_dev *i2sdev,
int enable)
