#define	DRIVER_VERSION	"2 May 2005"
#define	DRIVER_NAME	(tps65010_driver.driver.name)
MODULE_DESCRIPTION("TPS6501x Power Management Driver");
MODULE_LICENSE("GPL");
static struct i2c_driver tps65010_driver;
enum tps_model ;
struct tps65010 ;
#define	POWER_POLL_DELAY	msecs_to_jiffies(5000)
#if	defined(DEBUG) || defined(CONFIG_DEBUG_FS)
static void dbg_chgstat(char *buf, size_t len, u8 chgstatus)
static void dbg_regstat(char *buf, size_t len, u8 regstatus)
static void dbg_chgconf(int por, char *buf, size_t len, u8 chgconfig)
static void show_chgstatus(const char *label, u8 chgstatus)
static void show_regstatus(const char *label, u8 regstatus)
static void show_chgconfig(int por, const char *label, u8 chgconfig)
static inline void show_chgstatus(const char *label, u8 chgstatus)
static inline void show_regstatus(const char *label, u8 chgstatus)
static inline void show_chgconfig(int por, const char *label, u8 chgconfig)
static int dbg_show(struct seq_file *s, void *_)
static int dbg_tps_open(struct inode *inode, struct file *file)
static const struct file_operations debug_fops = ;
#define	DEBUG_FOPS	&debug_fops
#define	DEBUG_FOPS	NULL
static void tps65010_interrupt(struct tps65010 *tps)
static void tps65010_work(struct work_struct *work)
static irqreturn_t tps65010_irq(int irq, void *_tps)
static void
tps65010_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int
tps65010_output(struct gpio_chip *chip, unsigned offset, int value)
static int tps65010_gpio_get(struct gpio_chip *chip, unsigned offset)
static struct tps65010 *the_tps;
static int __exit tps65010_remove(struct i2c_client *client)
static int tps65010_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static const struct i2c_device_id tps65010_id[] = ;
MODULE_DEVICE_TABLE(i2c, tps65010_id);
static struct i2c_driver tps65010_driver = ;
int tps65010_set_vbus_draw(unsigned mA)
EXPORT_SYMBOL(tps65010_set_vbus_draw);
int tps65010_set_gpio_out_value(unsigned gpio, unsigned value)
EXPORT_SYMBOL(tps65010_set_gpio_out_value);
int tps65010_set_led(unsigned led, unsigned mode)
EXPORT_SYMBOL(tps65010_set_led);
int tps65010_set_vib(unsigned value)
EXPORT_SYMBOL(tps65010_set_vib);
int tps65010_set_low_pwr(unsigned mode)
EXPORT_SYMBOL(tps65010_set_low_pwr);
int tps65010_config_vregs1(unsigned value)
EXPORT_SYMBOL(tps65010_config_vregs1);
int tps65010_config_vdcdc2(unsigned value)
EXPORT_SYMBOL(tps65010_config_vdcdc2);
int tps65013_set_low_pwr(unsigned mode)
EXPORT_SYMBOL(tps65013_set_low_pwr);
static int __init tps_init(void)
subsys_initcall(tps_init);
static void __exit tps_exit(void)
module_exit(tps_exit);
