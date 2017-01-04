#define OSM_NAME	"config-osm"
#define OSM_VERSION	"1.323"
#define OSM_DESCRIPTION	"I2O Configuration OSM"
#define S_IWRSR (S_IRUSR | S_IWUSR)
static struct i2o_driver i2o_config_driver;
static struct i2o_driver i2o_config_driver = ;
static int __init i2o_config_init(void)
static void i2o_config_exit(void)
MODULE_AUTHOR("Markus Lidel <Markus.Lidel@shadowconnect.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(OSM_DESCRIPTION);
MODULE_VERSION(OSM_VERSION);
module_init(i2o_config_init);
module_exit(i2o_config_exit);
