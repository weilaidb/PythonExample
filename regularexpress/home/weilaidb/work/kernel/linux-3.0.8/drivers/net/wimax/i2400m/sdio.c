#define D_SUBMODULE main
static int ioe_timeout = 2;
module_param(ioe_timeout, int, 0);
static char i2400ms_debug_params[128];
module_param_string(debug, i2400ms_debug_params, sizeof(i2400ms_debug_params),
0644);
MODULE_PARM_DESC(debug,
"String of space-separated NAME:VALUE pairs, where NAMEs "
"are the different debug submodules and VALUE are the "
"initial debug value to set.");
static const char *i2400ms_bus_fw_names[] = ;
static const struct i2400m_poke_table i2400ms_pokes[] = ;
static
int i2400ms_enable_function(struct i2400ms *i2400ms, unsigned maxtries)
static
int i2400ms_bus_setup(struct i2400m *i2400m)
static
void i2400ms_bus_release(struct i2400m *i2400m)
static
int i2400ms_bus_dev_start(struct i2400m *i2400m)
static
int __i2400ms_send_barker(struct i2400ms *i2400ms,
const __le32 *barker, size_t barker_size)
static
int i2400ms_bus_reset(struct i2400m *i2400m, enum i2400m_reset_type rt)
static
void i2400ms_netdev_setup(struct net_device *net_dev)
struct d_level D_LEVEL[] = ;
size_t D_LEVEL_SIZE = ARRAY_SIZE(D_LEVEL);
#define __debugfs_register(prefix, name, parent)			\
do  while (0)
static
int i2400ms_debugfs_add(struct i2400ms *i2400ms)
static struct device_type i2400ms_type = ;
static
int i2400ms_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static
void i2400ms_remove(struct sdio_func *func)
static
const struct sdio_device_id i2400ms_sdio_ids[] = ;
MODULE_DEVICE_TABLE(sdio, i2400ms_sdio_ids);
static
struct sdio_driver i2400m_sdio_driver = ;
static
int __init i2400ms_driver_init(void)
module_init(i2400ms_driver_init);
static
void __exit i2400ms_driver_exit(void)
module_exit(i2400ms_driver_exit);
MODULE_AUTHOR("Intel Corporation <linux-wimax@intel.com>");
MODULE_DESCRIPTION("Intel 2400M WiMAX networking for SDIO");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(I2400MS_FW_FILE_NAME);
