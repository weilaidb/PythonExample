#define NAME "nsc_gpio"
void nsc_gpio_dump(struct nsc_gpio_ops *amp, unsigned index)
ssize_t nsc_gpio_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
ssize_t nsc_gpio_read(struct file *file, char __user * buf,
size_t len, loff_t * ppos)
EXPORT_SYMBOL(nsc_gpio_write);
EXPORT_SYMBOL(nsc_gpio_read);
EXPORT_SYMBOL(nsc_gpio_dump);
static int __init nsc_gpio_init(void)
static void __exit nsc_gpio_cleanup(void)
module_init(nsc_gpio_init);
module_exit(nsc_gpio_cleanup);
MODULE_AUTHOR("Jim Cromie <jim.cromie@gmail.com>");
MODULE_DESCRIPTION("NatSemi GPIO Common Methods");
MODULE_LICENSE("GPL");
