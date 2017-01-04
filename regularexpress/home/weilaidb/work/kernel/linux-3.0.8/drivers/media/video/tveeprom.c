MODULE_DESCRIPTION("i2c Hauppauge eeprom decoder driver");
MODULE_AUTHOR("John Klar");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
#define STRM(array, i) \
(i < sizeof(array) / sizeof(char *) ? array[i] : "unknown")
#define tveeprom_info(fmt, arg...) \
v4l_printk(KERN_INFO, "tveeprom", c->adapter, c->addr, fmt , ## arg)
#define tveeprom_warn(fmt, arg...) \
v4l_printk(KERN_WARNING, "tveeprom", c->adapter, c->addr, fmt , ## arg)
#define tveeprom_dbg(fmt, arg...) do  while (0)
static struct HAUPPAUGE_TUNER_FMT
hauppauge_tuner_fmt[] =
;
static struct HAUPPAUGE_TUNER
hauppauge_tuner[] =
;
static struct HAUPPAUGE_AUDIOIC
audioIC[] =
;
static const char *decoderIC[] = ;
static int hasRadioTuner(int tunerType)
void tveeprom_hauppauge_analog(struct i2c_client *c, struct tveeprom *tvee,
unsigned char *eeprom_data)
EXPORT_SYMBOL(tveeprom_hauppauge_analog);
int tveeprom_read(struct i2c_client *c, unsigned char *eedata, int len)
EXPORT_SYMBOL(tveeprom_read);
