static DEFINE_MUTEX(core_lock);
static DEFINE_IDR(i2c_adapter_idr);
static struct device_type i2c_client_type;
static int i2c_detect(struct i2c_adapter *adapter, struct i2c_driver *driver);
static const struct i2c_device_id *i2c_match_id(const struct i2c_device_id *id,
const struct i2c_client *client)
static int i2c_device_match(struct device *dev, struct device_driver *drv)
static int i2c_device_uevent(struct device *dev, struct kobj_uevent_env *env)
#define i2c_device_uevent	NULL
static int i2c_device_probe(struct device *dev)
static int i2c_device_remove(struct device *dev)
static void i2c_device_shutdown(struct device *dev)
static int i2c_legacy_suspend(struct device *dev, pm_message_t mesg)
static int i2c_legacy_resume(struct device *dev)
static int i2c_device_pm_suspend(struct device *dev)
static int i2c_device_pm_resume(struct device *dev)
static int i2c_device_pm_freeze(struct device *dev)
static int i2c_device_pm_thaw(struct device *dev)
static int i2c_device_pm_poweroff(struct device *dev)
static int i2c_device_pm_restore(struct device *dev)
#define i2c_device_pm_suspend	NULL
#define i2c_device_pm_resume	NULL
#define i2c_device_pm_freeze	NULL
#define i2c_device_pm_thaw	NULL
#define i2c_device_pm_poweroff	NULL
#define i2c_device_pm_restore	NULL
static void i2c_client_dev_release(struct device *dev)
static ssize_t
show_name(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_modalias(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static DEVICE_ATTR(modalias, S_IRUGO, show_modalias, NULL);
static struct attribute *i2c_dev_attrs[] = ;
static struct attribute_group i2c_dev_attr_group = ;
static const struct attribute_group *i2c_dev_attr_groups[] = ;
static const struct dev_pm_ops i2c_device_pm_ops = ;
struct bus_type i2c_bus_type = ;
EXPORT_SYMBOL_GPL(i2c_bus_type);
static struct device_type i2c_client_type = ;
struct i2c_client *i2c_verify_client(struct device *dev)
EXPORT_SYMBOL(i2c_verify_client);
static int i2c_check_client_addr_validity(const struct i2c_client *client)
static int i2c_check_addr_validity(unsigned short addr)
static int __i2c_check_addr_busy(struct device *dev, void *addrp)
static int i2c_check_mux_parents(struct i2c_adapter *adapter, int addr)
static int i2c_check_mux_children(struct device *dev, void *addrp)
static int i2c_check_addr_busy(struct i2c_adapter *adapter, int addr)
void i2c_lock_adapter(struct i2c_adapter *adapter)
EXPORT_SYMBOL_GPL(i2c_lock_adapter);
static int i2c_trylock_adapter(struct i2c_adapter *adapter)
void i2c_unlock_adapter(struct i2c_adapter *adapter)
EXPORT_SYMBOL_GPL(i2c_unlock_adapter);
struct i2c_client *
i2c_new_device(struct i2c_adapter *adap, struct i2c_board_info const *info)
EXPORT_SYMBOL_GPL(i2c_new_device);
void i2c_unregister_device(struct i2c_client *client)
EXPORT_SYMBOL_GPL(i2c_unregister_device);
static const struct i2c_device_id dummy_id[] = ;
static int dummy_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int dummy_remove(struct i2c_client *client)
static struct i2c_driver dummy_driver = ;
struct i2c_client *i2c_new_dummy(struct i2c_adapter *adapter, u16 address)
EXPORT_SYMBOL_GPL(i2c_new_dummy);
static void i2c_adapter_dev_release(struct device *dev)
static ssize_t
i2c_sysfs_new_device(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
i2c_sysfs_delete_device(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(new_device, S_IWUSR, NULL, i2c_sysfs_new_device);
static DEVICE_ATTR(delete_device, S_IWUSR, NULL, i2c_sysfs_delete_device);
static struct attribute *i2c_adapter_attrs[] = ;
static struct attribute_group i2c_adapter_attr_group = ;
static const struct attribute_group *i2c_adapter_attr_groups[] = ;
struct device_type i2c_adapter_type = ;
EXPORT_SYMBOL_GPL(i2c_adapter_type);
static struct class_compat *i2c_adapter_compat_class;
static void i2c_scan_static_board_info(struct i2c_adapter *adapter)
static int i2c_do_add_adapter(struct i2c_driver *driver,
struct i2c_adapter *adap)
static int __process_new_adapter(struct device_driver *d, void *data)
static int i2c_register_adapter(struct i2c_adapter *adap)
int i2c_add_adapter(struct i2c_adapter *adapter)
EXPORT_SYMBOL(i2c_add_adapter);
int i2c_add_numbered_adapter(struct i2c_adapter *adap)
EXPORT_SYMBOL_GPL(i2c_add_numbered_adapter);
static int i2c_do_del_adapter(struct i2c_driver *driver,
struct i2c_adapter *adapter)
static int __unregister_client(struct device *dev, void *dummy)
static int __unregister_dummy(struct device *dev, void *dummy)
static int __process_removed_adapter(struct device_driver *d, void *data)
int i2c_del_adapter(struct i2c_adapter *adap)
EXPORT_SYMBOL(i2c_del_adapter);
int i2c_for_each_dev(void *data, int (*fn)(struct device *, void *))
EXPORT_SYMBOL_GPL(i2c_for_each_dev);
static int __process_new_driver(struct device *dev, void *data)
int i2c_register_driver(struct module *owner, struct i2c_driver *driver)
EXPORT_SYMBOL(i2c_register_driver);
static int __process_removed_driver(struct device *dev, void *data)
void i2c_del_driver(struct i2c_driver *driver)
EXPORT_SYMBOL(i2c_del_driver);
struct i2c_client *i2c_use_client(struct i2c_client *client)
EXPORT_SYMBOL(i2c_use_client);
void i2c_release_client(struct i2c_client *client)
EXPORT_SYMBOL(i2c_release_client);
struct i2c_cmd_arg ;
static int i2c_cmd(struct device *dev, void *_arg)
void i2c_clients_command(struct i2c_adapter *adap, unsigned int cmd, void *arg)
EXPORT_SYMBOL(i2c_clients_command);
static int __init i2c_init(void)
static void __exit i2c_exit(void)
postcore_initcall(i2c_init);
module_exit(i2c_exit);
int i2c_transfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
EXPORT_SYMBOL(i2c_transfer);
int i2c_master_send(const struct i2c_client *client, const char *buf, int count)
EXPORT_SYMBOL(i2c_master_send);
int i2c_master_recv(const struct i2c_client *client, char *buf, int count)
EXPORT_SYMBOL(i2c_master_recv);
static int i2c_default_probe(struct i2c_adapter *adap, unsigned short addr)
static int i2c_detect_address(struct i2c_client *temp_client,
struct i2c_driver *driver)
static int i2c_detect(struct i2c_adapter *adapter, struct i2c_driver *driver)
int i2c_probe_func_quick_read(struct i2c_adapter *adap, unsigned short addr)
EXPORT_SYMBOL_GPL(i2c_probe_func_quick_read);
struct i2c_client *
i2c_new_probed_device(struct i2c_adapter *adap,
struct i2c_board_info *info,
unsigned short const *addr_list,
int (*probe)(struct i2c_adapter *, unsigned short addr))
EXPORT_SYMBOL_GPL(i2c_new_probed_device);
struct i2c_adapter *i2c_get_adapter(int nr)
EXPORT_SYMBOL(i2c_get_adapter);
void i2c_put_adapter(struct i2c_adapter *adap)
EXPORT_SYMBOL(i2c_put_adapter);
#define POLY    (0x1070U << 3)
static u8 crc8(u16 data)
static u8 i2c_smbus_pec(u8 crc, u8 *p, size_t count)
static u8 i2c_smbus_msg_pec(u8 pec, struct i2c_msg *msg)
static inline void i2c_smbus_add_pec(struct i2c_msg *msg)
static int i2c_smbus_check_pec(u8 cpec, struct i2c_msg *msg)
s32 i2c_smbus_read_byte(const struct i2c_client *client)
EXPORT_SYMBOL(i2c_smbus_read_byte);
s32 i2c_smbus_write_byte(const struct i2c_client *client, u8 value)
EXPORT_SYMBOL(i2c_smbus_write_byte);
s32 i2c_smbus_read_byte_data(const struct i2c_client *client, u8 command)
EXPORT_SYMBOL(i2c_smbus_read_byte_data);
s32 i2c_smbus_write_byte_data(const struct i2c_client *client, u8 command,
u8 value)
EXPORT_SYMBOL(i2c_smbus_write_byte_data);
s32 i2c_smbus_read_word_data(const struct i2c_client *client, u8 command)
EXPORT_SYMBOL(i2c_smbus_read_word_data);
s32 i2c_smbus_write_word_data(const struct i2c_client *client, u8 command,
u16 value)
EXPORT_SYMBOL(i2c_smbus_write_word_data);
s32 i2c_smbus_process_call(const struct i2c_client *client, u8 command,
u16 value)
EXPORT_SYMBOL(i2c_smbus_process_call);
s32 i2c_smbus_read_block_data(const struct i2c_client *client, u8 command,
u8 *values)
EXPORT_SYMBOL(i2c_smbus_read_block_data);
s32 i2c_smbus_write_block_data(const struct i2c_client *client, u8 command,
u8 length, const u8 *values)
EXPORT_SYMBOL(i2c_smbus_write_block_data);
s32 i2c_smbus_read_i2c_block_data(const struct i2c_client *client, u8 command,
u8 length, u8 *values)
EXPORT_SYMBOL(i2c_smbus_read_i2c_block_data);
s32 i2c_smbus_write_i2c_block_data(const struct i2c_client *client, u8 command,
u8 length, const u8 *values)
EXPORT_SYMBOL(i2c_smbus_write_i2c_block_data);
static s32 i2c_smbus_xfer_emulated(struct i2c_adapter *adapter, u16 addr,
unsigned short flags,
char read_write, u8 command, int size,
union i2c_smbus_data *data)
s32 i2c_smbus_xfer(struct i2c_adapter *adapter, u16 addr, unsigned short flags,
char read_write, u8 command, int protocol,
union i2c_smbus_data *data)
EXPORT_SYMBOL(i2c_smbus_xfer);
MODULE_AUTHOR("Simon G. Vogl <simon@tk.uni-linz.ac.at>");
MODULE_DESCRIPTION("I2C-Bus main module");
MODULE_LICENSE("GPL");
