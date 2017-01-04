#define DEFAULT_BASE 0x378
#define DRVNAME "i2c-parport-light"
static struct platform_device *pdev;
static u16 base;
module_param(base, ushort, 0);
MODULE_PARM_DESC(base, "Base I/O address");
static int irq;
module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "IRQ (optional)");
static inline void port_write(unsigned char p, unsigned char d)
static inline unsigned char port_read(unsigned char p)
static inline void line_set(int state, const struct lineop *op)
static inline int line_get(const struct lineop *op)
static void parport_setscl(void *data, int state)
static void parport_setsda(void *data, int state)
static int parport_getscl(void *data)
static int parport_getsda(void *data)
static struct i2c_algo_bit_data parport_algo_data = ;
static struct i2c_adapter parport_adapter = ;
static struct i2c_smbus_alert_setup alert_data = ;
static struct i2c_client *ara;
static struct lineop parport_ctrl_irq = ;
static int __devinit i2c_parport_probe(struct platform_device *pdev)
static int __devexit i2c_parport_remove(struct platform_device *pdev)
static struct platform_driver i2c_parport_driver = ;
static int __init i2c_parport_device_add(u16 address)
static int __init i2c_parport_init(void)
static void __exit i2c_parport_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("I2C bus over parallel port (light)");
MODULE_LICENSE("GPL");
module_init(i2c_parport_init);
module_exit(i2c_parport_exit);
