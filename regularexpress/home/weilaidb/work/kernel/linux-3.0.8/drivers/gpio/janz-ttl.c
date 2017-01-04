#define DRV_NAME "janz-ttl"
#define PORTA_DIRECTION		0x23
#define PORTB_DIRECTION		0x2B
#define PORTC_DIRECTION		0x06
#define PORTA_IOCTL		0x24
#define PORTB_IOCTL		0x2C
#define PORTC_IOCTL		0x07
#define MASTER_INT_CTL		0x00
#define MASTER_CONF_CTL		0x01
#define CONF_PAE		(1 << 2)
#define CONF_PBE		(1 << 7)
#define CONF_PCE		(1 << 4)
struct ttl_control_regs ;
struct ttl_module ;
static int ttl_get_value(struct gpio_chip *gpio, unsigned offset)
static void ttl_set_value(struct gpio_chip *gpio, unsigned offset, int value)
static void __devinit ttl_write_reg(struct ttl_module *mod, u8 reg, u16 val)
static void __devinit ttl_setup_device(struct ttl_module *mod)
static int __devinit ttl_probe(struct platform_device *pdev)
static int __devexit ttl_remove(struct platform_device *pdev)
static struct platform_driver ttl_driver = ;
static int __init ttl_init(void)
static void __exit ttl_exit(void)
MODULE_AUTHOR("Ira W. Snyder <iws@ovro.caltech.edu>");
MODULE_DESCRIPTION("Janz MODULbus VMOD-TTL Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:janz-ttl");
module_init(ttl_init);
module_exit(ttl_exit);
