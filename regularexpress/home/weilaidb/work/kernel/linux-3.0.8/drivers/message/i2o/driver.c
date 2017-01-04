#define OSM_NAME	"i2o"
static unsigned int i2o_max_drivers = I2O_MAX_DRIVERS;
module_param_named(max_drivers, i2o_max_drivers, uint, 0);
MODULE_PARM_DESC(max_drivers, "maximum number of OSM's to support");
static spinlock_t i2o_drivers_lock;
static struct i2o_driver **i2o_drivers;
static int i2o_bus_match(struct device *dev, struct device_driver *drv)
;
struct bus_type i2o_bus_type = ;
int i2o_driver_register(struct i2o_driver *drv)
;
void i2o_driver_unregister(struct i2o_driver *drv)
;
int i2o_driver_dispatch(struct i2o_controller *c, u32 m)
void i2o_driver_notify_controller_add_all(struct i2o_controller *c)
void i2o_driver_notify_controller_remove_all(struct i2o_controller *c)
void i2o_driver_notify_device_add_all(struct i2o_device *i2o_dev)
void i2o_driver_notify_device_remove_all(struct i2o_device *i2o_dev)
int __init i2o_driver_init(void)
;
void i2o_driver_exit(void)
;
EXPORT_SYMBOL(i2o_driver_register);
EXPORT_SYMBOL(i2o_driver_unregister);
EXPORT_SYMBOL(i2o_driver_notify_controller_add_all);
EXPORT_SYMBOL(i2o_driver_notify_controller_remove_all);
EXPORT_SYMBOL(i2o_driver_notify_device_add_all);
EXPORT_SYMBOL(i2o_driver_notify_device_remove_all);
