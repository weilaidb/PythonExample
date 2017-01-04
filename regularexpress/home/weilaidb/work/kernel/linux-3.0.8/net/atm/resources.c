#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
LIST_HEAD(atm_devs);
DEFINE_MUTEX(atm_dev_mutex);
static struct atm_dev *__alloc_atm_dev(const char *type)
static struct atm_dev *__atm_dev_lookup(int number)
struct atm_dev *atm_dev_lookup(int number)
EXPORT_SYMBOL(atm_dev_lookup);
struct atm_dev *atm_dev_register(const char *type, struct device *parent,
const struct atmdev_ops *ops, int number,
unsigned long *flags)
EXPORT_SYMBOL(atm_dev_register);
void atm_dev_deregister(struct atm_dev *dev)
EXPORT_SYMBOL(atm_dev_deregister);
static void copy_aal_stats(struct k_atm_aal_stats *from,
struct atm_aal_stats *to)
static void subtract_aal_stats(struct k_atm_aal_stats *from,
struct atm_aal_stats *to)
static int fetch_stats(struct atm_dev *dev, struct atm_dev_stats __user *arg,
int zero)
int atm_dev_ioctl(unsigned int cmd, void __user *arg, int compat)
void *atm_dev_seq_start(struct seq_file *seq, loff_t *pos)
void atm_dev_seq_stop(struct seq_file *seq, void *v)
void *atm_dev_seq_next(struct seq_file *seq, void *v, loff_t *pos)
