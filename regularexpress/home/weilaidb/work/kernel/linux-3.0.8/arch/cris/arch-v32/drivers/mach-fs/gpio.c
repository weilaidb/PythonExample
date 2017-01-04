#define VIRT_I2C_ADDR 0x40
#define GPIO_MAJOR 120
#define D(x)
static DEFINE_MUTEX(gpio_mutex);
static char gpio_name[] = "etrax gpio";
static int virtual_gpio_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
static long gpio_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static ssize_t gpio_write(struct file *file, const char *buf, size_t count,
loff_t *off);
static int gpio_open(struct inode *inode, struct file *filp);
static int gpio_release(struct inode *inode, struct file *filp);
static unsigned int gpio_poll(struct file *filp,
struct poll_table_struct *wait);
struct gpio_private ;
static struct gpio_private *alarmlist;
static int gpio_some_alarms;
static unsigned long gpio_pa_high_alarms;
static unsigned long gpio_pa_low_alarms;
static DEFINE_SPINLOCK(alarm_lock);
#define NUM_PORTS (GPIO_MINOR_LAST+1)
#define GIO_REG_RD_ADDR(reg) \
(volatile unsigned long *)(regi_gio + REG_RD_ADDR_gio_##reg)
#define GIO_REG_WR_ADDR(reg) \
(volatile unsigned long *)(regi_gio + REG_RD_ADDR_gio_##reg)
unsigned long led_dummy;
static unsigned long virtual_dummy;
static unsigned long virtual_rw_pv_oe = CONFIG_ETRAX_DEF_GIO_PV_OE;
static unsigned short cached_virtual_gpio_read;
static volatile unsigned long *data_out[NUM_PORTS] = ;
static volatile unsigned long *data_in[NUM_PORTS] = ;
static unsigned long changeable_dir[NUM_PORTS] = ;
static unsigned long changeable_bits[NUM_PORTS] = ;
static volatile unsigned long *dir_oe[NUM_PORTS] = ;
static unsigned int gpio_poll(struct file *file, struct poll_table_struct *wait)
int etrax_gpio_wake_up_check(void)
static irqreturn_t
gpio_poll_timer_interrupt(int irq, void *dev_id)
static irqreturn_t
gpio_pa_interrupt(int irq, void *dev_id)
static ssize_t gpio_write(struct file *file, const char *buf, size_t count,
loff_t *off)
static int
gpio_open(struct inode *inode, struct file *filp)
static int
gpio_release(struct inode *inode, struct file *filp)
inline unsigned long setget_input(struct gpio_private *priv, unsigned long arg)
inline unsigned long setget_output(struct gpio_private *priv, unsigned long arg)
static int gpio_leds_ioctl(unsigned int cmd, unsigned long arg);
static int
gpio_ioctl_unlocked(struct file *file, unsigned int cmd, unsigned long arg)
static long gpio_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
virtual_gpio_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
gpio_leds_ioctl(unsigned int cmd, unsigned long arg)
static const struct file_operations gpio_fops = ;
static void
virtual_gpio_init(void)
static __init int
gpio_init(void)
module_init(gpio_init);
