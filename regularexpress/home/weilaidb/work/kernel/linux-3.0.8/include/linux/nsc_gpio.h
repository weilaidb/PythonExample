struct nsc_gpio_ops ;
extern ssize_t nsc_gpio_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos);
extern ssize_t nsc_gpio_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos);
extern void nsc_gpio_dump(struct nsc_gpio_ops *amp, unsigned index);
