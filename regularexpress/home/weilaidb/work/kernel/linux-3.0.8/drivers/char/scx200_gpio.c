#define DRVNAME "scx200_gpio"
static struct platform_device *pdev;
MODULE_AUTHOR("Christer Weinigel <wingel@nano-system.com>");
MODULE_DESCRIPTION("NatSemi/AMD SCx200 GPIO Pin Driver");
MODULE_LICENSE("GPL");
static int major = 0;
module_param(major, int, 0);
MODULE_PARM_DESC(major, "Major device number");
#define MAX_PINS 32
struct nsc_gpio_ops scx200_gpio_ops = ;
EXPORT_SYMBOL_GPL(scx200_gpio_ops);
static int scx200_gpio_open(struct inode *inode, struct file *file)
static int scx200_gpio_release(struct inode *inode, struct file *file)
static const struct file_operations scx200_gpio_fileops = ;
static struct cdev scx200_gpio_cdev;
static int __init scx200_gpio_init(void)
static void __exit scx200_gpio_cleanup(void)
module_init(scx200_gpio_init);
module_exit(scx200_gpio_cleanup);
