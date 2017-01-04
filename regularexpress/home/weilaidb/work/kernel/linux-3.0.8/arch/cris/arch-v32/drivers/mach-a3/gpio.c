#define VIRT_I2C_ADDR 0x40
#define GPIO_MAJOR 120
#define I2C_INTERRUPT_BITS 0x300
#define D(x)
static DEFINE_MUTEX(gpio_mutex);
static char gpio_name[] = "etrax gpio";
static int virtual_gpio_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
static long gpio_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static ssize_t gpio_write(struct file *file, const char __user *buf,
size_t count, loff_t *off);
static int gpio_open(struct inode *inode, struct file *filp);
static int gpio_release(struct inode *inode, struct file *filp);
static unsigned int gpio_poll(struct file *filp,
struct poll_table_struct *wait);
struct gpio_private ;
static void gpio_set_alarm(struct gpio_private *priv);
static int gpio_leds_ioctl(unsigned int cmd, unsigned long arg);
static int gpio_pwm_ioctl(struct gpio_private *priv, unsigned int cmd,
unsigned long arg);
static struct gpio_private *alarmlist;
static int wanted_interrupts;
static DEFINE_SPINLOCK(gpio_lock);
#define NUM_PORTS (GPIO_MINOR_LAST+1)
#define GIO_REG_RD_ADDR(reg) \
(unsigned long *)(regi_gio + REG_RD_ADDR_gio_##reg)
#define GIO_REG_WR_ADDR(reg) \
(unsigned long *)(regi_gio + REG_WR_ADDR_gio_##reg)
static unsigned long led_dummy;
static unsigned long port_d_dummy;
static unsigned long port_e_dummy;
static unsigned long virtual_dummy;
static unsigned long virtual_rw_pv_oe = CONFIG_ETRAX_DEF_GIO_PV_OE;
static unsigned short cached_virtual_gpio_read;
static unsigned long *data_out[NUM_PORTS] = ;
static unsigned long *data_in[NUM_PORTS] = ;
static unsigned long changeable_dir[NUM_PORTS] = ;
static unsigned long changeable_bits[NUM_PORTS] = ;
static unsigned long *dir_oe[NUM_PORTS] = ;
static void gpio_set_alarm(struct gpio_private *priv)
static unsigned int gpio_poll(struct file *file, struct poll_table_struct *wait)
static irqreturn_t gpio_interrupt(int irq, void *dev_id)
static void gpio_write_bit(unsigned long *port, unsigned char data, int bit,
unsigned char clk_mask, unsigned char data_mask)
static void gpio_write_byte(struct gpio_private *priv, unsigned long *port,
unsigned char data)
static ssize_t gpio_write(struct file *file, const char __user *buf,
size_t count, loff_t *off)
static int gpio_open(struct inode *inode, struct file *filp)
static int gpio_release(struct inode *inode, struct file *filp)
inline unsigned long setget_input(struct gpio_private *priv, unsigned long arg)
static inline unsigned long setget_output(struct gpio_private *priv,
unsigned long arg)
static long gpio_ioctl_unlocked(struct file *file,
unsigned int cmd, unsigned long arg)
static long gpio_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int virtual_gpio_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int gpio_leds_ioctl(unsigned int cmd, unsigned long arg)
static int gpio_pwm_set_mode(unsigned long arg, int pwm_port)
static int gpio_pwm_set_period(unsigned long arg, int pwm_port)
static int gpio_pwm_set_duty(unsigned long arg, int pwm_port)
static int gpio_pwm_ioctl(struct gpio_private *priv, unsigned int cmd,
unsigned long arg)
static const struct file_operations gpio_fops = ;
static void __init virtual_gpio_init(void)
static int __init gpio_init(void)
module_init(gpio_init);
