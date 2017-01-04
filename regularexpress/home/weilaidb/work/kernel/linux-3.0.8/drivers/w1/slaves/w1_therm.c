MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <johnpol@2ka.mipt.ru>");
MODULE_DESCRIPTION("Driver for 1-wire Dallas network protocol, temperature family.");
static int w1_strong_pullup = 1;
module_param_named(strong_pullup, w1_strong_pullup, int, 0);
static u8 bad_roms[][9] = ;
static ssize_t w1_therm_read(struct device *device,
struct device_attribute *attr, char *buf);
static struct device_attribute w1_therm_attr =
__ATTR(w1_slave, S_IRUGO, w1_therm_read, NULL);
static int w1_therm_add_slave(struct w1_slave *sl)
static void w1_therm_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_therm_fops = ;
static struct w1_family w1_therm_family_DS18S20 = ;
static struct w1_family w1_therm_family_DS18B20 = ;
static struct w1_family w1_therm_family_DS1822 = ;
struct w1_therm_family_converter
;
static inline int w1_DS18B20_convert_temp(u8 rom[9]);
static inline int w1_DS18S20_convert_temp(u8 rom[9]);
static struct w1_therm_family_converter w1_therm_families[] = ;
static inline int w1_DS18B20_convert_temp(u8 rom[9])
static inline int w1_DS18S20_convert_temp(u8 rom[9])
static inline int w1_convert_temp(u8 rom[9], u8 fid)
static int w1_therm_check_rom(u8 rom[9])
static ssize_t w1_therm_read(struct device *device,
struct device_attribute *attr, char *buf)
static int __init w1_therm_init(void)
static void __exit w1_therm_fini(void)
module_init(w1_therm_init);
module_exit(w1_therm_fini);
