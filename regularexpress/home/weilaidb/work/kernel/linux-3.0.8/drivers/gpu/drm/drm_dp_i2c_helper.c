static int
i2c_algo_dp_aux_transaction(struct i2c_adapter *adapter, int mode,
uint8_t write_byte, uint8_t *read_byte)
static int
i2c_algo_dp_aux_address(struct i2c_adapter *adapter, u16 address, bool reading)
static void
i2c_algo_dp_aux_stop(struct i2c_adapter *adapter, bool reading)
static int
i2c_algo_dp_aux_put_byte(struct i2c_adapter *adapter, u8 byte)
static int
i2c_algo_dp_aux_get_byte(struct i2c_adapter *adapter, u8 *byte_ret)
static int
i2c_algo_dp_aux_xfer(struct i2c_adapter *adapter,
struct i2c_msg *msgs,
int num)
static u32
i2c_algo_dp_aux_functionality(struct i2c_adapter *adapter)
static const struct i2c_algorithm i2c_dp_aux_algo = ;
static void
i2c_dp_aux_reset_bus(struct i2c_adapter *adapter)
static int
i2c_dp_aux_prepare_bus(struct i2c_adapter *adapter)
int
i2c_dp_aux_add_bus(struct i2c_adapter *adapter)
EXPORT_SYMBOL(i2c_dp_aux_add_bus);
