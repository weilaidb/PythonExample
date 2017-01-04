bool send_notify_to_eventfd(struct lg_cpu *cpu)
static int add_eventfd(struct lguest *lg, unsigned long addr, int fd)
static int attach_eventfd(struct lguest *lg, const unsigned long __user *input)
static int user_send_irq(struct lg_cpu *cpu, const unsigned long __user *input)
static ssize_t read(struct file *file, char __user *user, size_t size,loff_t*o)
static int lg_cpu_start(struct lg_cpu *cpu, unsigned id, unsigned long start_ip)
static int initialize(struct file *file, const unsigned long __user *input)
static ssize_t write(struct file *file, const char __user *in,
size_t size, loff_t *off)
static int close(struct inode *inode, struct file *file)
static const struct file_operations lguest_fops = ;
static struct miscdevice lguest_dev = ;
int __init lguest_device_init(void)
void __exit lguest_device_remove(void)
