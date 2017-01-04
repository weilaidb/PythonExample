#define NAME			"cs5535_gpio"
MODULE_AUTHOR("Ben Gardner <bgardner@wabtec.com>");
MODULE_DESCRIPTION("AMD CS5535/CS5536 GPIO Pin Driver");
MODULE_LICENSE("GPL");
static int major;
module_param(major, int, 0);
MODULE_PARM_DESC(major, "Major device number");
static ulong mask;
module_param(mask, ulong, 0);
MODULE_PARM_DESC(mask, "GPIO channel mask");
#define MSR_LBAR_GPIO		0x5140000C
static u32 gpio_base;
static struct pci_device_id divil_pci[] = ;
MODULE_DEVICE_TABLE(pci, divil_pci);
static struct cdev cs5535_gpio_cdev;
#define CS5535_GPIO_COUNT	32
#define CS5535_GPIO_SIZE	256
struct gpio_regmap ;
static struct gpio_regmap rm[] =
;
static inline u32 cs5535_lowhigh_base(int reg)
static ssize_t cs5535_gpio_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static ssize_t cs5535_gpio_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
static int cs5535_gpio_open(struct inode *inode, struct file *file)
static const struct file_operations cs5535_gpio_fops = ;
static int __init cs5535_gpio_init(void)
static void __exit cs5535_gpio_cleanup(void)
module_init(cs5535_gpio_init);
module_exit(cs5535_gpio_cleanup);
