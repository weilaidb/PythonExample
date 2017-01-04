#define D_SUBMODULE usb
static char i2400mu_debug_params[128];
module_param_string(debug, i2400mu_debug_params, sizeof(i2400mu_debug_params),
0644);
MODULE_PARM_DESC(debug,
"String of space-separated NAME:VALUE pairs, where NAMEs "
"are the different debug submodules and VALUE are the "
"initial debug value to set.");
static const char *i2400mu_bus_fw_names_5x50[] = ;
static const char *i2400mu_bus_fw_names_6050[] = ;
static
int i2400mu_bus_dev_start(struct i2400m *i2400m)
static
void i2400mu_bus_dev_stop(struct i2400m *i2400m)
static
int __i2400mu_send_barker(struct i2400mu *i2400mu,
const __le32 *barker,
size_t barker_size,
unsigned endpoint)
static
int i2400mu_bus_reset(struct i2400m *i2400m, enum i2400m_reset_type rt)
static
void i2400mu_netdev_setup(struct net_device *net_dev)
struct d_level D_LEVEL[] = ;
size_t D_LEVEL_SIZE = ARRAY_SIZE(D_LEVEL);
#define __debugfs_register(prefix, name, parent)			\
do  while (0)
static
int i2400mu_debugfs_add(struct i2400mu *i2400mu)
static struct device_type i2400mu_type = ;
static
int i2400mu_probe(struct usb_interface *iface,
const struct usb_device_id *id)
static
void i2400mu_disconnect(struct usb_interface *iface)
static
int i2400mu_suspend(struct usb_interface *iface, pm_message_t pm_msg)
static
int i2400mu_resume(struct usb_interface *iface)
static
int i2400mu_reset_resume(struct usb_interface *iface)
static
int i2400mu_pre_reset(struct usb_interface *iface)
static
int i2400mu_post_reset(struct usb_interface *iface)
static
struct usb_device_id i2400mu_id_table[] = ;
MODULE_DEVICE_TABLE(usb, i2400mu_id_table);
static
struct usb_driver i2400mu_driver = ;
static
int __init i2400mu_driver_init(void)
module_init(i2400mu_driver_init);
static
void __exit i2400mu_driver_exit(void)
module_exit(i2400mu_driver_exit);
MODULE_AUTHOR("Intel Corporation <linux-wimax@intel.com>");
MODULE_DESCRIPTION("Driver for USB based Intel Wireless WiMAX Connection 2400M "
"(5x50 & 6050)");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(I2400MU_FW_FILE_NAME_v1_5);
MODULE_FIRMWARE(I6050U_FW_FILE_NAME_v1_5);
