static void inject_mce(struct mce *m)
static void raise_poll(struct mce *m)
static void raise_exception(struct mce *m, struct pt_regs *pregs)
static cpumask_var_t mce_inject_cpumask;
static int mce_raise_notify(struct notifier_block *self,
unsigned long val, void *data)
static struct notifier_block mce_raise_nb = ;
static int raise_local(void)
static void raise_mce(struct mce *m)
static ssize_t mce_write(struct file *filp, const char __user *ubuf,
size_t usize, loff_t *off)
static int inject_init(void)
module_init(inject_init);
MODULE_LICENSE("GPL");
