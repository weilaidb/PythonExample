#define VIAFB_NUM_I2C		5
static struct via_i2c_stuff via_i2c_par[VIAFB_NUM_I2C];
static struct viafb_dev *i2c_vdev;
static void via_i2c_setscl(void *data, int state)
static int via_i2c_getscl(void *data)
static int via_i2c_getsda(void *data)
static void via_i2c_setsda(void *data, int state)
int viafb_i2c_readbyte(u8 adap, u8 slave_addr, u8 index, u8 *pdata)
int viafb_i2c_writebyte(u8 adap, u8 slave_addr, u8 index, u8 data)
int viafb_i2c_readbytes(u8 adap, u8 slave_addr, u8 index, u8 *buff, int buff_len)
struct i2c_adapter *viafb_find_i2c_adapter(enum viafb_i2c_adap which)
EXPORT_SYMBOL_GPL(viafb_find_i2c_adapter);
static int create_i2c_bus(struct i2c_adapter *adapter,
struct i2c_algo_bit_data *algo,
struct via_port_cfg *adap_cfg,
struct pci_dev *pdev)
static int viafb_i2c_probe(struct platform_device *platdev)
static int viafb_i2c_remove(struct platform_device *platdev)
static struct platform_driver via_i2c_driver = ;
int viafb_i2c_init(void)
void viafb_i2c_exit(void)
