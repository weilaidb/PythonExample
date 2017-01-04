#define DEVNAME "pc8736x_gpio"
MODULE_AUTHOR("Jim Cromie <jim.cromie@gmail.com>");
MODULE_DESCRIPTION("NatSemi/Winbond PC-8736x GPIO Pin Driver");
MODULE_LICENSE("GPL");
static int major;
module_param(major, int, 0);
MODULE_PARM_DESC(major, "Major device number");
static DEFINE_MUTEX(pc8736x_gpio_config_lock);
static unsigned pc8736x_gpio_base;
static u8 pc8736x_gpio_shadow[4];
#define SIO_BASE1       0x2E
#define SIO_BASE2       0x4E
#define SIO_SID		0x20
#define SIO_SID_PC87365	0xe5
#define SIO_SID_PC87366	0xe9
#define SIO_CF1		0x21
#define PC8736X_GPIO_RANGE	16
#define PC8736X_GPIO_CT		32
#define SIO_UNIT_SEL	0x7
#define SIO_UNIT_ACT	0x30
#define SIO_GPIO_UNIT	0x7
#define SIO_VLM_UNIT	0x0D
#define SIO_TMS_UNIT	0x0E
#define SIO_BASE_HADDR		0x60
#define SIO_BASE_LADDR		0x61
#define SIO_GPIO_PIN_SELECT	0xF0
#define SIO_GPIO_PIN_CONFIG     0xF1
#define SIO_GPIO_PIN_EVENT      0xF2
static unsigned char superio_cmd = 0;
static unsigned char selected_device = 0xFF;
static int port_offset[] = ;
#define PORT_OUT	0
#define PORT_IN		1
#define PORT_EVT_EN	2
#define PORT_EVT_STST	3
static struct platform_device *pdev;
static inline void superio_outb(int addr, int val)
static inline int superio_inb(int addr)
static int pc8736x_superio_present(void)
static void device_select(unsigned devldn)
static void select_pin(unsigned iminor)
static inline u32 pc8736x_gpio_configure_fn(unsigned index, u32 mask, u32 bits,
u32 func_slct)
static u32 pc8736x_gpio_configure(unsigned index, u32 mask, u32 bits)
static int pc8736x_gpio_get(unsigned minor)
static void pc8736x_gpio_set(unsigned minor, int val)
static int pc8736x_gpio_current(unsigned minor)
static void pc8736x_gpio_change(unsigned index)
static struct nsc_gpio_ops pc8736x_gpio_ops = ;
static int pc8736x_gpio_open(struct inode *inode, struct file *file)
static const struct file_operations pc8736x_gpio_fileops = ;
static void __init pc8736x_init_shadow(void)
static struct cdev pc8736x_gpio_cdev;
static int __init pc8736x_gpio_init(void)
static void __exit pc8736x_gpio_cleanup(void)
module_init(pc8736x_gpio_init);
module_exit(pc8736x_gpio_cleanup);
