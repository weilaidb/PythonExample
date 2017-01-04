#define pr_fmt(fmt) "intc: " fmt
LIST_HEAD(intc_list);
DEFINE_RAW_SPINLOCK(intc_big_lock);
unsigned int nr_intc_controllers;
static unsigned int default_prio_level = 2;
static unsigned int intc_prio_level[NR_IRQS];
unsigned int intc_get_dfl_prio_level(void)
unsigned int intc_get_prio_level(unsigned int irq)
void intc_set_prio_level(unsigned int irq, unsigned int level)
static void intc_redirect_irq(unsigned int irq, struct irq_desc *desc)
static void __init intc_register_irq(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id,
unsigned int irq)
static unsigned int __init save_reg(struct intc_desc_int *d,
unsigned int cnt,
unsigned long value,
unsigned int smp)
int __init register_intc_controller(struct intc_desc *desc)
static int intc_suspend(void)
static void intc_resume(void)
struct syscore_ops intc_syscore_ops = ;
struct sysdev_class intc_sysdev_class = ;
static ssize_t
show_intc_name(struct sys_device *dev, struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(name, S_IRUGO, show_intc_name, NULL);
static int __init register_intc_sysdevs(void)
device_initcall(register_intc_sysdevs);
