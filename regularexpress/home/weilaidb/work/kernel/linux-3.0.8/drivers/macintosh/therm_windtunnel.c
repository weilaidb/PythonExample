#define LOG_TEMP		0
static struct  x;
#define T(x,y)			(((x)<<8) | (y)*0x100/10 )
static struct  fan_table[] = ;
static void
print_temp( const char *s, int temp )
static ssize_t
show_cpu_temperature( struct device *dev, struct device_attribute *attr, char *buf )
static ssize_t
show_case_temperature( struct device *dev, struct device_attribute *attr, char *buf )
static DEVICE_ATTR(cpu_temperature, S_IRUGO, show_cpu_temperature, NULL );
static DEVICE_ATTR(case_temperature, S_IRUGO, show_case_temperature, NULL );
static int
write_reg( struct i2c_client *cl, int reg, int data, int len )
static int
read_reg( struct i2c_client *cl, int reg, int len )
static void
tune_fan( int fan_setting )
static void
poll_temp( void )
static void
setup_hardware( void )
static void
restore_regs( void )
static int control_loop(void *dummy)
static int
do_attach( struct i2c_adapter *adapter )
static int
do_remove(struct i2c_client *client)
static int
attach_fan( struct i2c_client *cl )
static int
attach_thermostat( struct i2c_client *cl )
enum chip ;
static const struct i2c_device_id therm_windtunnel_id[] = ;
static int
do_probe(struct i2c_client *cl, const struct i2c_device_id *id)
static struct i2c_driver g4fan_driver = ;
static int therm_of_probe(struct platform_device *dev)
static int
therm_of_remove( struct platform_device *dev )
static const struct of_device_id therm_of_match[] = ;
static struct platform_driver therm_of_driver = ;
struct apple_thermal_info ;
static int __init
g4fan_init( void )
static void __exit
g4fan_exit( void )
module_init(g4fan_init);
module_exit(g4fan_exit);
MODULE_AUTHOR("Samuel Rydh <samuel@ibrium.se>");
MODULE_DESCRIPTION("Apple G4 (windtunnel) fan controller");
MODULE_LICENSE("GPL");
