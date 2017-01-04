#define OSM_NAME	"bus-osm"
#define OSM_VERSION	"1.317"
#define OSM_DESCRIPTION	"I2O Bus Adapter OSM"
static struct i2o_driver i2o_bus_driver;
static struct i2o_class_id i2o_bus_class_id[] = ;
static int i2o_bus_scan(struct i2o_device *dev)
;
static ssize_t i2o_bus_store_scan(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(scan, S_IWUSR, NULL, i2o_bus_store_scan);
static int i2o_bus_probe(struct device *dev)
;
static int i2o_bus_remove(struct device *dev)
;
static struct i2o_driver i2o_bus_driver = ;
static int __init i2o_bus_init(void)
;
static void __exit i2o_bus_exit(void)
;
MODULE_AUTHOR("Markus Lidel <Markus.Lidel@shadowconnect.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(OSM_DESCRIPTION);
MODULE_VERSION(OSM_VERSION);
module_init(i2o_bus_init);
module_exit(i2o_bus_exit);
