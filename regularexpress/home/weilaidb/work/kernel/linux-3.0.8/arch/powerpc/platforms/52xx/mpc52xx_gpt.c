MODULE_DESCRIPTION("Freescale MPC52xx gpt driver");
MODULE_AUTHOR("Sascha Hauer, Grant Likely, Albrecht Dreß");
MODULE_LICENSE("GPL");
struct mpc52xx_gpt_priv ;
LIST_HEAD(mpc52xx_gpt_list);
DEFINE_MUTEX(mpc52xx_gpt_list_mutex);
#define MPC52xx_GPT_MODE_MS_MASK	(0x07)
#define MPC52xx_GPT_MODE_MS_IC		(0x01)
#define MPC52xx_GPT_MODE_MS_OC		(0x02)
#define MPC52xx_GPT_MODE_MS_PWM		(0x03)
#define MPC52xx_GPT_MODE_MS_GPIO	(0x04)
#define MPC52xx_GPT_MODE_GPIO_MASK	(0x30)
#define MPC52xx_GPT_MODE_GPIO_OUT_LOW	(0x20)
#define MPC52xx_GPT_MODE_GPIO_OUT_HIGH	(0x30)
#define MPC52xx_GPT_MODE_COUNTER_ENABLE	(0x1000)
#define MPC52xx_GPT_MODE_CONTINUOUS	(0x0400)
#define MPC52xx_GPT_MODE_OPEN_DRAIN	(0x0200)
#define MPC52xx_GPT_MODE_IRQ_EN		(0x0100)
#define MPC52xx_GPT_MODE_WDT_EN		(0x8000)
#define MPC52xx_GPT_MODE_ICT_MASK	(0x030000)
#define MPC52xx_GPT_MODE_ICT_RISING	(0x010000)
#define MPC52xx_GPT_MODE_ICT_FALLING	(0x020000)
#define MPC52xx_GPT_MODE_ICT_TOGGLE	(0x030000)
#define MPC52xx_GPT_MODE_WDT_PING	(0xa5)
#define MPC52xx_GPT_STATUS_IRQMASK	(0x000f)
#define MPC52xx_GPT_CAN_WDT		(1 << 0)
#define MPC52xx_GPT_IS_WDT		(1 << 1)
static void mpc52xx_gpt_irq_unmask(struct irq_data *d)
static void mpc52xx_gpt_irq_mask(struct irq_data *d)
static void mpc52xx_gpt_irq_ack(struct irq_data *d)
static int mpc52xx_gpt_irq_set_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip mpc52xx_gpt_irq_chip = ;
void mpc52xx_gpt_irq_cascade(unsigned int virq, struct irq_desc *desc)
static int mpc52xx_gpt_irq_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int mpc52xx_gpt_irq_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq,
unsigned int *out_flags)
static struct irq_host_ops mpc52xx_gpt_irq_ops = ;
static void
mpc52xx_gpt_irq_setup(struct mpc52xx_gpt_priv *gpt, struct device_node *node)
#if defined(CONFIG_GPIOLIB)
static inline struct mpc52xx_gpt_priv *gc_to_mpc52xx_gpt(struct gpio_chip *gc)
static int mpc52xx_gpt_gpio_get(struct gpio_chip *gc, unsigned int gpio)
static void
mpc52xx_gpt_gpio_set(struct gpio_chip *gc, unsigned int gpio, int v)
static int mpc52xx_gpt_gpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int
mpc52xx_gpt_gpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static void
mpc52xx_gpt_gpio_setup(struct mpc52xx_gpt_priv *gpt, struct device_node *node)
static void
mpc52xx_gpt_gpio_setup(struct mpc52xx_gpt_priv *p, struct device_node *np)
struct mpc52xx_gpt_priv *mpc52xx_gpt_from_irq(int irq)
EXPORT_SYMBOL(mpc52xx_gpt_from_irq);
static int mpc52xx_gpt_do_start(struct mpc52xx_gpt_priv *gpt, u64 period,
int continuous, int as_wdt)
int mpc52xx_gpt_start_timer(struct mpc52xx_gpt_priv *gpt, u64 period,
int continuous)
EXPORT_SYMBOL(mpc52xx_gpt_start_timer);
int mpc52xx_gpt_stop_timer(struct mpc52xx_gpt_priv *gpt)
EXPORT_SYMBOL(mpc52xx_gpt_stop_timer);
u64 mpc52xx_gpt_timer_period(struct mpc52xx_gpt_priv *gpt)
EXPORT_SYMBOL(mpc52xx_gpt_timer_period);
#if defined(CONFIG_MPC5200_WDT)
#define WDT_IDENTITY	    "mpc52xx watchdog on GPT0"
static unsigned long wdt_is_active;
static struct mpc52xx_gpt_priv *mpc52xx_gpt_wdt;
static inline void mpc52xx_gpt_wdt_ping(struct mpc52xx_gpt_priv *gpt_wdt)
static ssize_t mpc52xx_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct watchdog_info mpc5200_wdt_info = ;
static long mpc52xx_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int mpc52xx_wdt_open(struct inode *inode, struct file *file)
static int mpc52xx_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations mpc52xx_wdt_fops = ;
static struct miscdevice mpc52xx_wdt_miscdev = ;
static int __devinit mpc52xx_gpt_wdt_init(void)
static int mpc52xx_gpt_wdt_setup(struct mpc52xx_gpt_priv *gpt,
const u32 *period)
static int __devinit mpc52xx_gpt_wdt_init(void)
static inline int mpc52xx_gpt_wdt_setup(struct mpc52xx_gpt_priv *gpt,
const u32 *period)
static int __devinit mpc52xx_gpt_probe(struct platform_device *ofdev)
static int mpc52xx_gpt_remove(struct platform_device *ofdev)
static const struct of_device_id mpc52xx_gpt_match[] = ;
static struct platform_driver mpc52xx_gpt_driver = ;
static int __init mpc52xx_gpt_init(void)
subsys_initcall(mpc52xx_gpt_init);
device_initcall(mpc52xx_gpt_wdt_init);
