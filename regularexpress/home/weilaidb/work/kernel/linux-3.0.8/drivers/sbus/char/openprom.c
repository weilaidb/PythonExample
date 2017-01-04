MODULE_AUTHOR("Thomas K. Dyas (tdyas@noc.rutgers.edu) and Eddie C. Dost  (ecd@skynet.be)");
MODULE_DESCRIPTION("OPENPROM Configuration Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.0");
MODULE_ALIAS_MISCDEV(SUN_OPENPROM_MINOR);
typedef struct openprom_private_data
DATA;
static DEFINE_MUTEX(openprom_mutex);
static struct device_node *options_node;
static int copyin(struct openpromio __user *info, struct openpromio **opp_p)
static int getstrings(struct openpromio __user *info, struct openpromio **opp_p)
static int copyout(void __user *info, struct openpromio *opp, int len)
static int opromgetprop(void __user *argp, struct device_node *dp, struct openpromio *op, int bufsize)
static int opromnxtprop(void __user *argp, struct device_node *dp, struct openpromio *op, int bufsize)
static int opromsetopt(struct device_node *dp, struct openpromio *op, int bufsize)
static int opromnext(void __user *argp, unsigned int cmd, struct device_node *dp, struct openpromio *op, int bufsize, DATA *data)
static int oprompci2node(void __user *argp, struct device_node *dp, struct openpromio *op, int bufsize, DATA *data)
static int oprompath2node(void __user *argp, struct device_node *dp, struct openpromio *op, int bufsize, DATA *data)
static int opromgetbootargs(void __user *argp, struct openpromio *op, int bufsize)
static long openprom_sunos_ioctl(struct file * file,
unsigned int cmd, unsigned long arg,
struct device_node *dp)
static struct device_node *get_node(phandle n, DATA *data)
static int copyin_string(char __user *user, size_t len, char **ptr)
static int opiocget(void __user *argp, DATA *data)
static int opiocnextprop(void __user *argp, DATA *data)
static int opiocset(void __user *argp, DATA *data)
static int opiocgetnext(unsigned int cmd, void __user *argp)
static int openprom_bsd_ioctl(struct file * file,
unsigned int cmd, unsigned long arg)
static long openprom_ioctl(struct file * file,
unsigned int cmd, unsigned long arg)
static long openprom_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int openprom_open(struct inode * inode, struct file * file)
static int openprom_release(struct inode * inode, struct file * file)
static const struct file_operations openprom_fops = ;
static struct miscdevice openprom_dev = ;
static int __init openprom_init(void)
static void __exit openprom_cleanup(void)
module_init(openprom_init);
module_exit(openprom_cleanup);
