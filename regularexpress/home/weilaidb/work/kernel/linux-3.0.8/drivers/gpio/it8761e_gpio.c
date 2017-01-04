#define SIO_CHIP_ID		0x8761
#define CHIP_ID_HIGH_BYTE	0x20
#define CHIP_ID_LOW_BYTE	0x21
static u8 ports[2] = ;
static u8 port;
static DEFINE_SPINLOCK(sio_lock);
#define GPIO_NAME		"it8761-gpio"
#define GPIO_BA_HIGH_BYTE	0x60
#define GPIO_BA_LOW_BYTE	0x61
#define GPIO_IOSIZE		4
#define GPIO1X_IO		0xf0
#define GPIO2X_IO		0xf1
static u16 gpio_ba;
static u8 read_reg(u8 addr, u8 port)
static void write_reg(u8 data, u8 addr, u8 port)
static void enter_conf_mode(u8 port)
static void exit_conf_mode(u8 port)
static void enter_gpio_mode(u8 port)
static int it8761e_gpio_get(struct gpio_chip *gc, unsigned gpio_num)
static int it8761e_gpio_direction_in(struct gpio_chip *gc, unsigned gpio_num)
static void it8761e_gpio_set(struct gpio_chip *gc,
unsigned gpio_num, int val)
static int it8761e_gpio_direction_out(struct gpio_chip *gc,
unsigned gpio_num, int val)
static struct gpio_chip it8761e_gpio_chip = ;
static int __init it8761e_gpio_init(void)
static void __exit it8761e_gpio_exit(void)
module_init(it8761e_gpio_init);
module_exit(it8761e_gpio_exit);
MODULE_AUTHOR("Denis Turischev <denis@compulab.co.il>");
MODULE_DESCRIPTION("GPIO interface for IT8761E Super I/O chip");
MODULE_LICENSE("GPL");
